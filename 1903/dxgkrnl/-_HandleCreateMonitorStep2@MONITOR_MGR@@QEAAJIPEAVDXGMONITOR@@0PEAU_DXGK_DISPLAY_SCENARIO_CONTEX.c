/*
 * XREFs of ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017606C
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173C00 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0175F04 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7CCC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 * Callees:
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C0056180 (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01281E4 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158B4C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C015A8E0 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7CCC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C02C7DAC (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateMonitorStep2(
        struct _FAST_MUTEX *this,
        __int64 a2,
        struct DXGMONITOR *a3,
        struct DXGMONITOR *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  int v5; // ebp
  struct DXGMONITOR *v7; // rbx
  int v8; // r15d
  struct DXGMONITOR *v10; // r14
  bool v11; // r12
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v12; // r15
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  struct DXGMONITOR *v21; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v7 = a3;
  v8 = a2;
  if ( (_DWORD)a2 == -1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v16);
  }
  v10 = 0LL;
  v11 = 0;
  if ( v7 )
  {
    v17 = *((_DWORD *)v7 + 108);
    if ( *((_DWORD *)v7 + 11) == v8 )
    {
      v11 = v17 == 5;
    }
    else
    {
      if ( v17 != 5 )
      {
        v18 = WdLogNewEntry5_WdAssertion(this, a2);
        WdLogEvent5_WdAssertion(v18);
      }
      v10 = v7;
      v7 = 0LL;
    }
  }
  v12 = a5;
  if ( a4 )
  {
    *((_QWORD *)a4 + 61) = 0LL;
    v13 = v7 ? 3LL : *((_DWORD *)a4 + 148) != 0 ? 4LL : 1LL;
    MONITOR_MGR::_IssueMonitorEvent(
      this,
      *((unsigned int *)a4 + 11),
      (*((_DWORD *)a4 + 10) & 0x40) != 0 ? 0 : 7,
      v13,
      *((_DWORD *)a4 + 108),
      (__int64)v12);
    if ( *((_BYTE *)a4 + 480) )
    {
      *((_BYTE *)a4 + 480) = 0;
      MONITOR_MGR::_LeaveMonitorPendingState((MONITOR_MGR *)this);
    }
  }
  if ( v7 )
  {
    if ( *((_DWORD *)v7 + 108) == 1 )
      v19 = MONITOR_MGR::_DestroyPhysicalMonitor((MONITOR_MGR *)this, v7, v12);
    else
      v19 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v7);
    v5 = v19;
  }
  if ( v10 )
  {
    MONITOR_MGR::_IssueMonitorEvent(this, *((unsigned int *)v10 + 11), 0, 2LL, *((_DWORD *)v10 + 108), (__int64)v12);
    v5 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v10);
  }
  if ( v5 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v20 + 32) = v5;
    *(_QWORD *)(v20 + 24) = v7;
    WdLogEvent5_WdError(v20);
  }
  if ( a4 )
  {
    if ( (int)MONITOR_MGR::_GetMonitorInstance(this, *((unsigned int *)a4 + 11), 0, &v21) >= 0
      && MONITOR_MGR::_UsingCCDNameForTTM
      && v21 == a4 )
    {
      DXGMONITOR::_CreateTtmDevice(a4, v14);
    }
    if ( v11 && (*((_DWORD *)a4 + 10) & 2) != 0 )
      MONITOR_MGR::_CleanUpFromSimulatedMonitor((MONITOR_MGR *)this, v12);
  }
  return 0LL;
}
