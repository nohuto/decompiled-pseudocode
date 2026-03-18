/*
 * XREFs of IoClearActivityIdThread @ 0x1400067A0
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140590B08 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F7500 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall IoClearActivityIdThread(void *a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  result[1].WaitBlock[0].SparePtr = a1;
  return result;
}
