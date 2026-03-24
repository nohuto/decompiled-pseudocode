/*
 * XREFs of KiEpfHandleNotification @ 0x14029BED0
 * Callers:
 *     KiVirtualizationException @ 0x1401CD400 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14029BE54 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14029BEF4 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
