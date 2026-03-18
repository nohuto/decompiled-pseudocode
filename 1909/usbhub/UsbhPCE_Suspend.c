/*
 * XREFs of UsbhPCE_Suspend @ 0x1C00021C4
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x1C000207C (UsbhSyncSuspendPdoPort.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000BA00 (Usbh_PCE_Suspend_Action.c)
 *     UsbhBusSuspend_Action @ 0x1C000D08C (UsbhBusSuspend_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C004776C (Usbh_PCE_ResumeDone_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_Suspend(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 PortData; // rax
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = -1073741667;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      64,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      a3);
  Log(a1, 512, 1346711856, 0, a3);
  PortData = UsbhGetPortData(a1, a3);
  if ( PortData )
    UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 10, a2, 0LL, 0, 0LL, (__int64)&v8);
  return v8;
}
