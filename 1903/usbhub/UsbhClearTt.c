/*
 * XREFs of UsbhClearTt @ 0x1C004834C
 * Callers:
 *     UsbhReset1Complete @ 0x1C000FD00 (UsbhReset1Complete.c)
 *     UsbhInitializeDevice @ 0x1C00112AC (UsbhInitializeDevice.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C00182D0 (UsbhSyncSendCommand.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

void __fastcall UsbhClearTt(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  _DWORD *v6; // r14
  void *v7; // r10
  int v8; // edx
  int v9; // edx
  int v10; // [rsp+20h] [rbp-40h]
  int v11[2]; // [rsp+28h] [rbp-38h]
  int v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+50h] [rbp-10h] BYREF
  int v14[2]; // [rsp+58h] [rbp-8h] BYREF
  __int16 v15; // [rsp+A8h] [rbp+48h] BYREF

  *(_QWORD *)v14 = 0LL;
  v6 = FdoExt(a1);
  Log(a1, 4, 1919243348, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x18u,
      (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
      *(unsigned __int16 *)(a2 + 4));
  if ( (v6[640] & 0x80u) != 0 )
  {
    v15 = 0;
    LOWORD(v14[0]) = 2083;
    Log(a1, 4, 1920156737, a3, 0LL);
    v14[1] = *(unsigned __int16 *)(a2 + 4);
    HIWORD(v14[0]) = 16 * (a3 & 0x7F);
    v8 = UsbhSyncSendCommand(a1, (__int64)v14, 0LL, &v15, v10, &v13);
    if ( (v8 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v8) )
    {
      LOBYTE(v12) = 0;
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 22, (int)v14, 8, v9, v13, usbfile_bus_c, 2412, v12);
    }
  }
  else
  {
    Log(a1, 4, 1851872340, a2, 0LL);
    if ( WPP_RECORDER_INITIALIZED != v7 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11[0] = *(unsigned __int16 *)(a2 + 4);
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0x19u,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_QWORD *)v11);
      }
    }
  }
}
