/*
 * XREFs of ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C0013BA8
 * Callers:
 *     MonitorReleaseMonitorPendingEvent @ 0x1C01220DC (MonitorReleaseMonitorPendingEvent.c)
 *     ??1MONITOR_MGR@@QEAA@XZ @ 0x1C028DF0C (--1MONITOR_MGR@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MONITOR_MGR::_ReleaseMonitorPendingEvent(PVOID P)
{
  __int64 v2; // rax
  __int64 v3; // rax
  KIRQL v4; // al
  _QWORD *v5; // r8
  PVOID *v6; // rdx

  if ( !P )
  {
    v2 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((int *)P + 4) <= 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion(P);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 4, 0xFFFFFFFF) == 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
    v5 = *(_QWORD **)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v6 = (PVOID *)*((_QWORD *)P + 1), *v6 != P) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v4);
    ExFreePoolWithTag(P, 0);
  }
}
