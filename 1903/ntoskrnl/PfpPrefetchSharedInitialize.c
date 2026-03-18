/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x14066A144
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14066A190 (PfSnAsyncPrefetchWorker.c)
 *     PfpPrefetchRequestPerform @ 0x1406A9098 (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x1408A0FA8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
