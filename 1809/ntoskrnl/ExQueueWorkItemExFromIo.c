/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x14031D088
 * Callers:
 *     IoQueueWorkItemToNode @ 0x140284670 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1400B7320 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1400D1A58 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1400D1A78 (ExpValidateWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemExFromIo(__int64 *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 1u);
}
