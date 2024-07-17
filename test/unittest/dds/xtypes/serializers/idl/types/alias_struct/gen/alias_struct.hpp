// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file alias_struct.hpp
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef FAST_DDS_GENERATED__ALIAS_STRUCT_HPP
#define FAST_DDS_GENERATED__ALIAS_STRUCT_HPP

#include <cstdint>
#include <utility>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(ALIAS_STRUCT_SOURCE)
#define ALIAS_STRUCT_DllAPI __declspec( dllexport )
#else
#define ALIAS_STRUCT_DllAPI __declspec( dllimport )
#endif // ALIAS_STRUCT_SOURCE
#else
#define ALIAS_STRUCT_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define ALIAS_STRUCT_DllAPI
#endif // _WIN32

typedef uint32_t MyLong;

typedef int16_t MyShort;

typedef MyShort MyRecursiveShort;

typedef bool MyBoolean;

typedef MyBoolean MyRecursiveBoolean;

/*!
 * @brief This class represents the structure AliasStruct defined by the user in the IDL file.
 * @ingroup alias_struct
 */
class AliasStruct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport AliasStruct()
    {
    }

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~AliasStruct()
    {
    }

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object AliasStruct that will be copied.
     */
    eProsima_user_DllExport AliasStruct(
            const AliasStruct& x)
    {
                    m_my_long = x.m_my_long;

                    m_my_recursive_short = x.m_my_recursive_short;

                    m_my_recursive_boolean = x.m_my_recursive_boolean;

                    m_my_boolean = x.m_my_boolean;

    }

    /*!
     * @brief Move constructor.
     * @param x Reference to the object AliasStruct that will be copied.
     */
    eProsima_user_DllExport AliasStruct(
            AliasStruct&& x) noexcept
    {
        m_my_long = x.m_my_long;
        m_my_recursive_short = x.m_my_recursive_short;
        m_my_recursive_boolean = x.m_my_recursive_boolean;
        m_my_boolean = x.m_my_boolean;
    }

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object AliasStruct that will be copied.
     */
    eProsima_user_DllExport AliasStruct& operator =(
            const AliasStruct& x)
    {

                    m_my_long = x.m_my_long;

                    m_my_recursive_short = x.m_my_recursive_short;

                    m_my_recursive_boolean = x.m_my_recursive_boolean;

                    m_my_boolean = x.m_my_boolean;

        return *this;
    }

    /*!
     * @brief Move assignment.
     * @param x Reference to the object AliasStruct that will be copied.
     */
    eProsima_user_DllExport AliasStruct& operator =(
            AliasStruct&& x) noexcept
    {

        m_my_long = x.m_my_long;
        m_my_recursive_short = x.m_my_recursive_short;
        m_my_recursive_boolean = x.m_my_recursive_boolean;
        m_my_boolean = x.m_my_boolean;
        return *this;
    }

    /*!
     * @brief Comparison operator.
     * @param x AliasStruct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const AliasStruct& x) const
    {
        return (m_my_long == x.m_my_long &&
           m_my_recursive_short == x.m_my_recursive_short &&
           m_my_recursive_boolean == x.m_my_recursive_boolean &&
           m_my_boolean == x.m_my_boolean);
    }

    /*!
     * @brief Comparison operator.
     * @param x AliasStruct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const AliasStruct& x) const
    {
        return !(*this == x);
    }

    /*!
     * @brief This function sets a value in member my_long
     * @param _my_long New value for member my_long
     */
    eProsima_user_DllExport void my_long(
            MyLong _my_long)
    {
        m_my_long = _my_long;
    }

    /*!
     * @brief This function returns the value of member my_long
     * @return Value of member my_long
     */
    eProsima_user_DllExport MyLong my_long() const
    {
        return m_my_long;
    }

    /*!
     * @brief This function returns a reference to member my_long
     * @return Reference to member my_long
     */
    eProsima_user_DllExport MyLong& my_long()
    {
        return m_my_long;
    }


    /*!
     * @brief This function sets a value in member my_recursive_short
     * @param _my_recursive_short New value for member my_recursive_short
     */
    eProsima_user_DllExport void my_recursive_short(
            MyRecursiveShort _my_recursive_short)
    {
        m_my_recursive_short = _my_recursive_short;
    }

    /*!
     * @brief This function returns the value of member my_recursive_short
     * @return Value of member my_recursive_short
     */
    eProsima_user_DllExport MyRecursiveShort my_recursive_short() const
    {
        return m_my_recursive_short;
    }

    /*!
     * @brief This function returns a reference to member my_recursive_short
     * @return Reference to member my_recursive_short
     */
    eProsima_user_DllExport MyRecursiveShort& my_recursive_short()
    {
        return m_my_recursive_short;
    }


    /*!
     * @brief This function sets a value in member my_recursive_boolean
     * @param _my_recursive_boolean New value for member my_recursive_boolean
     */
    eProsima_user_DllExport void my_recursive_boolean(
            MyRecursiveBoolean _my_recursive_boolean)
    {
        m_my_recursive_boolean = _my_recursive_boolean;
    }

    /*!
     * @brief This function returns the value of member my_recursive_boolean
     * @return Value of member my_recursive_boolean
     */
    eProsima_user_DllExport MyRecursiveBoolean my_recursive_boolean() const
    {
        return m_my_recursive_boolean;
    }

    /*!
     * @brief This function returns a reference to member my_recursive_boolean
     * @return Reference to member my_recursive_boolean
     */
    eProsima_user_DllExport MyRecursiveBoolean& my_recursive_boolean()
    {
        return m_my_recursive_boolean;
    }


    /*!
     * @brief This function sets a value in member my_boolean
     * @param _my_boolean New value for member my_boolean
     */
    eProsima_user_DllExport void my_boolean(
            MyBoolean _my_boolean)
    {
        m_my_boolean = _my_boolean;
    }

    /*!
     * @brief This function returns the value of member my_boolean
     * @return Value of member my_boolean
     */
    eProsima_user_DllExport MyBoolean my_boolean() const
    {
        return m_my_boolean;
    }

    /*!
     * @brief This function returns a reference to member my_boolean
     * @return Reference to member my_boolean
     */
    eProsima_user_DllExport MyBoolean& my_boolean()
    {
        return m_my_boolean;
    }



private:

    MyLong m_my_long{0};
    MyRecursiveShort m_my_recursive_short{0};
    MyRecursiveBoolean m_my_recursive_boolean{false};
    MyBoolean m_my_boolean{false};

};

#endif // _FAST_DDS_GENERATED_ALIAS_STRUCT_HPP_

