/*
 * XREFs of ?_Calculate_growth@?$vector@GV?$allocator@G@std@@@std@@AEBA_K_K@Z @ 0x180189F58
 * Callers:
 *     ??$_Emplace_reallocate@G@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z @ 0x180189E5C (--$_Emplace_reallocate@G@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z.c)
 *     std::vector_unsigned_short_std::allocator_unsigned_short___::_Resize__lambda_5d91c21a7dab2480088f44d5291e9dfa___ @ 0x1801C447C (std--vector_unsigned_short_std--allocator_unsigned_short___--_Resize__lambda_5d91c21a7dab2480088.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<unsigned short>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  v2 = (__int64)(a1[2] - *a1) >> 1;
  v3 = v2 >> 1;
  if ( v2 > 0x7FFFFFFFFFFFFFFFLL - (v2 >> 1) )
    return a2;
  result = v3 + v2;
  if ( v3 + v2 < a2 )
    return a2;
  return result;
}
