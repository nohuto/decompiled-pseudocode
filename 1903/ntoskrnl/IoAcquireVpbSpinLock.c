/*
 * XREFs of IoAcquireVpbSpinLock @ 0x140138010
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14029E378 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall IoAcquireVpbSpinLock(PKIRQL Irql)
{
  *Irql = KeAcquireQueuedSpinLock(9uLL);
}
