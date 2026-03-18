/*
 * XREFs of DxgkIncreaseMonitorUniqueness @ 0x1C0173BA4
 * Callers:
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015CA0C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017398C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IncreaseMonitorUniquenessAllSessions@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0173BD0 (-IncreaseMonitorUniquenessAllSessions@DXGSESSIONMGR@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkIncreaseMonitorUniqueness(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  DXGSESSIONMGR *v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rax

  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 74);
  if ( v3 )
  {
    DXGSESSIONMGR::IncreaseMonitorUniquenessAllSessions(v3);
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(0LL, v2, v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
