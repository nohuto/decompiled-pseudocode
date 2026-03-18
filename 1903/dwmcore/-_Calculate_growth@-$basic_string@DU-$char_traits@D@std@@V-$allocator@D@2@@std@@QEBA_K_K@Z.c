/*
 * XREFs of ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_K_K@Z @ 0x1800C79D0
 * Callers:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_ @ 0x1800C78F8 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_grow_by__lambd.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const___ @ 0x18016BAD8 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_66.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const___unsigned___int64_ @ 0x180174C8C (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180174C8C.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_ @ 0x180174E88 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180174E88.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const___unsigned___int64_ @ 0x180174F50 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180174F50.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_ @ 0x180176A84 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_13.c)
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
