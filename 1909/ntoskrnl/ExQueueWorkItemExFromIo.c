/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x14033BD58
 * Callers:
 *     IoQueueWorkItemToNode @ 0x140299710 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14005B338 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x14008081C (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1400809E4 (ExpTypeToPriority.c)
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
