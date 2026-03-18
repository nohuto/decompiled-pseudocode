/*
 * XREFs of UsbhSignalSuspendEvent @ 0x1C0046EC8
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1C000BA00 (Usbh_PCE_Suspend_Action.c)
 *     UsbhRequestPortSuspend @ 0x1C000C038 (UsbhRequestPortSuspend.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C000E788 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhEnumerate1 @ 0x1C000FF08 (UsbhEnumerate1.c)
 *     UsbhHubDispatchPortEvent @ 0x1C00164A0 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubIsr @ 0x1C001B0B0 (UsbhHubIsr.c)
 *     UsbhEnumerate2 @ 0x1C002C33C (UsbhEnumerate2.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0047EB4 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhPortDisconnect @ 0x1C0057600 (UsbhPortDisconnect.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x1C000CB78 (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0046E50 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhSignalSuspendEvent(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // bl

  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    *(_DWORD *)(a2 + 448) = 1;
    v5 = v4;
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
