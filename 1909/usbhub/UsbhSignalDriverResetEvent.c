/*
 * XREFs of UsbhSignalDriverResetEvent @ 0x1C000C6DC
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0001D70 (UsbhDriverResetPort.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C000A370 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhBusConnectPdo @ 0x1C000F090 (UsbhBusConnectPdo.c)
 *     UsbhHubDispatchPortEvent @ 0x1C00164A0 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0047EB4 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1C0048838 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0049E24 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004A4AC (Usbh_BusPause_PdoEvent.c)
 *     UsbhDropDevice @ 0x1C0056E2C (UsbhDropDevice.c)
 *     UsbhFailDriverResetPort @ 0x1C0056F20 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x1C0057B80 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1C0058924 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhLogSignalDriverResetEvent @ 0x1C000C7A8 (UsbhLogSignalDriverResetEvent.c)
 *     Log @ 0x1C0013360 (Log.c)
 */

void __fastcall UsbhSignalDriverResetEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  int v5; // r9d
  KIRQL v6; // r10
  __int64 v7; // [rsp+20h] [rbp-18h]

  Log(a1, 16, 1685213745, a2, *(unsigned __int16 *)(a2 + 4));
  if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, v4) )
  {
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v5 = *(_DWORD *)(a2 + 12);
    v7 = *(unsigned __int16 *)(a2 + 4);
    *(_DWORD *)(a2 + 448) = 1;
    Log(a1, 16, 1886479734, v5, v7);
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1404) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v6);
  }
}
