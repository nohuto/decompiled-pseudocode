/*
 * XREFs of ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x1800426BC
 * Callers:
 *     ??$_Emplace_reallocate@D@?$vector@DV?$allocator@D@std@@@std@@QEAAPEADQEAD$$QEAD@Z @ 0x180042594 (--$_Emplace_reallocate@D@-$vector@DV-$allocator@D@std@@@std@@QEAAPEADQEAD$$QEAD@Z.c)
 *     ??$_Insert_range@PEAD@?$vector@DV?$allocator@D@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@D@std@@@std@@@1@PEAD1Uforward_iterator_tag@1@@Z @ 0x1800CBE24 (--$_Insert_range@PEAD@-$vector@DV-$allocator@D@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<char>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  v2 = a1[2] - *a1;
  v3 = v2 >> 1;
  if ( v2 > 0x7FFFFFFFFFFFFFFFLL - (v2 >> 1) )
    return a2;
  result = v3 + v2;
  if ( v3 + v2 < a2 )
    return a2;
  return result;
}
