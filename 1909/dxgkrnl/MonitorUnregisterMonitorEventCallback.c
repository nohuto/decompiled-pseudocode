/*
 * XREFs of MonitorUnregisterMonitorEventCallback @ 0x1C02CAB38
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C005373C (--1VIDPN_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z @ 0x1C02C8BE8 (-_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z.c)
 */

__int64 __fastcall MonitorUnregisterMonitorEventCallback(__int64 a1, struct HDXGMONITOREVENT__ ***a2, __int64 a3)
{
  struct _FAST_MUTEX *v4; // rcx
  __int64 v5; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = *(struct _FAST_MUTEX **)(a1 + 96);
  if ( !v4 )
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v5 + 24) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  return MONITOR_MGR::_RemoveMonitorEventHandler(v4, a2);
}
