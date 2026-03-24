/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x14029BDF0
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14029BE54 (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_14041B16C);
  return KiEpfDrainCompletionQueue();
}
