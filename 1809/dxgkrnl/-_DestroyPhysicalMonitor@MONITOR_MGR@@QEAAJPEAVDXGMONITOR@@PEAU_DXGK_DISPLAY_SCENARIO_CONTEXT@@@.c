/*
 * XREFs of ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E7F0
 * Callers:
 *     ??1MONITOR_MGR@@QEAA@XZ @ 0x1C028DF0C (--1MONITOR_MGR@@QEAA@XZ.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E8D0 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028F32C (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0018C34 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C004F01C (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z @ 0x1C0133F34 (-_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E8D0 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0299A20 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyPhysicalMonitor(
        MONITOR_MGR *this,
        _DWORD *P,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  struct DXGMONITOR *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( !P )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( P[108] != 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_BYTE *)P + 480) )
  {
    v8 = (struct DXGMONITOR *)*((_QWORD *)P + 61);
    if ( v8 )
      MONITOR_MGR::_HandleCreateMonitorStep2(this, P[11], v8, 0LL, a3);
    MONITOR_MGR::_LeaveMonitorPendingState(this);
  }
  DXGMONITOR::_UnregisterPnPTargetDeviceNotification((DXGMONITOR *)P);
  if ( MONITOR_MGR::_IsMonitorInMonitorList(this, (struct DXGMONITOR *)P) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  DXGMONITOR::`scalar deleting destructor'((DXGMONITOR *)P);
  return 0LL;
}
