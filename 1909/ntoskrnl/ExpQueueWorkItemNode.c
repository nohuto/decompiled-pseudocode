/*
 * XREFs of ExpQueueWorkItemNode @ 0x140080930
 * Callers:
 *     ExpQueueWorkItem @ 0x14008081C (ExpQueueWorkItem.c)
 * Callees:
 *     KeInsertPriQueue @ 0x14005B380 (KeInsertPriQueue.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14008099C (ExpPartitionCreateThreadIfNecessary.c)
 */

__int64 __fastcall ExpQueueWorkItemNode(__int64 a1, __int64 *a2, int a3, __int64 a4, int a5)
{
  __int64 v7; // rbx

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(a4 + 146)) + 8LL * a5);
  if ( (v7 & 1) != 0 )
    v7 = 0LL;
  KeInsertPriQueue(v7, a2, a3, a4, 0);
  return ExpPartitionCreateThreadIfNecessary(a1, a4, v7);
}
