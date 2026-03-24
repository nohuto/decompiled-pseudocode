/*
 * XREFs of ExQueueWorkItemEx @ 0x1401296E4
 * Callers:
 *     KeTerminateThread @ 0x140089A20 (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x1401296B0 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1402DD060 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1400B7320 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1400D1A58 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1400D1A78 (ExpValidateWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemEx(__int64 *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 0);
}
