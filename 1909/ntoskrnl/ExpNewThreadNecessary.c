/*
 * XREFs of ExpNewThreadNecessary @ 0x14005A630
 * Callers:
 *     ExpWorkerThread @ 0x140059CD0 (ExpWorkerThread.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14008099C (ExpPartitionCreateThreadIfNecessary.c)
 *     ExpWorkQueueManagerThread @ 0x14076BAB0 (ExpWorkQueueManagerThread.c)
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
