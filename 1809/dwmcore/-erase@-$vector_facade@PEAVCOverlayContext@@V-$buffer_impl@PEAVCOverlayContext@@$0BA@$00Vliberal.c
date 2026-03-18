/*
 * XREFs of ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x18016CB6C
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180049840 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800708B0 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 *     ?RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800713E0 (-RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayCon.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE290 (-clear_region@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPl.c)
 */

_QWORD *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rbx

  v4 = (*a3 - *a1) >> 3;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v4,
    1LL);
  *a2 = *a1 + 8 * v4;
  return a2;
}
