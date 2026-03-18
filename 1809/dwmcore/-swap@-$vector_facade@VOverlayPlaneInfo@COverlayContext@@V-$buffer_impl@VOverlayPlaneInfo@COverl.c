/*
 * XREFs of ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x1800D539C
 * Callers:
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800D51A0 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?PushCandidates@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x1800D5208 (-PushCandidates@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@.c)
 * Callees:
 *     ??$swap_generic@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x1800D53D8 (--$swap_generic@V-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 *     ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800D5544 (--$swap@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAE.c)
 */

void __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
        __int64 a1,
        __int64 a2)
{
  if ( a2 != a1
    && !(unsigned __int8)detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap<16>(a1, a2) )
  {
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap_generic<detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>>(
      a1,
      a2);
  }
}
