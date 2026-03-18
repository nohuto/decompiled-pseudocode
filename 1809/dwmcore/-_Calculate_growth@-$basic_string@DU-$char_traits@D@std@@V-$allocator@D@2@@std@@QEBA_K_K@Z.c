/*
 * XREFs of ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_K_K@Z @ 0x1800DEF1C
 * Callers:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_ @ 0x1800DEE48 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_grow_by__lambd.c)
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
