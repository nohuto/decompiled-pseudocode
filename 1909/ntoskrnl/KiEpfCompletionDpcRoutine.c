/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x1402B3080
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1402B30E4 (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140446ACC);
  return KiEpfDrainCompletionQueue();
}
