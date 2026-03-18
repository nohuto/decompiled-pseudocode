/*
 * XREFs of UsbhReset1DropDeviceTimeout @ 0x1C0055BF0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0046954 (UsbhAssertBusLock.c)
 *     UsbhDropDevice @ 0x1C0054C3C (UsbhDropDevice.c)
 */

__int64 __fastcall UsbhReset1DropDeviceTimeout(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x15u,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      v7);
  }
  Log(a1, 1024, 1884451951, a2, 0LL);
  UsbhAssertBusLock(a1);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT);
  UsbhDropDevice(a1, a2, a3);
  return 0LL;
}
