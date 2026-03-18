/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x1406ABCA8
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14066EA90 (PfSnAsyncPrefetchWorker.c)
 *     PfpPrefetchRequestPerform @ 0x1406AADFC (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x1408A07E8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
