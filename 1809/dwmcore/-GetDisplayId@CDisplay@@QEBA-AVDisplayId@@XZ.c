/*
 * XREFs of ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18008C6C8
 * Callers:
 *     ?GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z @ 0x18001152C (-GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x18007D9B4 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z @ 0x180081384 (-SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x180089E48 (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z @ 0x18008AE74 (-ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x18008AEE8 (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z @ 0x18008C674 (-GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180160760 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180175EE0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x1801E1D3C (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDisplay::GetDisplayId(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v3; // eax

  *a2 = 0;
  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 252);
  else
    v3 = *(_DWORD *)(a1 + 252);
  *a2 = v3;
  return a2;
}
