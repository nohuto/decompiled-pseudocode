/*
 * XREFs of UsbhGetMSOS_Descriptor @ 0x1C0021E80
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     UsbhGetStringFromDevice @ 0x1C001DB1C (UsbhGetStringFromDevice.c)
 *     UsbhRegCreateUsbflagsKey @ 0x1C0025604 (UsbhRegCreateUsbflagsKey.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhGetMSOS_Descriptor(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  _BYTE *PoolWithTag; // rax
  int v6; // r14d
  _BYTE *v7; // rsi
  unsigned int v8; // ecx
  int v9; // ebx
  int StringFromDevice; // eax
  int v12; // r12d
  const WCHAR *v13; // rdx
  char v14; // al
  unsigned int v15; // ecx
  char v16; // dl
  bool v17; // zf
  const WCHAR *v18; // rdx
  int v19; // [rsp+48h] [rbp-18h]
  int ValueData[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v21; // [rsp+A0h] [rbp+40h] BYREF
  int v22; // [rsp+A8h] [rbp+48h] BYREF

  v4 = PdoExt(a2);
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy == 2 )
    return 3221225659LL;
  if ( (UsbhRegCreateUsbflagsKey() & 0xC0000000) == 0xC0000000 )
  {
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 2;
    return 3221225659LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x12uLL, 0x42554855u);
  v6 = 0;
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_WORD *)PoolWithTag + 8) = 0;
    v8 = v4[358];
    if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy == 1 )
    {
      v8 = v8 & 0xFFFFF9FF | 0x200;
      v4[358] = v8;
    }
    if ( (v8 & 0x200) != 0 )
    {
      if ( (v8 & 0x400) != 0 )
      {
        v9 = 0;
      }
      else
      {
        LOWORD(v22) = 18;
        StringFromDevice = UsbhGetStringFromDevice(
                             a1,
                             a2,
                             (__int64)ValueData,
                             (__int64)PoolWithTag,
                             (unsigned __int16 *)&v22,
                             0,
                             0xEEu);
        v12 = ValueData[0];
        v9 = StringFromDevice;
        if ( ValueData[0] == -1073717248 )
        {
          v13 = (const WCHAR *)*((_QWORD *)v4 + 142);
          ValueData[0] = 1;
          RtlWriteRegistryValue(2u, v13, L"MSOSDescriptorHang", 4u, ValueData, 4u);
        }
        v4[358] &= ~0x200u;
        if ( v9 >= 0 && (_WORD)v22 == 18 && RtlCompareMemory(v7 + 2, L"MSFT100", 0xEuLL) == 14 )
        {
          v14 = v7[16];
          *((_BYTE *)v4 + 1432) = v14;
          HIBYTE(v21) = v14;
          LOBYTE(v21) = 1;
          v4[358] |= 0x400u;
        }
        else
        {
          v4[358] &= ~0x400u;
          v9 = -1073741637;
          LOBYTE(v19) = 0;
          v21 = 0;
          UsbhException(
            a1,
            *((unsigned __int16 *)v4 + 714),
            102,
            (int)v7,
            (unsigned __int16)v22,
            -1073741637,
            v12,
            usbfile_msos_c,
            193,
            v19);
        }
        if ( *((_QWORD *)v4 + 142) )
        {
          RtlWriteRegistryValue(0, *((PCWSTR *)v4 + 143), L"osvc", 3u, &v21, 2u);
          v15 = v4[358] & 0xFFFF7FFF;
          v16 = v7[17] & 2;
          if ( !v16 )
            v15 = v4[358] | 0x8000;
          v17 = v16 == 0;
          v18 = (const WCHAR *)*((_QWORD *)v4 + 143);
          LOBYTE(v6) = v17;
          v4[358] = v15;
          v22 = v6;
          RtlWriteRegistryValue(0, v18, L"SkipContainerIdQuery", 3u, &v22, 4u);
        }
      }
    }
    else
    {
      v9 = -1073741637;
    }
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
