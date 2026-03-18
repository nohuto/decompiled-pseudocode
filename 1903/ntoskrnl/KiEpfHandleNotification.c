/*
 * XREFs of KiEpfHandleNotification @ 0x1402B3400
 * Callers:
 *     KiVirtualizationException @ 0x1401D3400 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1402B3384 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1402B3424 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
