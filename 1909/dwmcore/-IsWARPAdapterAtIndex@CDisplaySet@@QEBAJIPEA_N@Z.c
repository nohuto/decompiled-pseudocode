/*
 * XREFs of ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x1800263FC
 * Callers:
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG@Z @ 0x18001AFC0 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_B.c)
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001B390 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180026228 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18002643C (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 */

__int64 __fastcall CDisplaySet::IsWARPAdapterAtIndex(CDisplaySet *this, __int64 a2, bool *a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 2);
  *a3 = 0;
  if ( *(_DWORD *)(v3 + 88) )
  {
    _mm_lfence();
    *a3 = CDXGIEnumeration::IsWarpAdapterLuid((CDXGIEnumeration *)v3, *(struct _LUID *)(**(_QWORD **)(v3 + 64) + 336LL));
  }
  return 0LL;
}
