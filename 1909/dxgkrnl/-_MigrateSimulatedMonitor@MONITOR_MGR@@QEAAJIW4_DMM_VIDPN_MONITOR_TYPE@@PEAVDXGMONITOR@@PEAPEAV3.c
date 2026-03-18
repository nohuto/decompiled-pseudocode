/*
 * XREFs of ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C02C87C8
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7F50 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02C77C4 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02C7C5C (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02CEE58 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_MigrateSimulatedMonitor(
        struct _FAST_MUTEX *a1,
        __int64 a2,
        int a3,
        const struct DXGMONITOR *a4,
        struct DXGMONITOR **a5)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int MonitorInstance; // ebx
  __int64 v13; // r8
  struct DXGMONITOR *v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct DXGMONITOR *v21; // [rsp+20h] [rbp-38h] BYREF

  v5 = a3;
  v7 = (unsigned int)a2;
  if ( (_DWORD)a2 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  v21 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, (unsigned int)v7, 0, &v21);
  if ( MonitorInstance < 0 )
    goto LABEL_18;
  v14 = v21;
  if ( !v21 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *((_DWORD *)v14 + 108);
  if ( v16 == 1 )
  {
    v19 = WdLogNewEntry5_WdError(v11, v10, v13);
    *(_QWORD *)(v19 + 24) = v7;
    WdLogEvent5_WdError(v19);
    MonitorInstance = -1073741637;
  }
  else
  {
    if ( v16 == (_DWORD)v5 )
    {
      v17 = WdLogNewEntry5_WdDmmEvent(v11, v10);
      *(_QWORD *)(v17 + 24) = v7;
      *(_QWORD *)(v17 + 32) = v5;
      WdLogEvent5_WdDmmEvent(v17);
      MonitorInstance = 0;
    }
    else
    {
      v18 = WdLogNewEntry5_WdDmmEvent(v11, v10);
      *(_QWORD *)(v18 + 24) = v7;
      *(_QWORD *)(v18 + 32) = v5;
      WdLogEvent5_WdDmmEvent(v18);
      if ( *((_DWORD *)v14 + 108) == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry((MONITOR_MGR *)a1, (unsigned int)v7);
      *((_DWORD *)v14 + 108) = v5;
      if ( (_DWORD)v5 == 2 )
        MONITOR_MGR::_AddTargetIntoPersistencyRegistry((MONITOR_MGR *)a1, (unsigned int)v7);
    }
    if ( a4 )
      MonitorInstance = DXGMONITOR::_CopyMonitorInformation(v14, a4);
  }
  if ( MonitorInstance < 0 )
LABEL_18:
    *a5 = 0LL;
  else
    *a5 = v14;
  return (unsigned int)MonitorInstance;
}
