/*
 * XREFs of UsbhCancelEnumeration @ 0x1C0009AFC
 * Callers:
 *     UsbhBusPause_Action @ 0x1C0008F50 (UsbhBusPause_Action.c)
 *     UsbhEnumerate1 @ 0x1C000F870 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x1C002B118 (UsbhEnumerate2.c)
 *     UsbhPCE_Disable @ 0x1C0044894 (UsbhPCE_Disable.c)
 *     UsbhHandleOvercurrent @ 0x1C0054DC0 (UsbhHandleOvercurrent.c)
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C000E368 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhCancelResetTimeout @ 0x1C0010D90 (UsbhCancelResetTimeout.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0046954 (UsbhAssertBusLock.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C0048B04 (Usbh_BusPause_PdoEvent.c)
 *     UsbhBusUnlatchPdo @ 0x1C0054B38 (UsbhBusUnlatchPdo.c)
 */

__int64 __fastcall UsbhCancelEnumeration(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v9; // r9d

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      42,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      *(_WORD *)(a3 + 4));
  Log(a1, 1024, 1668826446, a3, 0LL);
  if ( a2 - 1 > 1 )
    return a2;
  FdoExt(a1);
  UsbhCancelResetTimeout(a1, a3, 1LL);
  UsbhAssertBusLock(a1);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a3 + 376), *(unsigned __int16 *)(a3 + 4));
  UsbhBusUnlatchPdo(a1, a4, a3, v9, 0LL);
  Usbh_BusPause_PdoEvent(a1, a4, a3, *(_QWORD *)(a3 + 376));
  return 4LL;
}
