/*
 * XREFs of UsbhSetPortIndicator @ 0x1C00423F4
 * Callers:
 *     Usbh_PIND_Disable_Action @ 0x1C00425B0 (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_Enable_Action @ 0x1C004267C (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C0042714 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C00427DC (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C00428C4 (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C00182D0 (UsbhSyncSendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0041870 (WPP_RECORDER_SF_dd.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhSetPortIndicator(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rdi
  int v8; // r10d
  int v10; // [rsp+20h] [rbp-30h]
  int v11; // [rsp+28h] [rbp-28h]
  int v12; // [rsp+30h] [rbp-20h]
  int v13; // [rsp+48h] [rbp-8h]
  __int16 v14; // [rsp+98h] [rbp+48h] BYREF
  int v15; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+58h] BYREF

  v16 = 0LL;
  v15 = 0;
  v14 = 0;
  v6 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = a2;
    v11 = v6[344];
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0xAu,
      (__int64)&WPP_35133b6d46fa39b50c5464f64ebf0a08_Traceguids,
      v11,
      v12);
  }
  Log(a1, 0x8000, 1885957680, a2, 0LL);
  LODWORD(v16) = 1442595;
  HIDWORD(v16) = a3 | a2;
  v7 = (int)UsbhSyncSendCommand(a1, (__int64)&v16, 0LL, &v14, v10, &v15);
  Log(a1, 8, 1937076273, v7, v15);
  if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
  {
    LOBYTE(v13) = 0;
    UsbhException(a1, a2, 119, 0, 0, v7, v8, usbfile_pind_c, 96, v13);
  }
  Log(a1, 8, 1937077072, v7, a2);
  return (unsigned int)v7;
}
