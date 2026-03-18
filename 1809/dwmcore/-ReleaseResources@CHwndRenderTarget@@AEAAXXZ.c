/*
 * XREFs of ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800D8614
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800D879C (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800E80F0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800EAA00 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18006E0A0 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800716C8 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180072BAC (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800D86B0 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1800D86DC (-UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
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
  DynArrayImpl<0>::ShrinkToSize((__int64)v3, 0x10u);
  *((_BYTE *)this + 859) = 0;
  ReleaseInterface<CDisplay>((__int64 *)this + 25);
  ReleaseInterface<CDrawingContext>((char *)this + 112);
  v4 = (COverlayContext *)*((_QWORD *)this + 106);
  if ( v4 )
    COverlayContext::UpdateRenderTarget(v4, 0LL);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 22);
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 23);
  if ( *(_QWORD *)(v2 + 304) )
  {
    if ( ++*(_DWORD *)(v2 + 312) > 8u )
      ++*(_DWORD *)(v2 + 320);
    CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)(v2 + 96));
  }
}
