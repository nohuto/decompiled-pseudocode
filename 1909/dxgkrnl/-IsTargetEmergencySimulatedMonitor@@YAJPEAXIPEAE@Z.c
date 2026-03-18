/*
 * XREFs of ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C012ED68
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C012EBC0 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C012F6B8 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     MonitorGetMonitorType @ 0x1C00DFFD4 (MonitorGetMonitorType.c)
 *     MonitorGetMonitorHandle @ 0x1C00EC42C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00ED228 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall IsTargetEmergencySimulatedMonitor(DXGADAPTER *this, __int64 a2, bool *a3)
{
  int MonitorHandle; // ebx
  int v7; // [rsp+50h] [rbp+18h] BYREF
  struct HDXGMONITOR__ *v8; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  MonitorHandle = MonitorGetMonitorHandle(this, a2, 0, (void *)0x4D495044, &v8);
  if ( MonitorHandle >= 0 )
  {
    v7 = 0;
    MonitorHandle = MonitorGetMonitorType(v8, &v7);
    if ( MonitorHandle >= 0 )
      *a3 = v7 == 5;
    MonitorReleaseMonitorHandle(this, (__int64)v8, (void *)0x4D495044);
  }
  return (unsigned int)MonitorHandle;
}
