/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800EAA00
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18004D3B8 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x18005E420 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800D8220 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x1800EA97C (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 *     ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x18015A6B0 (-NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ @ 0x18015A8F0 (-ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800D7DB8 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800D8614 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ReleaseResourcesForDisplayChange(CHwndRenderTarget *this)
{
  int *v2; // rcx

  v2 = (int *)*((_QWORD *)this + 98);
  if ( v2 && v2[3352] < 2000 )
    COverlayContext::Reset((COverlayContext *)v2);
  CHwndRenderTarget::ReleaseResources((CHwndRenderTarget *)((char *)this - 64));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 8) + 256LL))((char *)this - 64);
}
