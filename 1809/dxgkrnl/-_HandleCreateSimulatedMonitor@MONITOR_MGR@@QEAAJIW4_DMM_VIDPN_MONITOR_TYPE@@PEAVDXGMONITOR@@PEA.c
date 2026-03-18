/*
 * XREFs of ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B69D4
 * Callers:
 *     MonitorCreateSimulatedMonitor @ 0x1C00B659C (MonitorCreateSimulatedMonitor.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146FCC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C00B421C (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00B4314 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B43B8 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00B64DC (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B71F8 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C00B7AAC (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0133918 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C0133CBC (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C028E1CC (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C028FAB8 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateSimulatedMonitor(
        MONITOR_MGR *a1,
        unsigned int a2,
        int a3,
        const struct DXGMONITOR *a4,
        struct DXGMONITOR *a5,
        __int64 a6)
{
  struct DXGMONITOR **v6; // r12
  unsigned int *v11; // rdi
  int MonitorInstance; // eax
  __int64 v13; // rcx
  struct DXGMONITOR *v14; // rbp
  int v15; // r13d
  __int64 v16; // rcx
  int v17; // ebx
  int EmergencySimulatedMonitor; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r13d
  struct DXGMONITOR *v23; // rbx
  __int64 v24; // r9
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // edx
  PVOID P; // [rsp+30h] [rbp-38h] BYREF

  v6 = (struct DXGMONITOR **)a5;
  if ( !a5 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( a2 == -1 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( a3 == 1 )
  {
    v28 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v28);
  }
  a5 = 0LL;
  v11 = 0LL;
  P = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, a2, 0, &a5);
  v14 = a5;
  v15 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( a5 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v31);
    }
    if ( v15 != -1073741275 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v32);
    }
    EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(
                                  (struct _FAST_MUTEX *)a1,
                                  (struct DXGMONITOR **)&P);
    if ( EmergencySimulatedMonitor >= 0 )
    {
      v11 = (unsigned int *)P;
      if ( P )
        goto LABEL_25;
    }
    else
    {
      if ( EmergencySimulatedMonitor != -1073741275 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v34);
      }
      v11 = (unsigned int *)P;
      if ( !P )
        goto LABEL_25;
    }
    v33 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v33);
    goto LABEL_25;
  }
  if ( !a5 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( a3 == 5 )
    return 3223192973LL;
  if ( *((_DWORD *)v14 + 108) != 1 )
  {
    v17 = MONITOR_MGR::_MigrateSimulatedMonitor(a1, a2, a3, a4, v6);
    if ( v17 >= 0 )
    {
      if ( !*v6 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v30);
      }
      MONITOR_MGR::_IssueMonitorEvent(a1, a2, 0LL, 3LL, a3, a6);
    }
    return (unsigned int)v17;
  }
  MONITOR_MGR::_RemoveMonitorFromList(a1, v14);
LABEL_25:
  a5 = 0LL;
  if ( !a4 )
    a4 = v14;
  v22 = MONITOR_MGR::_CreateSimulatedMonitor((__int64)a1, a2, a3, (__int64)a4, &a5, a6);
  if ( v22 >= 0 )
  {
    v23 = a5;
    if ( !a5 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v35);
    }
    if ( v14 )
    {
      if ( *((_DWORD *)v14 + 108) != 1 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v36);
      }
      *((_DWORD *)v23 + 10) ^= (*((_DWORD *)v14 + 10) ^ *((_DWORD *)v23 + 10)) & 2;
      v37 = *((_DWORD *)v23 + 10) ^ (*((_DWORD *)v14 + 10) ^ *((_DWORD *)v23 + 10)) & 4;
      *((_DWORD *)v23 + 10) = v37;
      *((_DWORD *)v23 + 10) = v37 ^ (*((_DWORD *)v14 + 10) ^ v37) & 0x20;
      *((_QWORD *)v23 + 55) = v14;
      DXGMONITOR::_DestroyTtmDevice(v14);
    }
    if ( v11 )
      MONITOR_MGR::_RemoveMonitorFromList(a1, (struct DXGMONITOR *)v11);
    MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)a1, v23);
    if ( a3 == 2 )
      v22 = MONITOR_MGR::_AddTargetIntoPersistencyRegistry(a1, a2);
    if ( *((_QWORD *)v23 + 55) )
      v24 = 3LL;
    else
      v24 = *((_DWORD *)v23 + 147) != 0 ? 4LL : 1LL;
    v25 = a6;
    MONITOR_MGR::_IssueMonitorEvent(
      a1,
      *((unsigned int *)v23 + 11),
      (*((_DWORD *)v23 + 10) & 0x40) == 0 ? 7 : 0,
      v24,
      *((_DWORD *)v23 + 108),
      a6);
    if ( v11 )
    {
      MONITOR_MGR::_IssueMonitorEvent(a1, v11[11], 0LL, 2LL, v11[108], v25);
      MONITOR_MGR::_DestroySimulatedMonitor(a1, v11);
    }
    DXGMONITOR::_CreateTtmDevice(v23);
    *v6 = v23;
  }
  return (unsigned int)v22;
}
