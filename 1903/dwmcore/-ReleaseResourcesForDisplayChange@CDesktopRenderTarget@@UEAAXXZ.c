/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1801A8BA0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WGI@EAAXXZ @ 0x1800ED170 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WGI@EAAXXZ.c)
 * Callees:
 *     ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x1800D2498 (-GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A8BE4 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
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
