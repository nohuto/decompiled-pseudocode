/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x18002BC20
 * Callers:
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18002B590 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x18002BC70 (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180059EF0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18005B568 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x1800BC5E0 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x1801A7030 (-NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ @ 0x1801A7280 (-ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18002ABC0 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18002AEE4 (-Reset@COverlayContext@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ReleaseResourcesForDisplayChange(CHwndRenderTarget *this)
{
  int *v2; // rcx

  v2 = (int *)*((_QWORD *)this + 98);
  if ( v2 && v2[3356] < 2000 )
    COverlayContext::Reset((COverlayContext *)v2);
  CHwndRenderTarget::ReleaseResources((CHwndRenderTarget *)((char *)this - 64));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 8) + 384LL))((char *)this - 64);
}
