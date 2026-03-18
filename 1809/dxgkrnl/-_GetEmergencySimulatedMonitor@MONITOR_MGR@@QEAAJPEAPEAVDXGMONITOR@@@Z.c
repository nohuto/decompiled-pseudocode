/*
 * XREFs of ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00B4314
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B69D4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028EAC0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0004F08 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetEmergencySimulatedMonitor(struct _FAST_MUTEX *this, struct DXGMONITOR **a2)
{
  struct _FAST_MUTEX *v4; // rbx
  ULONG *p_Contention; // rcx
  char *i; // rax
  unsigned int v7; // esi
  char *v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  v4 = this + 3;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  for ( i = *(char **)&this[2].Contention; ; i = (char *)*((_QWORD *)v8 + 2) )
  {
    if ( i == (char *)p_Contention )
      goto LABEL_7;
    v8 = i - 16;
    if ( !i )
      v8 = 0LL;
    if ( !v8 )
    {
LABEL_7:
      v7 = -1073741275;
      v8 = 0LL;
      goto LABEL_8;
    }
    if ( *((_DWORD *)v8 + 108) == 5 )
      break;
  }
  if ( DXGMONITOR::_GetAttachedPhysicalMonitor((DXGMONITOR *)v8) )
  {
    v12 = WdLogNewEntry5_WdAssertion(p_Contention);
    WdLogEvent5_WdAssertion(v12);
  }
  v7 = 0;
LABEL_8:
  *a2 = (struct DXGMONITOR *)v8;
  if ( !v4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(p_Contention);
    WdLogEvent5_WdAssertion(v13);
  }
  KeReleaseGuardedMutex(v4);
  return v7;
}
