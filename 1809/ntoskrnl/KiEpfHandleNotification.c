/*
 * XREFs of KiEpfHandleNotification @ 0x14029BDD0
 * Callers:
 *     KiVirtualizationException @ 0x1401CD300 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14029BD54 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14029BDF4 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
