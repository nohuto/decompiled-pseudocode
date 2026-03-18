/*
 * XREFs of ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800D7F38
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18004A134 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800D51A0 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?PushCandidates@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x1800D5208 (-PushCandidates@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800D7DB8 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x1800E8A50 (--1COverlayContext@@MEAA@XZ.c)
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x180167A5C (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 * Callees:
 *     ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE634 (-clear_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInf.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( (__int64)(a1[1] - *a1) >> 8 )
    return detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL);
  return result;
}
