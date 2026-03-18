/*
 * XREFs of IoReleaseVpbSpinLock @ 0x1401383A0
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14029E378 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 */

void __stdcall IoReleaseVpbSpinLock(KIRQL Irql)
{
  KeReleaseQueuedSpinLock(9uLL, Irql);
}
