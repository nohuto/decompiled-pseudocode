/*
 * XREFs of IoSetActivityIdThread @ 0x140001C20
 * Callers:
 *     PiDqIrpQueryCreate @ 0x1405B6DD8 (PiDqIrpQueryCreate.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     PnpDeviceEventWorker @ 0x140699360 (PnpDeviceEventWorker.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407154B0 (PiDqObjectManagerServiceActionQueue.c)
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
