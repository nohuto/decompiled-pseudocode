/*
 * XREFs of PiDevCfgConfigureSoftwareDevices @ 0x1407156B8
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x1407153A8 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401C0710 (ZwEnumerateKey.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopCreateRegistryKeyEx @ 0x1406E8650 (IopCreateRegistryKeyEx.c)
 *     _RegRtlDeleteTreeInternal @ 0x14073A40C (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlCopyTreeInternal @ 0x14093E8FC (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall PiDevCfgConfigureSoftwareDevices(void *a1, void *a2)
{
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  int v6; // eax
  HANDLE v7; // rsi
  unsigned int *PoolWithTag; // rdi
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  UNICODE_STRING v14; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+C8h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+58h] BYREF

  ObjectAttributes.RootDirectory = a2;
  *(_QWORD *)&v14.Length = 1048590LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v14;
  v14.Buffer = L"Devices";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v4 = v3;
  if ( v3 == -1073741772 )
  {
    v4 = 0;
  }
  else if ( v3 >= 0 )
  {
    *(_DWORD *)&v14.Length = 1048590;
    v14.Buffer = L"Devices";
    v6 = IopCreateRegistryKeyEx(&Handle, a1, &v14, 0xF003Fu, 0, 0LL);
    v7 = Handle;
    v4 = v6;
    if ( v6 >= 0 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x220uLL, 0x63647050u);
      if ( PoolWithTag )
      {
        v9 = 0;
        v4 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, PoolWithTag, 0x220u, &ResultLength);
        if ( v4 < 0 )
        {
LABEL_21:
          if ( v4 == -2147483622 )
          {
            v4 = 0;
          }
          else if ( v4 == -2147483643 )
          {
            v4 = -1073741773;
          }
        }
        else
        {
          while ( 1 )
          {
            *((_WORD *)PoolWithTag + ((unsigned __int64)PoolWithTag[3] >> 1) + 8) = 0;
            if ( *(_QWORD *)&PiPnpRtlCtx && (v10 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
              v11 = *(_QWORD *)(v10 + 8);
            else
              v11 = 0LL;
            RegRtlDeleteTreeInternal(v7, PoolWithTag + 4, v11, 0LL);
            if ( *(_QWORD *)&PiPnpRtlCtx && (v12 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
              v13 = *(_QWORD *)(v12 + 8);
            else
              v13 = 0LL;
            v4 = RegRtlCopyTreeInternal(
                   (_DWORD)KeyHandle,
                   (int)PoolWithTag + 16,
                   (_DWORD)v7,
                   (int)PoolWithTag + 16,
                   0,
                   v13,
                   0);
            if ( v4 < 0 )
              break;
            v4 = ZwEnumerateKey(KeyHandle, ++v9, KeyBasicInformation, PoolWithTag, 0x220u, &ResultLength);
            if ( v4 < 0 )
              goto LABEL_21;
          }
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        v4 = -1073741670;
      }
    }
    if ( v7 )
      ZwClose(v7);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
