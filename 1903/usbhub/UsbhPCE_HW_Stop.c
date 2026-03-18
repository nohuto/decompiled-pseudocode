/*
 * XREFs of UsbhPCE_HW_Stop @ 0x1C00461F4
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C0011C70 (UsbhHubProcessIsr.c)
 *     UsbhBusPnpStop_Action @ 0x1C0043EC0 (UsbhBusPnpStop_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C001ADB4 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0041A74 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_HW_Stop(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 PortData; // rax
  int v9; // [rsp+28h] [rbp-20h]

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = a2;
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x44u,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v9,
      a3);
  }
  Log(a1, 512, 1346711863, 0LL, a2);
  PortData = UsbhGetPortData(a1, a2);
  if ( PortData )
    UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 17, a3, 0LL, 0, 0LL, 0LL);
  UsbhReleaseEnumBusLockEx(a1, a3, a2);
}
