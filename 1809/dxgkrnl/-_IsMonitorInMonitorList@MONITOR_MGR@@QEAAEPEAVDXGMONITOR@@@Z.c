/*
 * XREFs of ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z @ 0x1C0133F34
 * Callers:
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0133918 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E7F0 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 * Callees:
 *     <none>
 */

char __fastcall MONITOR_MGR::_IsMonitorInMonitorList(MONITOR_MGR *this, struct DXGMONITOR *a2)
{
  struct _FAST_MUTEX *v2; // rbx
  struct DXGMONITOR **v5; // rcx
  struct DXGMONITOR *v6; // rax
  char v7; // di
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = (struct _FAST_MUTEX *)((char *)this + 168);
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v9 = WdLogNewEntry5_WdAssertion(-168LL);
    WdLogEvent5_WdAssertion(v9);
  }
  KeAcquireGuardedMutex(v2);
  v5 = (struct DXGMONITOR **)((char *)this + 128);
  if ( a2 && (v6 = *v5, *v5 != (struct DXGMONITOR *)v5) )
  {
    while ( v6 != (struct DXGMONITOR *)((char *)a2 + 16) )
    {
      if ( v5 == (struct DXGMONITOR **)v6 )
        goto LABEL_5;
      v6 = *(struct DXGMONITOR **)v6;
    }
    v7 = 1;
  }
  else
  {
LABEL_5:
    v7 = 0;
  }
  if ( !v2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v10);
  }
  KeReleaseGuardedMutex(v2);
  return v7;
}
