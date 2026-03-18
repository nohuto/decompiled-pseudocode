/*
 * XREFs of ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18005200C
 * Callers:
 *     ?GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z @ 0x180013950 (-GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z @ 0x18002636C (-SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z.c)
 *     ?GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z @ 0x180051FB8 (-GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z.c)
 *     ?ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z @ 0x1800AE4A8 (-ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x1800AE51C (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800B6770 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800E431C (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x180159124 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018AFBC (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180199050 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDisplay::GetDisplayId(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 244);
  else
    v3 = *(_DWORD *)(a1 + 244);
  *a2 = v3;
  return a2;
}
