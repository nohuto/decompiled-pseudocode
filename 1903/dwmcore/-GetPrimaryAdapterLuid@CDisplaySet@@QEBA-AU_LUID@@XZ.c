/*
 * XREFs of ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x18001D9CC
 * Callers:
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG@Z @ 0x18001CEA0 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_B.c)
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001D270 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 *     ?ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z @ 0x18002E0BC (-ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x18002E130 (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18017BC10 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1801ABB88 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDisplaySet::GetPrimaryAdapterLuid(CDisplaySet *this, struct _LUID *a2)
{
  unsigned int v2; // eax

  *a2 = g_luidZero;
  v2 = *((_DWORD *)this + 10);
  if ( v2 < *((_DWORD *)this + 18) )
    *a2 = *(struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v2) + 232LL);
  return (struct _LUID)a2;
}
