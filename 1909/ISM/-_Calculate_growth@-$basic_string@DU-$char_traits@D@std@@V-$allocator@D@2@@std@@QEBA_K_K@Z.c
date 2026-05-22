/*
 * XREFs of ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_K_K@Z @ 0x18013E7B4
 * Callers:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_ @ 0x18013CB14 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_13.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const___unsigned___int64_ @ 0x18013CBBC (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_grow_by__lambd.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const___unsigned___int64_ @ 0x18013CCAC (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_18013CCAC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::string::_Calculate_growth(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v2 = a2 | 0xF;
  if ( v2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0x7FFFFFFFFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v3 >> 1;
  if ( v3 > 0x7FFFFFFFFFFFFFFFLL - (v3 >> 1) )
    return 0x7FFFFFFFFFFFFFFFLL;
  result = v4 + v3;
  if ( v2 >= v4 + v3 )
    return v2;
  return result;
}
