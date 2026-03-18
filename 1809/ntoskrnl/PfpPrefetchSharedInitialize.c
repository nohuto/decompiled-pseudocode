/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x1406CA630
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14065B9BC (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x140666580 (PfSnAsyncPrefetchWorker.c)
 *     PfpQueryFileExtentsRequest @ 0x140864748 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
