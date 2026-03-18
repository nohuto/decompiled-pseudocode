/*
 * XREFs of ExQueueWorkItemEx @ 0x14008074C
 * Callers:
 *     KeTerminateThread @ 0x140080CBC (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x140135A20 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1402F9810 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14005B298 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x14008041C (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1400805E4 (ExpTypeToPriority.c)
 */

char __fastcall ExQueueWorkItemEx(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v5; // esi
  int v6; // eax

  v5 = (int)a1;
  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), v5, v6, a3, 0);
}
