/*
 * XREFs of IoAcquireVpbSpinLock @ 0x140138660
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14029E0D8 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall IoAcquireVpbSpinLock(PKIRQL Irql)
{
  *Irql = KeAcquireQueuedSpinLock(9uLL);
}
