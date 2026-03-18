/*
 * XREFs of ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B6898
 * Callers:
 *     MonitorCreateSimulatedMonitor @ 0x1C00B659C (MonitorCreateSimulatedMonitor.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B66B4 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D0A9C (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0144168 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146FCC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C028EF00 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C028FDA4 (MonitorCreatePhysicalMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C0290138 (MonitorDestroySimulatedMonitor.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C0290E80 (MonitorNotifyDeviceNodeReady.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02913B4 (MonitorRemovePhysicalMonitor.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0298D60 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall MONITOR_MGR::_LogMonitorPresentEvent(__int64 a1, int a2, unsigned int a3, int a4, _OWORD *a5)
{
  unsigned int v9; // r8d
  __int64 v10; // rbx
  __int128 v11; // xmm1
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-61h]
  _OWORD v15[6]; // [rsp+30h] [rbp-51h] BYREF

  if ( a2 > 1073741826 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
  }
  v9 = *(_DWORD *)(a1 + 280);
  v10 = 3LL * (v9 % 0x14);
  *(_DWORD *)(a1 + 8 * v10 + 296) = v9;
  *(_DWORD *)(a1 + 8 * v10 + 288) = a2;
  *(_DWORD *)(a1 + 8 * v10 + 292) = a3;
  *(_DWORD *)(a1 + 8 * v10 + 300) = a4;
  v14 = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 8 * v10 + 304) = v14 * KeQueryTimeIncrement();
  ++*(_DWORD *)(a1 + 280);
  memset(v15, 0, sizeof(v15));
  v15[0] = 0x6000000008uLL;
  memset(&v15[1], 0, 28);
  *(_QWORD *)&v15[3] = __PAIR64__(a3, a2);
  DWORD2(v15[3]) = a4;
  if ( a5 )
  {
    v11 = a5[1];
    v15[4] = *a5;
    v15[5] = v11;
  }
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15);
}
