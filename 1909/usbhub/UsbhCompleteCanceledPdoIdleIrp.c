/*
 * XREFs of UsbhCompleteCanceledPdoIdleIrp @ 0x1C005C750
 * Callers:
 *     <none>
 * Callees:
 *     UsbhIdleIrp_Event @ 0x1C005CC68 (UsbhIdleIrp_Event.c)
 */

void __fastcall UsbhCompleteCanceledPdoIdleIrp(PIO_CSQ Csq, PIRP Irp)
{
  UsbhIdleIrp_Event(Csq[-5].CsqReleaseLock, Csq[-10].CsqRemoveIrp, Irp, 6LL, 0);
}
