/*
 * XREFs of IoSetActivityIdThread @ 0x140006780
 * Callers:
 *     PnpDeviceEventWorker @ 0x14058CBC0 (PnpDeviceEventWorker.c)
 *     PiDqIrpQueryCreate @ 0x140591B08 (PiDqIrpQueryCreate.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F8780 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IoSetActivityIdThread(void *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  PVOID result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[0].SparePtr;
  CurrentThread[1].WaitBlock[0].SparePtr = a1;
  return result;
}
