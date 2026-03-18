/*
 * XREFs of UsbhSignalSuspendEvent @ 0x1C00456A0
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1C000B3E8 (Usbh_PCE_Suspend_Action.c)
 *     UsbhRequestPortSuspend @ 0x1C000BA08 (UsbhRequestPortSuspend.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C000E2F4 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhEnumerate1 @ 0x1C000F870 (UsbhEnumerate1.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0015D90 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubIsr @ 0x1C001A670 (UsbhHubIsr.c)
 *     UsbhEnumerate2 @ 0x1C002B118 (UsbhEnumerate2.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C004663C (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhPortDisconnect @ 0x1C00553C0 (UsbhPortDisconnect.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x1C000C3A4 (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0045628 (UsbhSetPcqEventStatus.c)
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
