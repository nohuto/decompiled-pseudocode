/*
 * XREFs of ??A?$span@$$CBM$0?0@gsl@@QEBAAEBM_J@Z @ 0x18000BE48
 * Callers:
 *     ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18000BCA0 (--$ComputeTexPositionsWorker@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@d.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<float const,-1>::operator[](__int64 *a1, __int64 a2)
{
  if ( a2 < 0 || a2 >= *a1 )
  {
    gsl::details::terminate((gsl::details *)a1);
    JUMPOUT(0x18000BE68LL);
  }
  return a1[1] + 4 * a2;
}
