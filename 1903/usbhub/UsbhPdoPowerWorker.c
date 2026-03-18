/*
 * XREFs of UsbhPdoPowerWorker @ 0x1C004C2D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoPowerWorkerInternal @ 0x1C000BF48 (UsbhPdoPowerWorkerInternal.c)
 */

__int64 __fastcall UsbhPdoPowerWorker(ULONG_PTR a1, IRP *a2)
{
  return UsbhPdoPowerWorkerInternal(a1, a2);
}
