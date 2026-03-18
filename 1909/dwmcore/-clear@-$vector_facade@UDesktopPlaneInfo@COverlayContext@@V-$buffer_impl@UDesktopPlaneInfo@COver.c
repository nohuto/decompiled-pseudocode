/*
 * XREFs of ?clear@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800D85DC
 * Callers:
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18002AEE4 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x1800DD310 (--1COverlayContext@@MEAA@XZ.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800E5DA4 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 v1; // r9
  unsigned __int64 result; // rax

  v1 = a1[1] - *a1;
  result = (unsigned __int64)(v1 + ((unsigned __int128)(v1 * (__int128)(__int64)0x8888888888888889uLL) >> 64)) >> 63;
  if ( v1 / 120 )
    return detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             v1 / 120,
             v1 / 120);
  return result;
}
