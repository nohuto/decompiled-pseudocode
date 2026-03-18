/*
 * XREFs of UsbhSetPortIndicator @ 0x1C0040DB4
 * Callers:
 *     Usbh_PIND_Disable_Action @ 0x1C0040F7C (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_Enable_Action @ 0x1C0041048 (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C00410E0 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C00411A8 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C0041290 (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0017B10 (UsbhSyncSendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0040248 (WPP_RECORDER_SF_dd.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhSetPortIndicator(__int64 a1, unsigned __int16 a2, __int16 a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rdi
  int v8; // r10d
  int v10; // [rsp+20h] [rbp-58h]
  int v11; // [rsp+28h] [rbp-50h]
  int v12; // [rsp+30h] [rbp-48h]
  int v13; // [rsp+48h] [rbp-30h]
  __int16 v14; // [rsp+88h] [rbp+10h] BYREF
  int v15; // [rsp+90h] [rbp+18h] BYREF
  int v16; // [rsp+98h] [rbp+20h] BYREF
  __int16 v17; // [rsp+9Ch] [rbp+24h]
  __int16 v18; // [rsp+9Eh] [rbp+26h]

  v15 = 0;
  v14 = 0;
  v6 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
  v16 = 1442595;
  v18 = 0;
  v17 = a3 | a2;
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
