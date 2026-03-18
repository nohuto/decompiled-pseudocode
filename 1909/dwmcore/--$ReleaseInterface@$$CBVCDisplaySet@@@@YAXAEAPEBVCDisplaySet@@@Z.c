/*
 * XREFs of ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800530F8
 * Callers:
 *     ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x1800138A4 (-GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18002B724 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18002B7F4 (-CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x1800AE51C (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800EA5D0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x180158F34 (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018AFBC (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180199050 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A64B8 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1801A6DF0 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A7324 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z @ 0x180245B1C (-GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CDisplaySet const>(CDisplaySet **a1)
{
  CDisplaySet *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CDisplaySet::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
