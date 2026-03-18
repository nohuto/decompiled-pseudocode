/*
 * XREFs of UsbhHardErrorReset1BadEnable @ 0x1C00550E0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C000E368 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhCancelResetTimeout @ 0x1C0010D90 (UsbhCancelResetTimeout.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0046954 (UsbhAssertBusLock.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhHardErrorReset1BadEnable(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  int v6; // [rsp+28h] [rbp-30h]

  v4 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v6 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x16u,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      v6);
  }
  Log(a1, 1024, 1883391045, a2, 0LL);
  UsbhCancelResetTimeout(a1, a2, 0);
  if ( v4[768] == *(unsigned __int16 *)(a2 + 4) )
  {
    UsbhAssertBusLock(a1);
    UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  }
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_BAD_ENABLE);
  UsbhException(a1, *(_WORD *)(a2 + 4), 0x3Eu, (const void *)a2, 0xB70u, -1, -1, usbfile_busfunc_c, 1061, 0);
  return 3LL;
}
