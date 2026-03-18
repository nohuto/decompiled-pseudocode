/*
 * XREFs of UsbhBusIfAddDevice @ 0x1C0025C90
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhGetBusInterface @ 0x1C0025F70 (UsbhGetBusInterface.c)
 *     Usbh_HubIsRoot @ 0x1C002736C (Usbh_HubIsRoot.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhBusIfAddDevice(struct _DEVICE_OBJECT *a1)
{
  _DWORD *v2; // rdi
  unsigned __int16 v3; // r15
  unsigned __int16 v4; // r14
  __int64 BusInterface; // rsi
  unsigned __int16 v6; // r15
  unsigned __int16 v7; // r14
  BOOL v8; // ecx
  unsigned int v9; // eax
  int v10; // r10d
  int v11; // r10d
  int v13; // [rsp+48h] [rbp-30h]
  char v14; // [rsp+90h] [rbp+18h] BYREF

  v2 = FdoExt((__int64)a1);
  v3 = 328;
  v4 = 9;
  while ( 1 )
  {
    Log((__int64)a1, 8, 1198090289, v3, v4);
    LODWORD(BusInterface) = UsbhGetBusInterface(a1, v2 + 1056, v4);
    Log((__int64)a1, 8, 1198090290, (int)BusInterface, v4);
    if ( (int)BusInterface >= 0 )
      break;
    LOBYTE(v13) = 0;
    UsbhException((int)a1, 0, 26, 0, 0, BusInterface, 0, usbfile_busif_c, 243, v13);
    if ( v4 == 9 )
    {
      v3 = 312;
      v4 = 8;
      LODWORD(BusInterface) = 0;
    }
    if ( (int)BusInterface < 0 )
      goto LABEL_4;
  }
  v2[640] |= 4u;
LABEL_4:
  v6 = 96;
  v7 = 3;
  if ( (int)BusInterface >= 0 )
  {
    while ( 1 )
    {
      Log((__int64)a1, 8, 1198093617, v6, v7);
      BusInterface = (int)UsbhGetBusInterface(a1, v2 + 1138, v7);
      Log((__int64)a1, 8, 1198093618, BusInterface, v7);
      if ( (int)BusInterface >= 0 )
        break;
      LOBYTE(v13) = 0;
      UsbhException((int)a1, 0, 27, 0, 0, BusInterface, 0, usbfile_busif_c, 281, v13);
      if ( v7 == 3 )
      {
        v6 = 80;
        LODWORD(BusInterface) = 0;
        v7 = 2;
      }
      if ( (int)BusInterface < 0 )
        goto LABEL_7;
    }
    v2[640] |= 8u;
LABEL_7:
    if ( (int)BusInterface >= 0 )
    {
      BusInterface = (int)Usbh_HubIsRoot(a1, &v14);
      v8 = v14 != 0;
      v9 = v2[640] & 0xFFFFFFFE;
      *((_WORD *)v2 + 2400) = v7;
      v2[640] = v8 | v9;
      if ( (int)BusInterface >= 0 )
      {
        Log((__int64)a1, 8, 1198091569, 40LL, 0LL);
        UsbhGetBusInterface(a1, v2 + 1162, 0);
        Log((__int64)a1, 8, 1198091570, BusInterface, 0LL);
        if ( v10 >= 0 )
          v2[640] |= 0x20000000u;
        Log((__int64)a1, 8, 1198093105, 48LL, 0LL);
        UsbhGetBusInterface(a1, v2 + 1172, 0);
        Log((__int64)a1, 8, 1198093106, BusInterface, 0LL);
        if ( v11 >= 0 )
          v2[640] |= 0x800000u;
        Log((__int64)a1, 8, 1197895729, 64LL, 0LL);
        LODWORD(BusInterface) = UsbhGetBusInterface(a1, v2 + 1184, 0);
        Log((__int64)a1, 8, 1197895730, (int)BusInterface, 0LL);
        if ( (int)BusInterface >= 0 )
          v2[640] |= 0x80000000;
      }
    }
  }
  Log((__int64)a1, 8, 1651730790, 0LL, (int)BusInterface);
  return (unsigned int)BusInterface;
}
