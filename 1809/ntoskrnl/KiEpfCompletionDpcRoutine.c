/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x14029BFE0
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14029C044 (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_14041C22C);
  return KiEpfDrainCompletionQueue();
}
