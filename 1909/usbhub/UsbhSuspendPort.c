/*
 * XREFs of UsbhSuspendPort @ 0x1C000C1B0
 * Callers:
 *     UsbhRequestPortSuspend @ 0x1C000C038 (UsbhRequestPortSuspend.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0045BB8 (UsbhHubSyncSuspendPortEvent.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C00182D0 (UsbhSyncSendCommand.c)
 *     UsbhGetPortStatus @ 0x1C0040924 (UsbhGetPortStatus.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhSuspendPort(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // esi
  __int64 v4; // r13
  unsigned int v5; // edi
  int v7; // r10d
  int PortStatus; // eax
  int v9; // [rsp+20h] [rbp-40h]
  int v10; // [rsp+48h] [rbp-18h]
  _DWORD v11[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v12; // [rsp+A8h] [rbp+48h] BYREF
  int v13; // [rsp+B0h] [rbp+50h] BYREF
  int v14; // [rsp+B8h] [rbp+58h] BYREF

  v2 = a2;
  v13 = 0;
  v12 = 0;
  v14 = 0;
  v4 = FdoExt(a1);
  Log(a1, 8, 1937076272, v2, 0LL);
  v11[0] = 131875;
  v11[1] = (unsigned __int16)v2;
  v5 = UsbhSyncSendCommand(a1, (unsigned int)v11, 0, (unsigned int)&v12, v9, (__int64)&v13);
  Log(a1, 8, 1937076273, v5, v13);
  if ( (v5 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v5) )
  {
    LOBYTE(v10) = 0;
    UsbhException(a1, (unsigned __int16)v2, 51, 0, 0, v5, v7, usbfile_hub_c, 3663, v10);
  }
  Log(a1, 8, 1937077072, v5, v2);
  if ( (*(_DWORD *)(v4 + 2564) & 2) != 0 )
  {
    PortStatus = UsbhGetPortStatus(a1, (unsigned __int16)v2, &v14, &v13);
    Log(a1, 8, 1937076307, PortStatus, v13);
  }
  return v5;
}
