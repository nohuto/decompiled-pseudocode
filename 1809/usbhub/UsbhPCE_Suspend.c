/*
 * XREFs of UsbhPCE_Suspend @ 0x1C00020C8
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x1C0001FAC (UsbhSyncSuspendPdoPort.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000B3E8 (Usbh_PCE_Suspend_Action.c)
 *     UsbhBusSuspend_Action @ 0x1C000C954 (UsbhBusSuspend_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C0045F14 (Usbh_PCE_ResumeDone_Action.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_Suspend(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 PortData; // rax
  unsigned int v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h]

  v8 = -1073741667;
  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
  {
    LODWORD(v9) = 0;
    UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 10, a2, v9, 0, 0LL, (__int64)&v8);
  }
  return v8;
}
