/*
 * XREFs of UsbhCancelEnumeration @ 0x1C000A060
 * Callers:
 *     UsbhBusPause_Action @ 0x1C00094A0 (UsbhBusPause_Action.c)
 *     UsbhEnumerate1 @ 0x1C000FF08 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x1C002C33C (UsbhEnumerate2.c)
 *     UsbhPCE_Disable @ 0x1C0045FCC (UsbhPCE_Disable.c)
 *     UsbhHandleOvercurrent @ 0x1C0056FD0 (UsbhHandleOvercurrent.c)
 * Callees:
 *     UsbhCancelResetTimeout @ 0x1C00113C0 (UsbhCancelResetTimeout.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C001ADB4 (UsbhReleaseEnumBusLockEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C00481DC (UsbhAssertBusLock.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004A4AC (Usbh_BusPause_PdoEvent.c)
 *     UsbhBusUnlatchPdo @ 0x1C0056D28 (UsbhBusUnlatchPdo.c)
 */

__int64 __fastcall UsbhCancelEnumeration(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v9; // r9d

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
