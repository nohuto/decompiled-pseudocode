/*
 * XREFs of UsbhGetHubConfigurationDescriptor @ 0x1C001EA88
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C001E1BC (UsbhConfigureUsbHub.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C00182D0 (UsbhSyncSendCommand.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubConfigurationDescriptor(__int64 a1, unsigned __int16 **a2)
{
  int v4; // r15d
  __int16 v5; // bx
  unsigned __int16 v6; // r14
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v8; // rdi
  unsigned int v9; // eax
  unsigned __int16 v10; // r14
  __int64 v11; // rbx
  unsigned int v12; // r13d
  __int64 v13; // r9
  int v14; // r11d
  __int64 v15; // r9
  int v16; // r11d
  int v18; // [rsp+20h] [rbp-30h]
  int v19; // [rsp+40h] [rbp-10h]
  int v20; // [rsp+48h] [rbp-8h]
  __int16 v21; // [rsp+98h] [rbp+48h] BYREF
  int v22; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h] BYREF

  v4 = -1;
  FdoExt(a1);
  v5 = 255;
  *a2 = 0LL;
  v6 = 255;
  v21 = 255;
  while ( 1 )
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x42554855u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, v6);
    v23 = 0LL;
    v22 = 0;
    FdoExt(a1);
    LOWORD(v23) = 1664;
    *(_DWORD *)((char *)&v23 + 2) = 512;
    HIWORD(v23) = v5;
    v9 = UsbhSyncSendCommand(a1, (__int64)&v23, (__int64)v8, &v21, v18, &v22);
    v10 = v21;
    v11 = (int)v9;
    v12 = v9 >> 30;
    if ( v9 >> 30 == 3 && !Usb_Disconnected(v9) )
    {
      LOBYTE(v20) = 0;
      UsbhException(a1, 0, 16, (int)v8, v10, v11, v22, usbfile_hub_c, 3814, v20);
    }
    Log(a1, 8, 1734894385, v10, v11);
    if ( v12 == 3 )
      goto LABEL_16;
    if ( v10 < 9u )
    {
      LOBYTE(v20) = 0;
      v19 = 3945;
      goto LABEL_15;
    }
    Log(a1, v14, 1734894386, v13, v8[1]);
    if ( v8[1] <= v10 )
    {
      Log(a1, v16, 1734894387, (__int64)v8, v11);
      *a2 = v8;
      return (unsigned int)v11;
    }
    if ( !v4 )
    {
      LOBYTE(v20) = 0;
      v19 = 3963;
LABEL_15:
      LODWORD(v11) = -1073741823;
      UsbhException(a1, 0, 13, (int)v8, v10, -1073741823, -1, usbfile_hub_c, v19, v20);
LABEL_16:
      ExFreePoolWithTag(v8, 0);
      return (unsigned int)v11;
    }
    ++v4;
    Log(a1, v16, 1734894418, v15, v11);
    v6 = v8[1];
    v5 = v6;
    v21 = v6;
    ExFreePoolWithTag(v8, 0);
  }
}
