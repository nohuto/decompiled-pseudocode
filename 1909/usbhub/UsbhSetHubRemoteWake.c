/*
 * XREFs of UsbhSetHubRemoteWake @ 0x1C0007734
 * Callers:
 *     UsbhArmHubWakeOnConnect @ 0x1C0007588 (UsbhArmHubWakeOnConnect.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C00075D8 (UsbhDisarmHubWakeOnConnect.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C00182D0 (UsbhSyncSendCommand.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhSetHubRemoteWake(__int64 a1, char a2)
{
  int v3; // edi
  __int64 v4; // rax
  int v5; // r10d
  unsigned int v6; // ebx
  int v8; // r10d
  int v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+48h] [rbp-20h]
  __int16 v11; // [rsp+78h] [rbp+10h] BYREF
  int v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0LL;
  v3 = a1;
  v12 = 0;
  v11 = 0;
  v4 = FdoExt(a1);
  BYTE1(v13) = a2 != 0 ? 3 : 1;
  Log(v3, 8, 1400332651, *(_DWORD *)(v4 + 1376), 0LL);
  *(_DWORD *)((char *)&v13 + 2) = v5;
  HIWORD(v13) = 0;
  v6 = UsbhSyncSendCommand(v3, (unsigned int)&v13, 0, (unsigned int)&v11, v9, (__int64)&v12);
  Log(v3, 8, 1937206065, v6, v12);
  if ( (v6 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v6) )
  {
    LOBYTE(v10) = 0;
    UsbhException(v3, 0, 123, 0, 0, v6, v8, usbfile_hub_c, 3746, v10);
  }
  Log(v3, 8, 1937206066, v6, 0LL);
  return v6;
}
