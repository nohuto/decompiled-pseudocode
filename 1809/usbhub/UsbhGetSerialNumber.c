/*
 * XREFs of UsbhGetSerialNumber @ 0x1C00207C4
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     UsbhValidateSerialNumberString @ 0x1C001CB48 (UsbhValidateSerialNumberString.c)
 *     UsbhGetStringFromDevice @ 0x1C001D19C (UsbhGetStringFromDevice.c)
 *     UsbhValidateStringDescriptor @ 0x1C001D29C (UsbhValidateStringDescriptor.c)
 *     UsbhFreeID @ 0x1C0020F94 (UsbhFreeID.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhGetSerialNumber(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // r15
  unsigned int v7; // ebx
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v10; // r14
  int v11; // edi
  __int64 v12; // rcx
  int v13; // r12d
  unsigned int v14; // eax
  _WORD *v15; // rsi
  unsigned __int8 *v16; // rdi
  __int64 i; // rcx
  int v18; // edi
  int v19; // r8d
  unsigned __int8 v20; // [rsp+30h] [rbp-30h]
  int v21; // [rsp+30h] [rbp-30h]
  int v22; // [rsp+40h] [rbp-20h]
  int v23; // [rsp+48h] [rbp-18h]
  unsigned __int16 v24[2]; // [rsp+50h] [rbp-10h] BYREF
  int v25; // [rsp+54h] [rbp-Ch] BYREF
  int StringFromDevice; // [rsp+58h] [rbp-8h]
  char v29; // [rsp+B8h] [rbp+58h] BYREF

  v5 = PdoExt(a2);
  v6 = v5;
  if ( (v5[358] & 0x800) != 0 )
    return 0LL;
  v7 = 0;
  if ( !*((_BYTE *)v5 + 1416) )
    return 0LL;
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x42554855u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0xFFuLL);
  v29 = 0;
  if ( v10 )
  {
    v20 = *((_BYTE *)v6 + 1416);
    v24[0] = 255;
    StringFromDevice = UsbhGetStringFromDevice(a1, a2, (__int64)&v25, (__int64)v10, v24, 0x409u, v20);
    v11 = StringFromDevice;
    v12 = StringFromDevice & 0xC0000000;
    if ( (_DWORD)v12 == -1073741824 )
    {
      LOBYTE(v23) = 0;
      UsbhException(
        a1,
        *((unsigned __int16 *)v6 + 714),
        89,
        (int)v10,
        v24[0],
        StringFromDevice,
        v25,
        usbfile_idstring_c,
        1337,
        v23);
    }
    else
    {
      v13 = v24[0];
      if ( UsbhValidateStringDescriptor(v12, v10, v24[0], &v25) )
      {
        v14 = (*v10 >> 1) - 1;
        if ( *v10 >> 1 != 1 )
        {
          v15 = v10 + 2;
          v16 = v10;
          for ( i = v14; i; --i )
          {
            *(_WORD *)v16 = *v15++;
            v16 += 2;
          }
          v18 = StringFromDevice;
          *(_WORD *)&v10[2 * v14] = 0;
          *(_DWORD *)(a3 + 4) = v13;
          *(_QWORD *)(a3 + 8) = v10;
          if ( !UsbhValidateSerialNumberString(a1, a2, a3, &v25, &v29) )
          {
            LOBYTE(v23) = 0;
            UsbhException(
              a1,
              *((unsigned __int16 *)v6 + 714),
              37,
              (int)v10,
              v13,
              v18,
              v25,
              usbfile_idstring_c,
              1402,
              v23);
            UsbhFreeID(a3);
            if ( v29 )
            {
              v6[705] = 1073807369;
              return (unsigned int)-1073741811;
            }
          }
          return v7;
        }
        LOBYTE(v23) = 0;
        v22 = 1423;
        v19 = 59;
        v21 = v25;
      }
      else
      {
        LOBYTE(v23) = 0;
        v19 = 38;
        v22 = 1350;
        v21 = v25;
      }
      UsbhException(a1, *((unsigned __int16 *)v6 + 714), v19, (int)v10, v13, v11, v21, usbfile_idstring_c, v22, v23);
    }
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
