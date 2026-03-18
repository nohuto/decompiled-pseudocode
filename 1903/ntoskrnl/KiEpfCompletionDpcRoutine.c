/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x1402B3320
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1402B3384 (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140446DAC);
  return KiEpfDrainCompletionQueue();
}
