/*
 * XREFs of UsbhDropDevice @ 0x1C0054C3C
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0015D90 (UsbhHubDispatchPortEvent.c)
 *     UsbhReset1DropDevice @ 0x1C0055B10 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C0055BF0 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset2DropDevice @ 0x1C00560B0 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C0056190 (UsbhReset2DropDeviceTimeout.c)
 * Callees:
 *     UsbhSignalDriverResetEvent @ 0x1C000BFCC (UsbhSignalDriverResetEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000E368 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0046954 (UsbhAssertBusLock.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C0049264 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhBusUnlatchPdo @ 0x1C0054B38 (UsbhBusUnlatchPdo.c)
 */

void __fastcall UsbhDropDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  int v7; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      v7);
  }
  Log(a1, 1024, 1883525712, a2, *(unsigned __int16 *)(a2 + 4));
  UsbhAssertBusLock(a1);
  UsbhSignalDriverResetEvent(a1, a2);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhBusUnlatchPdo(a1, a3, a2, v6, 0LL);
  Usbh_Disconnect_PdoEvent(a1, a3, 3, *(_QWORD *)(a2 + 376));
}
