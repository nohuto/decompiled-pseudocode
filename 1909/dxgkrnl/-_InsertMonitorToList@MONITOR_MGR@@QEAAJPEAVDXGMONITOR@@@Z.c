/*
 * XREFs of ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0179824
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179630 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179CF4 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7F50 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C8504 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_InsertMonitorToList(struct _FAST_MUTEX *this, struct DXGMONITOR *a2)
{
  __int64 v4; // r8
  ULONG *p_Contention; // rax
  MONITOR_MGR *v6; // rcx
  char **v7; // rdx
  char *v8; // rcx
  unsigned int v9; // edi
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax

  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  v6 = *(MONITOR_MGR **)&this[2].Contention;
  if ( v6 == (MONITOR_MGR *)&this[2].Contention )
    goto LABEL_6;
  v13 = (char *)v6 - 16;
  if ( !v6 )
    v13 = 0LL;
  if ( !v13 )
  {
LABEL_6:
    v7 = *(char ***)&this[2].Event.Header.Lock;
    v8 = (char *)a2 + 16;
    if ( *v7 != (char *)p_Contention )
      __fastfail(3u);
    *(_QWORD *)v8 = p_Contention;
    v9 = 0;
    *((_QWORD *)a2 + 3) = v7;
    *v7 = v8;
    *(_QWORD *)&this[2].Event.Header.Lock = v8;
    ++LODWORD(this[2].Owner);
  }
  else
  {
    v14 = *((unsigned int *)a2 + 11);
    while ( (_DWORD)v14 != *((_DWORD *)v13 + 11) )
    {
      v6 = (MONITOR_MGR *)*((_QWORD *)v13 + 2);
      if ( v6 != (MONITOR_MGR *)p_Contention )
      {
        v13 = (char *)v6 - 16;
        if ( !v6 )
          v13 = 0LL;
        if ( v13 )
          continue;
      }
      goto LABEL_6;
    }
    v15 = WdLogNewEntry5_WdError(v6, v14, v4);
    *(_QWORD *)(v15 + 24) = *((unsigned int *)v13 + 11);
    WdLogEvent5_WdError(v15);
    v9 = -1071774952;
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v16 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v16);
  }
  KeReleaseGuardedMutex(this + 3);
  return v9;
}
