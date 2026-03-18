/*
 * XREFs of UsbhReset1Debounce @ 0x1C0057B80
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSignalDriverResetEvent @ 0x1C000C6DC (UsbhSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C000CFB4 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhCancelResetTimeout @ 0x1C00113C0 (UsbhCancelResetTimeout.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C001ADB4 (UsbhReleaseEnumBusLockEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_QueueChange @ 0x1C00462DC (UsbhPCE_QueueChange.c)
 *     UsbhAssertBusLock @ 0x1C00481DC (UsbhAssertBusLock.c)
 *     UsbhPortDisconnect @ 0x1C0057600 (UsbhPortDisconnect.c)
 */

__int64 __fastcall UsbhReset1Debounce(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7; // [rsp+28h] [rbp-30h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x12u,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      *(unsigned __int16 *)(a2 + 4));
  Log(a1, 1024, 1883393603, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v7) = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      v7);
  }
  UsbhAssertBusLock(a1);
  if ( (*(_DWORD *)(a2 + 2408) & 1) == 0 )
    return 1LL;
  Log(a1, 1024, 1852785730, a2, *(unsigned __int16 *)(a2 + 4));
  UsbhCancelResetTimeout(a1, a2, 1);
  UsbhSignalSyncDeviceResetPdo(a1, a3, -1073741823);
  UsbhSignalDriverResetEvent(a1, a2);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhPortDisconnect(a1, a2, a3);
  UsbhPCE_QueueChange(a1, *(_WORD *)(a2 + 4), 1LL, *(_QWORD *)(a2 + 376));
  return 0LL;
}
