/*
 * XREFs of UsbhGetDeviceInformation @ 0x1C00262B8
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0048CD0 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001E440 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhGetUsbDeviceFlags @ 0x1C0025DB8 (UsbhGetUsbDeviceFlags.c)
 *     UsbhValidateConfigurationDescriptor @ 0x1C00264CC (UsbhValidateConfigurationDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhGetDeviceInformation(__int64 a1, __int64 a2)
{
  int v3; // r12d
  _DWORD *v4; // rbx
  unsigned __int16 v5; // r15
  unsigned int v6; // eax
  PVOID PoolWithTag; // rax
  __int64 v8; // rdi
  __int64 v9; // r14
  _DWORD *v10; // rax
  __int64 (__fastcall *v11)(_QWORD, __int64, _DWORD *, int *); // r10
  int v12; // r14d
  int UsbDeviceFlags; // r12d
  int v14; // eax
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // r14
  char v18; // cl
  char v19; // al
  unsigned __int8 *v20; // rcx
  _BYTE *v21; // r8
  char v22; // al
  unsigned __int8 *v23; // rax
  int v24; // [rsp+20h] [rbp-40h]
  int v25; // [rsp+20h] [rbp-40h]
  int v26; // [rsp+48h] [rbp-18h]
  int v27[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int Size; // [rsp+B0h] [rbp+50h]
  int v30; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0;
  v4 = PdoExt(a2);
  v30 = 18;
  v5 = 255;
  v6 = 255;
  Size = 255;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x42554855u);
    v8 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, Size);
    v9 = *((_QWORD *)v4 + 145);
    v10 = FdoExt(a1);
    v11 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, int *))*((_QWORD *)v10 + 534);
    if ( !v11 )
      break;
    v24 = v8;
    v12 = v11(*((_QWORD *)v10 + 529), v9, v4 + 350, &v30);
    if ( v12 < 0 || Size >= *(unsigned __int16 *)(v8 + 2) || v3 )
      goto LABEL_6;
    Size = *(unsigned __int16 *)(v8 + 2);
    v5 = *(_WORD *)(v8 + 2);
    ExFreePoolWithTag((PVOID)v8, 0);
    v6 = Size;
    v3 = 1;
  }
  v12 = -1073741822;
LABEL_6:
  if ( (v12 & 0xC0000000) == 0xC0000000 )
  {
    v4[705] = 1073807367;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_GET_DESCRIPTORS_FAILURE);
    LOBYTE(v26) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 714), 36, v8, Size, v12, -1, usbfile_bus_c, 3773, v26);
  }
  else
  {
    UsbDeviceFlags = UsbhGetUsbDeviceFlags(a1, a2);
    if ( (UsbDeviceFlags & 0xC0000000) == 0xC0000000 )
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_REGISTRY_FAILURE);
      return (unsigned int)UsbDeviceFlags;
    }
    if ( (unsigned __int8)UsbhValidateConfigurationDescriptor(v8, Size, v27, dword_1C006F630 != 0) )
    {
      if ( UsbDeviceFlags >= 0 && v5 < *(_WORD *)(v8 + 2) )
        *(_WORD *)(v8 + 2) = v5;
      if ( *((_BYTE *)v4 + 1417) > 1u )
      {
        v4[701] |= 0x80u;
        if ( *((_BYTE *)v4 + 1417) > 1u && *(_BYTE *)(v8 + 4) > 1u )
        {
          v19 = *((_BYTE *)v4 + 1404);
          if ( !v19 || v19 == -17 && *((_BYTE *)v4 + 1405) == 2 && *((_BYTE *)v4 + 1406) == 1 )
          {
            v20 = (unsigned __int8 *)(v8 + 9);
            while ( (unsigned __int64)v20 < v8 + (unsigned __int64)*(unsigned __int16 *)(v8 + 2) )
            {
              v21 = v20;
              v20 += *v20;
              v22 = v21[1];
              if ( v22 == 11 && v21[4] == 1 || v22 == 4 && v21[5] == 1 )
              {
                v4[355] |= 0x20u;
                break;
              }
            }
          }
        }
      }
      v14 = v4[355];
      if ( (v14 & 0x20) == 0
        && *((_BYTE *)v4 + 1417) == 1
        && *(_BYTE *)(v8 + 4) > 1u
        && ((v18 = *((_BYTE *)v4 + 1404)) == 0 || v18 == -17 && *((_BYTE *)v4 + 1405) == 2 && *((_BYTE *)v4 + 1406) == 1) )
      {
        v4[355] = v14 | 0x20;
      }
      else
      {
        v15 = UsbhParseConfigurationDescriptorEx(a1, v8, (unsigned __int8 *)v8, -1, v24, -1, -1, -1);
        v16 = v15;
        if ( v15 )
        {
          if ( v15[5] == 9 )
          {
            v4[355] |= 4u;
          }
          else if ( *((_WORD *)v4 + 701) > 0x200u && (v4[358] & 0x10000) == 0 )
          {
            v23 = UsbhParseConfigurationDescriptorEx(a1, v8, v15, v15[2], v25, 8, 6, 98);
            if ( v23 )
            {
              if ( v4[292] == 2 )
              {
                v4[355] |= 0x200000u;
                v16 = v23;
              }
            }
          }
          *(_QWORD *)((char *)v4 + 2433) = *(_QWORD *)v16;
          *((_BYTE *)v4 + 2441) = v16[8];
        }
      }
      if ( (*(_BYTE *)(v8 + 7) & 0x20) != 0 )
        v4[355] |= 0x100u;
      *((_QWORD *)v4 + 299) = v8;
      return (unsigned int)UsbDeviceFlags;
    }
    v12 = -1073741811;
    v4[705] = 1073807364;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CONFIG_DESC_VALIDATION_FAILURE);
    LOBYTE(v26) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 714), 36, v8, Size, -1073741811, v27[0], usbfile_bus_c, 3807, v26);
  }
  ExFreePoolWithTag((PVOID)v8, 0);
  return (unsigned int)v12;
}
