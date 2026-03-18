/*
 * XREFs of ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x180042658
 * Callers:
 *     ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x180014EF4 (-GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x18002E130 (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AF968 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AFA38 (-CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800E97B0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x18015A614 (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018C69C (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x18019A910 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A7D78 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1801A86B0 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A8BE4 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z @ 0x18024722C (-GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180042588 (-Release@CDisplaySet@@QEBAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CDisplaySet const>(CDisplaySet **a1, unsigned int a2)
{
  CDisplaySet *v3; // rcx
  __int64 result; // rax

  v3 = *a1;
  if ( v3 )
  {
    result = CDisplaySet::Release(v3, a2);
    *a1 = 0LL;
  }
  return result;
}
