/*
 * XREFs of ??D?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@QEBAAEBMXZ @ 0x1801B31A4
 * Callers:
 *     ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18000BCA0 (--$ComputeTexPositionsWorker@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@d.c)
 *     ??$_Insert_range@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x1801B2E0C (--$_Insert_range@V-$span_iterator@V-$span@$$CBM$0-0@gsl@@$0A@@details@gsl@@@-$vector@MV-$allocat.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::details::span_iterator<gsl::span<float const,-1>,0>::operator*(gsl::details *a1)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)a1 + 1);
  if ( v1 == **(_QWORD **)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x1801B31C6LL);
  }
  return *(_QWORD *)(*(_QWORD *)a1 + 8LL) + 4 * v1;
}
