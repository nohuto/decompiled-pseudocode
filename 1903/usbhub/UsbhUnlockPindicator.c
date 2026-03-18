/*
 * XREFs of UsbhUnlockPindicator @ 0x1C004256C
 * Callers:
 *     Usbh_PIND_Disable_Action @ 0x1C00425B0 (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_Enable_Action @ 0x1C004267C (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C0042714 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C00427DC (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C00428C4 (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 */

LONG __fastcall UsbhUnlockPindicator(__int64 a1)
{
  struct _KSEMAPHORE *v2; // rax

  v2 = (struct _KSEMAPHORE *)FdoExt(*(_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 112) = 1734964085;
  return KeReleaseSemaphore(v2 + 160, 16, 1, 0);
}
