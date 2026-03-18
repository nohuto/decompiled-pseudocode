/*
 * XREFs of ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_K_K@Z @ 0x18004CD1C
 * Callers:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___ @ 0x18004CC64 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x1801586FC (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1801586FC.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_156f8c05752017390d6185e99ef4c093__unsigned___int64_unsigned_short_const___unsigned___int64_ @ 0x180173440 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_180173440.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const___unsigned___int64_ @ 0x180173624 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_180173624.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::_Calculate_growth(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v2 = a2 | 7;
  if ( v2 > 0x7FFFFFFFFFFFFFFELL )
    return 0x7FFFFFFFFFFFFFFELL;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v3 >> 1;
  if ( v3 > 0x7FFFFFFFFFFFFFFELL - (v3 >> 1) )
    return 0x7FFFFFFFFFFFFFFELL;
  result = v4 + v3;
  if ( v2 >= v4 + v3 )
    return v2;
  return result;
}
