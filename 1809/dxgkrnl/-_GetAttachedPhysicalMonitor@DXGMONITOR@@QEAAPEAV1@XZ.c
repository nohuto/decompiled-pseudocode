/*
 * XREFs of ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0004F08
 * Callers:
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00B4314 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C00C3268 (MonitorGetCCDMonitorID.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C0290E80 (MonitorNotifyDeviceNodeReady.c)
 * Callees:
 *     <none>
 */

struct DXGMONITOR *__fastcall DXGMONITOR::_GetAttachedPhysicalMonitor(DXGMONITOR *this)
{
  __int64 v3; // rax

  if ( *((_DWORD *)this + 108) == 1 )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v3);
  }
  return (struct DXGMONITOR *)*((_QWORD *)this + 55);
}
