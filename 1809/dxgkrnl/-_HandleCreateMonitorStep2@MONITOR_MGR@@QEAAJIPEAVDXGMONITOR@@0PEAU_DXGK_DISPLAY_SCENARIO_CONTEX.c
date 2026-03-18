/*
 * XREFs of ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E8D0
 * Callers:
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E7F0 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028EAC0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029878C (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C004F01C (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B71F8 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C00B7AAC (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D4FC0 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0133918 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E7F0 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateMonitorStep2(
        struct _FAST_MUTEX *this,
        int a2,
        struct DXGMONITOR *a3,
        struct DXGMONITOR *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  int v5; // ebp
  __int64 v10; // rax
  struct DXGMONITOR *v11; // r14
  bool v12; // r12
  int v13; // eax
  __int64 v14; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v15; // r15
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGMONITOR *v23; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  if ( a2 == -1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = 0LL;
  v12 = 0;
  if ( a3 )
  {
    v13 = *((_DWORD *)a3 + 108);
    if ( *((_DWORD *)a3 + 11) == a2 )
    {
      v12 = v13 == 5;
    }
    else
    {
      if ( v13 != 5 )
      {
        v14 = WdLogNewEntry5_WdAssertion(this);
        WdLogEvent5_WdAssertion(v14);
      }
      v11 = a3;
      a3 = 0LL;
    }
  }
  v15 = a5;
  if ( a4 )
  {
    *((_QWORD *)a4 + 61) = 0LL;
    v16 = a3 ? 3LL : *((_DWORD *)a4 + 147) != 0 ? 4LL : 1LL;
    MONITOR_MGR::_IssueMonitorEvent(
      this,
      *((_DWORD *)a4 + 11),
      (*((_DWORD *)a4 + 10) & 0x40) != 0 ? 0 : 7,
      v16,
      *((_DWORD *)a4 + 108),
      (__int64)v15);
    if ( *((_BYTE *)a4 + 480) )
    {
      *((_BYTE *)a4 + 480) = 0;
      MONITOR_MGR::_LeaveMonitorPendingState((MONITOR_MGR *)this);
    }
  }
  if ( a3 )
  {
    if ( *((_DWORD *)a3 + 108) == 1 )
      v17 = MONITOR_MGR::_DestroyPhysicalMonitor((MONITOR_MGR *)this, a3, v15);
    else
      v17 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, a3);
    v5 = v17;
  }
  if ( v11 )
  {
    MONITOR_MGR::_IssueMonitorEvent(this, *((_DWORD *)v11 + 11), 0, 2LL, *((_DWORD *)v11 + 108), (__int64)v15);
    v5 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v11);
  }
  if ( v5 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v18 + 32) = v5;
    *(_QWORD *)(v18 + 24) = a3;
    WdLogEvent5_WdError(v18);
  }
  if ( a4 )
  {
    if ( (int)MONITOR_MGR::_GetMonitorInstance(this, *((_DWORD *)a4 + 11), 0, &v23) >= 0
      && v23 == a4
      && MONITOR_MGR::_UsingCCDNameForTTM )
    {
      DXGMONITOR::_CreateTtmDevice(a4, v19, v20, v21);
    }
    if ( v12 && (*((_DWORD *)a4 + 10) & 2) != 0 )
      MONITOR_MGR::_CleanUpFromSimulatedMonitor((MONITOR_MGR *)this, v15);
  }
  return 0LL;
}
