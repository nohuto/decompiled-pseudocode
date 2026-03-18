/*
 * XREFs of MiQueueSyncModifiedWriterApc @ 0x1402B87F8
 * Callers:
 *     MiAttemptPageFileReduction @ 0x1402B71CC (MiAttemptPageFileReduction.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8970 (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x14008A360 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400F1460 (KeInsertQueueApc.c)
 */

NTSTATUS __fastcall MiQueueSyncModifiedWriterApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  KeInitializeApc(a2, *(_QWORD *)(a1 + 928), 0, (__int64)xHalTimerWatchdogStop, 0LL, a3, 0, a4);
  KeInsertQueueApc(a2, 0LL, 0LL, 0);
  return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
}
