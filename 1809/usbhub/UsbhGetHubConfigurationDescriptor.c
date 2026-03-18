/*
 * XREFs of UsbhGetHubConfigurationDescriptor @ 0x1C001DE58
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C001D5E4 (UsbhConfigureUsbHub.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhGetDescriptor @ 0x1C001E07C (UsbhGetDescriptor.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubConfigurationDescriptor(__int64 a1, unsigned __int16 **a2)
{
  int v4; // ebp
  unsigned __int16 v5; // ax
  unsigned int v6; // ebx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v8; // rdi
  __int64 Descriptor; // rbx
  __int64 v10; // r9
  unsigned __int16 v11; // r10
  __int64 v12; // r9
  unsigned __int16 v14; // bx
  int v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+48h] [rbp-20h]
  unsigned __int16 v18; // [rsp+78h] [rbp+10h]

  v4 = -1;
  FdoExt(a1);
  *a2 = 0LL;
  v5 = 255;
  v18 = 255;
  while ( 1 )
  {
    v6 = v5;
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v5, 0x42554855u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, v6);
    Descriptor = (int)UsbhGetDescriptor(a1, v15, 0);
    Log(a1, 8, 1734894385, v18, Descriptor);
    if ( (Descriptor & 0xC0000000) == 0xC0000000 )
      goto LABEL_13;
    if ( v11 < 9u )
    {
      LOBYTE(v17) = 0;
      v16 = 3945;
      goto LABEL_12;
    }
    Log(a1, 8, 1734894386, v10, v8[1]);
    if ( v8[1] <= v11 )
    {
      Log(a1, 8, 1734894387, (__int64)v8, Descriptor);
      *a2 = v8;
      return (unsigned int)Descriptor;
    }
    if ( !v4 )
    {
      LOBYTE(v17) = 0;
      v16 = 3963;
LABEL_12:
      LODWORD(Descriptor) = -1073741823;
      UsbhException(a1, 0, 13, (int)v8, v11, -1073741823, -1, usbfile_hub_c, v16, v17);
LABEL_13:
      ExFreePoolWithTag(v8, 0);
      return (unsigned int)Descriptor;
    }
    ++v4;
    Log(a1, 8, 1734894418, v12, Descriptor);
    v14 = v8[1];
    v18 = v14;
    ExFreePoolWithTag(v8, 0);
    v5 = v14;
  }
}
