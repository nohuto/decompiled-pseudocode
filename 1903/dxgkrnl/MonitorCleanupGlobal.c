/*
 * XREFs of MonitorCleanupGlobal @ 0x1C00561F0
 * Callers:
 *     DxgkUnload @ 0x1C023A4B0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C02D5158 (DriverEntry.c)
 * Callees:
 *     ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C02CDB1C (-MonitorCleanupAdditionalTiming@@YAXXZ.c)
 */

__int64 __fastcall MonitorCleanupGlobal(__int64 a1, __int64 a2)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax

  WdLogNewEntry5_WdTrace(a1, a2);
  IoUnregisterPlugPlayNotification(MONITOR_MGR::_pInterfaceNotificationHandle);
  v2 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  Flink = MONITOR_MGR::_MonitorPendingEventTraceHead.Flink;
  KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v2);
  if ( Flink != &MONITOR_MGR::_MonitorPendingEventTraceHead )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4, v6);
    WdLogEvent5_WdError(v7);
  }
  MonitorCleanupAdditionalTiming();
  return 0LL;
}
