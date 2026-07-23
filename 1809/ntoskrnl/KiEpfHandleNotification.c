/*
 * XREFs of KiEpfHandleNotification @ 0x14029C0C0
 * Callers:
 *     KiVirtualizationException @ 0x1401CD500 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14029C044 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14029C0E4 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
