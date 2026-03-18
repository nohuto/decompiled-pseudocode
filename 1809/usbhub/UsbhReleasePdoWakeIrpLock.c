/*
 * XREFs of UsbhReleasePdoWakeIrpLock @ 0x1C000C540
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 */

void __fastcall UsbhReleasePdoWakeIrpLock(PIO_CSQ Csq, KIRQL Irql)
{
  __int64 v2; // r10
  KIRQL v3; // r11

  Log(Csq[-18].ReservePointer, 16, 2004306989, 0, 0LL);
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 64), v3);
}
