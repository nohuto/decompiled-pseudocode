/*
 * XREFs of USBHUB_FreeBugCheck @ 0x1C0050F48
 * Callers:
 *     UsbhDriverUnload @ 0x1C0051570 (UsbhDriverUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall USBHUB_FreeBugCheck(struct _KBUGCHECK_REASON_CALLBACK_RECORD *P)
{
  if ( P )
  {
    KeDeregisterBugCheckReasonCallback(P);
    ExFreePoolWithTag(P, 0);
  }
}
