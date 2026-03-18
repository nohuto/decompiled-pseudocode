/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18015A950
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WGI@EAAXXZ @ 0x1800F0210 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WGI@EAAXXZ.c)
 * Callees:
 *     ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x180081478 (-GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18015A994 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseResourcesForDisplayChange(CDesktopRenderTarget *this)
{
  __int64 v2; // rcx

  CDesktopRenderTarget::RemoveInvalidRenderTargets((CDesktopRenderTarget *)((char *)this - 64));
  CDesktopRenderTarget::GetPrimary((CDesktopRenderTarget *)((char *)this - 64));
  v2 = *(_QWORD *)(*((_QWORD *)this - 6) + 360LL);
  if ( v2 )
    *(_BYTE *)(v2 + 20) = 1;
}
