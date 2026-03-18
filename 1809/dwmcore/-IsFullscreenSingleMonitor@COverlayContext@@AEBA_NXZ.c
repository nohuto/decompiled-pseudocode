/*
 * XREFs of ?IsFullscreenSingleMonitor@COverlayContext@@AEBA_NXZ @ 0x18016BBE4
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x18016AFFC (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::IsFullscreenSingleMonitor(COverlayContext *this)
{
  char v1; // r8

  v1 = 0;
  if ( *((_BYTE *)this + 13430)
    && ((*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) & 0xFFFFFFFFFFFFFF00uLL) == 0x100
    && !((*((_QWORD *)this + 1570) - *((_QWORD *)this + 1569)) / 120LL)
    || *((_QWORD *)this + 1661) )
  {
    return 1;
  }
  return v1;
}
