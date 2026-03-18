/*
 * XREFs of ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C00B421C
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B69D4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C028E1CC (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C028E6C0 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C029A63C (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_MigrateSimulatedMonitor(
        MONITOR_MGR *a1,
        unsigned int a2,
        int a3,
        const struct DXGMONITOR *a4,
        struct DXGMONITOR **a5)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  __int64 v9; // rcx
  int MonitorInstance; // ebx
  struct DXGMONITOR *v11; // rdi
  int v12; // eax
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct DXGMONITOR *v19; // [rsp+20h] [rbp-38h] BYREF

  v5 = a3;
  v7 = a2;
  if ( a2 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v15);
  }
  v19 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, v7, 0, &v19);
  if ( MonitorInstance < 0 )
    goto LABEL_19;
  v11 = v19;
  if ( !v19 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v16);
  }
  v12 = *((_DWORD *)v11 + 108);
  if ( v12 == 1 )
  {
    v18 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v18 + 24) = v7;
    WdLogEvent5_WdError(v18);
    MonitorInstance = -1073741637;
  }
  else
  {
    if ( v12 == (_DWORD)v5 )
    {
      v17 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v17 + 24) = v7;
      *(_QWORD *)(v17 + 32) = v5;
      WdLogEvent5_WdDmmEvent(v17);
      MonitorInstance = 0;
    }
    else
    {
      v13 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v13 + 24) = v7;
      *(_QWORD *)(v13 + 32) = v5;
      WdLogEvent5_WdDmmEvent(v13);
      if ( *((_DWORD *)v11 + 108) == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry(a1, v7);
      *((_DWORD *)v11 + 108) = v5;
      if ( (_DWORD)v5 == 2 )
        MONITOR_MGR::_AddTargetIntoPersistencyRegistry(a1, v7);
    }
    if ( a4 )
      MonitorInstance = DXGMONITOR::_CopyMonitorInformation(v11, a4);
  }
  if ( MonitorInstance < 0 )
LABEL_19:
    *a5 = 0LL;
  else
    *a5 = v11;
  return (unsigned int)MonitorInstance;
}
