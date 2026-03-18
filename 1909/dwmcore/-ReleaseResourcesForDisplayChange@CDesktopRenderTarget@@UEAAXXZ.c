/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1801A72E0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WGI@EAAXXZ @ 0x1800F0E30 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WGI@EAAXXZ.c)
 * Callees:
 *     ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x1800D2948 (-GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A7324 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseResourcesForDisplayChange(CDesktopRenderTarget *this)
{
  __int64 v2; // rcx

  CDesktopRenderTarget::RemoveInvalidRenderTargets((CDesktopRenderTarget *)((char *)this - 64));
  CDesktopRenderTarget::GetPrimary((CDesktopRenderTarget *)((char *)this - 64));
  v2 = *(_QWORD *)(*((_QWORD *)this - 6) + 376LL);
  if ( v2 )
    *(_BYTE *)(v2 + 20) = 1;
}
