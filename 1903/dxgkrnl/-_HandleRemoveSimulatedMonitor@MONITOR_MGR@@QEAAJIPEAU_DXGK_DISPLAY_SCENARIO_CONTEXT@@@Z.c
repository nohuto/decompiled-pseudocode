/*
 * XREFs of ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C8444
 * Callers:
 *     MonitorDestroySimulatedMonitor @ 0x1C02C917C (MonitorDestroySimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158B4C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C015A8E0 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0175998 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0175A34 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02C7B9C (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C02C7DAC (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemoveSimulatedMonitor(
        struct _FAST_MUTEX *this,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int MonitorInstance; // ebx
  __int64 v10; // r8
  unsigned int *v11; // rbx
  __int64 v12; // rax
  int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rcx
  struct DXGMONITOR *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v3 = (unsigned int)a2;
  if ( (_DWORD)a2 == -1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  P = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, (unsigned int)v3, 0, (struct DXGMONITOR **)&P);
  if ( MonitorInstance < 0 )
  {
    if ( P )
    {
      v20 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v20);
    }
    if ( MonitorInstance != -1073741275 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v21);
    }
    v22 = WdLogNewEntry5_WdError(v8, v7, v10);
    *(_QWORD *)(v22 + 24) = v3;
    *(_QWORD *)(v22 + 32) = this;
    WdLogEvent5_WdError(v22);
  }
  else
  {
    v11 = (unsigned int *)P;
    if ( !P )
    {
      v12 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v12);
    }
    v13 = v11[108];
    if ( v13 == 1 )
    {
      v14 = WdLogNewEntry5_WdError(v8, v7, v10);
      *(_QWORD *)(v14 + 24) = v3;
      WdLogEvent5_WdError(v14);
      return (unsigned int)-1073741275;
    }
    else
    {
      MONITOR_MGR::_RemoveMonitorFromList(this, (struct DXGMONITOR ***)v11);
      v16 = (struct DXGMONITOR *)*((_QWORD *)v11 + 55);
      if ( v16 )
      {
        if ( *((_DWORD *)v16 + 108) != 1 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v15, v16);
          WdLogEvent5_WdAssertion(v17);
          v16 = (struct DXGMONITOR *)*((_QWORD *)v11 + 55);
        }
        MONITOR_MGR::_InsertMonitorToList(this, v16);
        if ( MONITOR_MGR::_UsingCCDNameForTTM || *((_QWORD *)v11 + 10) )
          DXGMONITOR::_CreateTtmDevice(*((DXGMONITOR **)v11 + 55), v18);
      }
      if ( *((_QWORD *)v11 + 55) )
      {
        v13 = v11[108];
        v19 = 3LL;
      }
      else
      {
        v19 = 2LL;
      }
      MONITOR_MGR::_IssueMonitorEvent(this, v11[11], 0, v19, v13, (__int64)a3);
      *((_QWORD *)v11 + 55) = 0LL;
      if ( v11[108] == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry((MONITOR_MGR *)this, (unsigned int)v3);
      return (unsigned int)MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v11);
    }
  }
  return (unsigned int)MonitorInstance;
}
