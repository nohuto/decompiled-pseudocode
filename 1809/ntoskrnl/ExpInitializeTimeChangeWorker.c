/*
 * XREFs of ExpInitializeTimeChangeWorker @ 0x140584834
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140735864 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 */

void __fastcall ExpInitializeTimeChangeWorker(__int64 a1, KDEFERRED_ROUTINE *a2, void *a3, __int64 a4, __int64 a5)
{
  KeInitializeDpc((PRKDPC)a1, a2, a3);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = ExpTimeZoneWork;
  *(_QWORD *)(a1 + 152) = a5;
  KeInitializeTimerEx((PKTIMER)(a1 + 64), NotificationTimer);
}
