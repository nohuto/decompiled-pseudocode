/*
 * XREFs of UsbhSuspendPort @ 0x1C000BB60
 * Callers:
 *     UsbhRequestPortSuspend @ 0x1C000BA08 (UsbhRequestPortSuspend.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C00444B8 (UsbhHubSyncSuspendPortEvent.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0017B10 (UsbhSyncSendCommand.c)
 *     UsbhGetPortStatus @ 0x1C003F2F8 (UsbhGetPortStatus.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhSuspendPort(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // esi
  __int64 v4; // r13
  unsigned int v5; // edi
  int v7; // r10d
  int PortStatus; // eax
  int v9; // [rsp+20h] [rbp-30h]
  int v10; // [rsp+48h] [rbp-8h]
  __int16 v11; // [rsp+98h] [rbp+48h] BYREF
  int v12; // [rsp+A0h] [rbp+50h] BYREF
  int v13; // [rsp+A8h] [rbp+58h] BYREF
  __int16 v14; // [rsp+ACh] [rbp+5Ch]
  __int16 v15; // [rsp+AEh] [rbp+5Eh]

  v2 = a2;
  v12 = 0;
  v11 = 0;
  v4 = FdoExt(a1);
  Log(a1, 8, 1937076272, v2, 0LL);
  v13 = 131875;
  v14 = v2;
  v15 = 0;
  v5 = UsbhSyncSendCommand(a1, (unsigned int)&v13, 0, (unsigned int)&v11, v9, (__int64)&v12);
  Log(a1, 8, 1937076273, v5, v12);
  if ( (v5 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v5) )
  {
    LOBYTE(v10) = 0;
    UsbhException(a1, (unsigned __int16)v2, 51, 0, 0, v5, v7, usbfile_hub_c, 3663, v10);
  }
  Log(a1, 8, 1937077072, v5, v2);
  if ( (*(_DWORD *)(v4 + 2564) & 2) != 0 )
  {
    PortStatus = UsbhGetPortStatus(a1, (unsigned __int16)v2, &v11, &v12);
    Log(a1, 8, 1937076307, PortStatus, v12);
  }
  return v5;
}
