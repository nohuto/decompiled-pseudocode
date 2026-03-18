/*
 * XREFs of ?IsFullscreenSingleMonitor@COverlayContext@@AEBA_NXZ @ 0x18018537C
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801847A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::IsFullscreenSingleMonitor(COverlayContext *this)
{
  char v1; // r9

  v1 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1682) + 64LL) + 96LL) == 1
    && ((*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) & 0xFFFFFFFFFFFFFF00uLL) == 0x100
    && !((*((_QWORD *)this + 1570) - *((_QWORD *)this + 1569)) / 120LL)
    || *((_QWORD *)this + 1663) )
  {
    return 1;
  }
  return v1;
}
