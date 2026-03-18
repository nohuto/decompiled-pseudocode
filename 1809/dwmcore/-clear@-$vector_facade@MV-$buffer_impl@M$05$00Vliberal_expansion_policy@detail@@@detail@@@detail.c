/*
 * XREFs of ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18000CB78
 * Callers:
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18000B924 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ??$GetAllPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@2@MMM@Z @ 0x18000BB3C (--$GetAllPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@de.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x18000C120 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE968 (-clear_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@.c)
 */

__int64 __fastcall detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( (__int64)(a1[1] - *a1) >> 2 )
    return detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear_region();
  return result;
}
