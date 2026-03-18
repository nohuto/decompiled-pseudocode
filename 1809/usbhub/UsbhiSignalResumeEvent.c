/*
 * XREFs of UsbhiSignalResumeEvent @ 0x1C0001DB8
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0001610 (Usbh_PCE_BusReset_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000AB44 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0018A80 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C00457A4 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0045CB4 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C004603C (Usbh_PCE_ResumeTimeout_Action.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C0001E90 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0045628 (UsbhSetPcqEventStatus.c)
 */

__int64 __fastcall UsbhiSignalResumeEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = UsbhLogSignalResumeEvent();
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(a1, a2, 1LL);
  return result;
}
