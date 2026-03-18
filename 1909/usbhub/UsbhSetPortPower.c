/*
 * XREFs of UsbhSetPortPower @ 0x1C0040EF0
 * Callers:
 *     UsbhOvercurrentResetWorker @ 0x1C0042BF0 (UsbhOvercurrentResetWorker.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C00182D0 (UsbhSyncSendCommand.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhSetPortPower(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  int v5; // r10d
  int v7; // [rsp+20h] [rbp-60h]
  int v8; // [rsp+48h] [rbp-38h]
  _DWORD v9[2]; // [rsp+50h] [rbp-30h] BYREF
  int v10; // [rsp+58h] [rbp-28h] BYREF
  int v11[2]; // [rsp+60h] [rbp-20h] BYREF
  __int16 v12; // [rsp+68h] [rbp-18h]

  v2 = a2;
  v10 = 0;
  FdoExt(a1);
  *(int *)((char *)v11 + 2) = 0;
  HIWORD(v11[1]) = v2;
  LOWORD(v11[0]) = 0;
  Log(a1, 8, 1886416944, v2, 0LL);
  v9[0] = 525091;
  v12 = 3;
  v9[1] = (unsigned __int16)v2;
  v4 = (int)UsbhSyncSendCommand(a1, (__int64)v9, 0LL, &v11[1], v7, &v10);
  Log(a1, 8, 1886416945, v4, v10);
  if ( (v4 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v4) )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, (unsigned __int16)v2, 12, (int)v11, 10, v4, v5, usbfile_hub_c, 3524, v8);
  }
  Log(a1, 8, 1886549072, v4, v2);
  return (unsigned int)v4;
}
