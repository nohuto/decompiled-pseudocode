/*
 * XREFs of ExTryQueueWorkItem @ 0x140080260
 * Callers:
 *     PopFxQueueWorkOrder @ 0x1400B2F60 (PopFxQueueWorkOrder.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x14008028C (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0LL);
}
