/*
 * XREFs of ExTryQueueWorkItem @ 0x1400D1700
 * Callers:
 *     PopFxQueueWorkOrder @ 0x1401004B0 (PopFxQueueWorkOrder.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1400D172C (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0LL);
}
