/*
 * XREFs of ??$insert_unchecked@AEBUDesktopPlaneInfo@COverlayContext@@@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBUDesktopPlaneInfo@COverlayContext@@@1@AEBUDesktopPlaneInfo@COverlayContext@@@Z @ 0x180167D38
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800708B0 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDesktopPlaneInfo@COverlayContext@@_K0@Z @ 0x18016CC24 (-reserve_region@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneI.c)
 */

_QWORD *__fastcall detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::insert_unchecked<COverlayContext::DesktopPlaneInfo const &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax

  v7 = (*a3 - *a1) / 120LL;
  v8 = detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         v7);
  *(_OWORD *)v8 = *(_OWORD *)a4;
  *(_OWORD *)(v8 + 16) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(v8 + 32) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(v8 + 48) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(v8 + 64) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(v8 + 80) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(v8 + 96) = *(_OWORD *)(a4 + 96);
  *(_QWORD *)(v8 + 112) = *(_QWORD *)(a4 + 112);
  *a2 = *a1 + 120 * v7;
  return a2;
}
