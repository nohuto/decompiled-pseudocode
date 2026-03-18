/*
 * XREFs of DxgkIncreaseMonitorUniqueness @ 0x1C00B74EC
 * Callers:
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B71F8 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IncreaseMonitorUniquenessAllSessions@DXGSESSIONMGR@@QEAAXXZ @ 0x1C00B7518 (-IncreaseMonitorUniquenessAllSessions@DXGSESSIONMGR@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkIncreaseMonitorUniqueness(__int64 a1)
{
  DXGSESSIONMGR *v1; // rcx
  __int64 v3; // rax

  v1 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 77);
  if ( v1 )
  {
    DXGSESSIONMGR::IncreaseMonitorUniquenessAllSessions(v1);
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v3 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
}
