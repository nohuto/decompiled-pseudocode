/*
 * XREFs of ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18002ABC0
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800285B8 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x18002BC20 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800DCDA0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18002AC5C (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002ADC8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x18002ADF8 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18002AE24 (-UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800CD0A8 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 */

void __fastcall CHwndRenderTarget::ReleaseResources(CHwndRenderTarget *this)
{
  __int64 v2; // rdi
  char *v3; // rcx
  COverlayContext *v4; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 72LL);
  *((_BYTE *)this + 161) = 1;
  v3 = (char *)this + 544;
  *((_DWORD *)v3 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v3, 16LL);
  *((_BYTE *)this + 859) = 0;
  ReleaseInterface<CDisplay>((__int64 *)this + 25);
  ReleaseInterface<CDrawingContext>((char *)this + 112);
  v4 = (COverlayContext *)*((_QWORD *)this + 106);
  if ( v4 )
    COverlayContext::UpdateRenderTarget(v4, 0LL);
  ReleaseInterface<ID2D1Geometry>((char *)this + 176);
  ReleaseInterface<IRenderTargetBitmap>((char *)this + 184);
  if ( *(_QWORD *)(v2 + 312) )
  {
    if ( ++*(_DWORD *)(v2 + 320) > 8u )
      ++*(_DWORD *)(v2 + 328);
    CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)(v2 + 104));
  }
}
