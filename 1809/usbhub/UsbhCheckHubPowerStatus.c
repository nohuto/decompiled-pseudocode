/*
 * XREFs of UsbhCheckHubPowerStatus @ 0x1C0007F68
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0004490 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C00081C0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhGetHubClassDescriptor @ 0x1C001DF7C (UsbhGetHubClassDescriptor.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhCheckHubPowerStatus(__int64 a1)
{
  __int64 v2; // rbp
  PVOID PoolWithTag; // rax
  void *v4; // rsi
  int v5; // eax
  __int64 v6; // rbx
  int v7; // r8d
  int v8; // ecx
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  __int64 v14; // [rsp+20h] [rbp-48h]
  int v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = 0;
  v2 = FdoExt(a1);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x47uLL, 0x42554855u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x47uLL);
    v5 = UsbhFdoCheckUpstreamConnectionState(a1, &v16);
    v6 = v5;
    if ( v5 >= 0 && (*(_DWORD *)(v2 + 4216) & 0xFFFFFFFD) == 0 )
    {
      v14 = v5;
      v7 = 810571602;
      v8 = a1;
LABEL_5:
      Log(v8, 16, v7, 0, v14);
      goto LABEL_6;
    }
    if ( Usb_Disconnected(v5) )
    {
      v14 = v6;
      v8 = a1;
      if ( (v16 & 2) == 0 )
      {
        v7 = 1347900018;
        goto LABEL_5;
      }
      Log(a1, 16, 1347892082, 0, v6);
      LOBYTE(v15) = 0;
      UsbhException(a1, 0, 112, v10, 0, v6, 0, usbfile_fdopwr_c, 3869, v15);
    }
    else if ( (v6 & 0xC0000000) == 0xC0000000 )
    {
      Log(a1, 16, 1347899937, 0, v6);
      LOBYTE(v15) = 0;
      UsbhException(a1, 0, v11 + 110, v11, 0, v6, 0, usbfile_fdopwr_c, 3889, v15);
    }
    else if ( (int)v6 < 0 || (v16 & 1) != 0 )
    {
      LODWORD(v6) = UsbhGetHubClassDescriptor(a1, v4);
      Log(a1, 16, 1666209618, 0, (int)v6);
      if ( (v6 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v6) )
      {
        LOBYTE(v15) = 0;
        UsbhException(a1, 0, v13 + 109, v13, 0, v6, 0, usbfile_fdopwr_c, 3923, v15);
      }
    }
    else
    {
      LODWORD(v6) = -1073741823;
      Log(a1, 16, 1699764050, 0, -1073741823LL);
      LOBYTE(v15) = 0;
      UsbhException(a1, 0, v12 + 111, v12, 0, -1073741823, 0, usbfile_fdopwr_c, 3905, v15);
    }
  }
  else
  {
    LODWORD(v6) = -1073741670;
  }
LABEL_6:
  Log(a1, 16, 1348825714, 0, (int)v6);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
