/*
 * XREFs of ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801B3FE0
 * Callers:
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801B2D0C (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Insert_range@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x1801B2E0C (--$_Insert_range@V-$span_iterator@V-$span@$$CBM$0-0@gsl@@$0A@@details@gsl@@@-$vector@MV-$allocat.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<float>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  v2 = (__int64)(a1[2] - *a1) >> 2;
  v3 = v2 >> 1;
  if ( v2 > 0x3FFFFFFFFFFFFFFFLL - (v2 >> 1) )
    return a2;
  result = v3 + v2;
  if ( v3 + v2 < a2 )
    return a2;
  return result;
}
