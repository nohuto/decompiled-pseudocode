/*
 * XREFs of ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18007F06C
 * Callers:
 *     ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x180011480 (-GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18007EE70 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18008AD10 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18008ADE4 (-CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x18008AEE8 (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180159B38 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x18015A460 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18015A994 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180160760 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180175EE0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x1801E0F28 (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 *     ?GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z @ 0x18020DF8C (-GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CDisplaySet const>(CDisplaySet **a1)
{
  CDisplaySet *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CDisplaySet::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
