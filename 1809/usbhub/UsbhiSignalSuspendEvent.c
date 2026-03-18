/*
 * XREFs of UsbhiSignalSuspendEvent @ 0x1C00467F4
 * Callers:
 *     Usbh_PCE_Disable_Action @ 0x1C000A410 (Usbh_PCE_Disable_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000AB44 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000B3E8 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0014DA0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0018A80 (Usbh_PCE_Resume_Action.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C0045530 (UsbhRemoveQueuedSuspend.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x1C000C3A4 (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0045628 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhiSignalSuspendEvent(__int64 a1, __int64 a2)
{
  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30);
}
