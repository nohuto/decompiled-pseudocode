/*
 * XREFs of ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01281E4
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0124EB0 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017606C (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0128308 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall MONITOR_MGR::_CleanUpFromSimulatedMonitor(MONITOR_MGR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  struct _FAST_MUTEX *v2; // rbx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  MONITOR_MGR *v8; // rax
  char *v9; // rdi
  struct _ERESOURCE *v10; // r15
  int v11; // ecx
  MONITOR_MGR *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = (struct _FAST_MUTEX *)((char *)this + 168);
  v5 = 0;
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v14 = WdLogNewEntry5_WdAssertion(-168LL, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  KeAcquireGuardedMutex(v2);
  v8 = (MONITOR_MGR *)*((_QWORD *)this + 16);
  if ( v8 != (MONITOR_MGR *)((char *)this + 128) )
  {
    v9 = (char *)v8 - 16;
    if ( !v8 )
      v9 = 0LL;
    while ( v9 )
    {
      v10 = (struct _ERESOURCE *)(v9 + 296);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v9 + 296), 1u);
      v11 = v5 + 1;
      v12 = (MONITOR_MGR *)*((_QWORD *)v9 + 2);
      if ( *((_DWORD *)v9 + 109) != 5 )
        v11 = v5;
      v5 = v11;
      if ( v12 == (MONITOR_MGR *)((char *)this + 128) )
      {
        v9 = 0LL;
      }
      else
      {
        v9 = (char *)v12 - 16;
        if ( !v12 )
          v9 = 0LL;
      }
      ExReleaseResourceLite(v10);
      KeLeaveCriticalRegion();
    }
  }
  if ( !v2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v15);
  }
  KeReleaseGuardedMutex(v2);
  if ( !v5 )
  {
    LOBYTE(v13) = 1;
    MONITOR_MGR::_EnableDisableMonitor(this, 0xFFFFFFFFLL, v13, 8LL, 0LL, a2);
  }
}
