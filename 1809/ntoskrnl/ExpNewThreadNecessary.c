/*
 * XREFs of ExpNewThreadNecessary @ 0x1400B6A40
 * Callers:
 *     ExpWorkerThread @ 0x1400B5BB0 (ExpWorkerThread.c)
 *     ExpQueueWorkItem @ 0x1400B7260 (ExpQueueWorkItem.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14012AFF0 (ExpPartitionCreateThreadIfNecessary.c)
 *     ExpWorkQueueManagerThread @ 0x140741C90 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpNewThreadNecessary(__int64 a1, int a2)
{
  int v2; // r8d

  v2 = *(_DWORD *)(a1 + 712);
  return v2 < (2 * *(_DWORD *)(a1 + 716)) >> 1
      || v2 < a2 && *(_QWORD *)(a1 + 8) == a1 + 8 && (*(_DWORD *)(a1 + 4) || *(int *)(a1 + 716) < 0);
}
