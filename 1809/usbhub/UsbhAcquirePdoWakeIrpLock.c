/*
 * XREFs of UsbhAcquirePdoWakeIrpLock @ 0x1C000C590
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 */

void __fastcall UsbhAcquirePdoWakeIrpLock(PIO_CSQ Csq, PKIRQL Irql)
{
  __int64 v3; // r10

  Log(Csq[-18].ReservePointer, 16, 2004306987, 0, 0LL);
  *Irql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 64));
}
