/*
 * XREFs of ?ForceUpdateRenderingRealization@OverlayPlaneInfo@COverlayContext@@QEBAJXZ @ 0x180184B84
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801847A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180184FCC (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::OverlayPlaneInfo::ForceUpdateRenderingRealization(
        COverlayContext::OverlayPlaneInfo *this)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 192LL))(
           *((_QWORD *)this + 3),
           *((_QWORD *)this + 4));
}
