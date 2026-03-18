/*
 * XREFs of ExpInitializeTimeChangeWorker @ 0x140583834
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140734694 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140089FF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A56D0 (KeInitializeDpc.c)
 */

void __fastcall ExpInitializeTimeChangeWorker(__int64 a1, KDEFERRED_ROUTINE *a2, void *a3, __int64 a4, __int64 a5)
{
  KeInitializeDpc((PRKDPC)a1, a2, a3);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = ExpTimeZoneWork;
  *(_QWORD *)(a1 + 152) = a5;
  KeInitializeTimerEx((PKTIMER)(a1 + 64), NotificationTimer);
}
