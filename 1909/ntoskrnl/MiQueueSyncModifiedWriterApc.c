/*
 * XREFs of MiQueueSyncModifiedWriterApc @ 0x1402CE9F8
 * Callers:
 *     MiAttemptPageFileReduction @ 0x1402CD468 (MiAttemptPageFileReduction.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEB70 (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x140082030 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400E5200 (KeInsertQueueApc.c)
 */

NTSTATUS __fastcall MiQueueSyncModifiedWriterApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  KeInitializeApc(a2, *(_QWORD *)(a1 + 936), 0, (__int64)xHalTimerWatchdogStop, 0LL, a3, 0, a4);
  KeInsertQueueApc(a2, 0LL, 0LL, 0);
  return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
}
