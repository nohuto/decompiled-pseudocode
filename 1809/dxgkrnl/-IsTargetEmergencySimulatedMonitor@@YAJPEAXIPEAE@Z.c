/*
 * XREFs of ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00BA988
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00BA7BC (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00BAE38 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     MonitorGetMonitorType @ 0x1C00C2CC0 (MonitorGetMonitorType.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3A54 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00C3AE8 (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall IsTargetEmergencySimulatedMonitor(DXGADAPTER *this, unsigned int a2, unsigned __int8 *a3)
{
  int MonitorHandle; // ebx
  struct HDXGMONITOR__ *v7; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  MonitorHandle = MonitorGetMonitorHandle(this, a2, 0, (void *)0x4D495044, (__int64)&v7);
  if ( MonitorHandle >= 0 )
  {
    MonitorHandle = MonitorGetMonitorType(v7);
    if ( MonitorHandle >= 0 )
      *a3 = 0;
    MonitorReleaseMonitorHandle(this);
  }
  return (unsigned int)MonitorHandle;
}
