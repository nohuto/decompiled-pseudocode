/*
 * XREFs of ExTryQueueWorkItem @ 0x1400D16E0
 * Callers:
 *     PopFxQueueWorkOrder @ 0x140100490 (PopFxQueueWorkOrder.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1400D170C (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0LL);
}
