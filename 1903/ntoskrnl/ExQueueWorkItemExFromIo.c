/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x14033C2F8
 * Callers:
 *     IoQueueWorkItemToNode @ 0x1402999B0 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14005B298 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x14008041C (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1400805E4 (ExpTypeToPriority.c)
 */

char __fastcall ExQueueWorkItemExFromIo(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v5; // esi
  int v6; // eax

  v5 = (int)a1;
  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), v5, v6, a3, 1);
}
