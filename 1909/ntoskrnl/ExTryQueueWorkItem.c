/*
 * XREFs of ExTryQueueWorkItem @ 0x140080660
 * Callers:
 *     PopFxRequestWorker @ 0x1400E3A10 (PopFxRequestWorker.c)
 *     PopFxQueueWorkOrder @ 0x1400E3AA8 (PopFxQueueWorkOrder.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x14008068C (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0LL);
}
