/*
 * XREFs of KiEpfHandleNotification @ 0x1402B3160
 * Callers:
 *     KiVirtualizationException @ 0x1401D4000 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1402B30E4 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1402B3184 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
