/*
 * XREFs of UsbhiSignalSuspendEvent @ 0x1C004807C
 * Callers:
 *     Usbh_PCE_Disable_Action @ 0x1C000A9A0 (Usbh_PCE_Disable_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000B110 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000BA00 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0015460 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0019250 (Usbh_PCE_Resume_Action.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C0046D48 (UsbhRemoveQueuedSuspend.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x1C000CB78 (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0046E50 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhiSignalSuspendEvent(__int64 a1, __int64 a2)
{
  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30);
}
