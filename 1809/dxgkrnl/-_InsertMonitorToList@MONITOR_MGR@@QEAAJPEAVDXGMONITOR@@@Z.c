/*
 * XREFs of ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00B64DC
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B69D4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E310 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028EAC0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028F504 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_InsertMonitorToList(struct _FAST_MUTEX *this, struct DXGMONITOR *a2)
{
  ULONG *p_Contention; // rax
  MONITOR_MGR *v5; // rcx
  char **v6; // rdx
  char *v7; // rcx
  unsigned int v8; // edi
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  v5 = *(MONITOR_MGR **)&this[2].Contention;
  if ( v5 == (MONITOR_MGR *)&this[2].Contention )
    goto LABEL_6;
  v12 = (char *)v5 - 16;
  if ( !v5 )
    v12 = 0LL;
  if ( !v12 )
  {
LABEL_6:
    v6 = *(char ***)&this[2].Event.Header.Lock;
    v7 = (char *)a2 + 16;
    if ( *v6 != (char *)p_Contention )
      __fastfail(3u);
    *(_QWORD *)v7 = p_Contention;
    v8 = 0;
    *((_QWORD *)a2 + 3) = v6;
    *v6 = v7;
    *(_QWORD *)&this[2].Event.Header.Lock = v7;
    ++LODWORD(this[2].Owner);
  }
  else
  {
    while ( *((_DWORD *)a2 + 11) != *((_DWORD *)v12 + 11) )
    {
      v5 = (MONITOR_MGR *)*((_QWORD *)v12 + 2);
      if ( v5 != (MONITOR_MGR *)p_Contention )
      {
        v12 = (char *)v5 - 16;
        if ( !v5 )
          v12 = 0LL;
        if ( v12 )
          continue;
      }
      goto LABEL_6;
    }
    v13 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v13 + 24) = *((unsigned int *)v12 + 11);
    WdLogEvent5_WdError(v13);
    v8 = -1071774952;
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v14);
  }
  KeReleaseGuardedMutex(this + 3);
  return v8;
}
