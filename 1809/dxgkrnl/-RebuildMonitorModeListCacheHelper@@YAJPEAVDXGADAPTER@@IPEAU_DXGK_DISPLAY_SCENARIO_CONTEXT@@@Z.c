/*
 * XREFs of ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E0D0
 * Callers:
 *     MonitorRebuildMonitorModeListCache @ 0x1C0291300 (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

__int64 __fastcall RebuildMonitorModeListCacheHelper(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v3; // rax
  __int64 v6; // rdi
  int MonitorInstance; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DXGMONITOR *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rax
  int updated; // eax
  struct _ERESOURCE *v16; // rcx
  DXGMONITOR *v18; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 315);
  v18 = 0LL;
  v6 = a2;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(*(struct _FAST_MUTEX **)(v3 + 96), a2, 0, &v18);
  v12 = (DXGMONITOR *)MonitorInstance;
  if ( MonitorInstance >= 0 )
  {
    v12 = v18;
    if ( !v18 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v14);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v12 + 296), 1u);
    updated = DXGMONITOR::_UpdateEDIDBaseBlock(v12, a3, 1u);
    v16 = (struct _ERESOURCE *)((char *)v12 + 296);
    LODWORD(v12) = updated;
    ExReleaseResourceLite(v16);
    KeLeaveCriticalRegion();
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9, v8, v10, v11);
    v13[3] = a1;
    v13[4] = v6;
    v13[5] = v12;
    WdLogEvent5_WdDmmEvent(v13);
  }
  return (unsigned int)v12;
}
