/*
 * XREFs of PipInitDeviceOverrideCache @ 0x140A1C050
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwQueryKey @ 0x1401C0F10 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1401C1290 (ZwEnumerateKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlHashUnicodeString @ 0x140666720 (RtlHashUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140694F30 (RtlCreateUnicodeString.c)
 *     IopOpenRegistryKeyEx @ 0x14071DBA0 (IopOpenRegistryKeyEx.c)
 */

__int64 PipInitDeviceOverrideCache()
{
  NTSTATUS v0; // eax
  unsigned int Key; // ebx
  unsigned int v2; // ecx
  int *v3; // rdx
  unsigned int v4; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v6; // rdx
  ULONG i; // esi
  NTSTATUS v8; // eax
  UNICODE_STRING *v10; // rax
  UNICODE_STRING *v11; // rdi
  NTSTATUS v12; // eax
  ULONG v13; // ecx
  __int64 v14; // rcx
  UNICODE_STRING **v15; // rax
  ULONG HashValue[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING v19; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD KeyInformation[14]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v21[12]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v22; // [rsp+A4h] [rbp-64h]
  WCHAR SourceString[264]; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)&v19.Length = 8781956LL;
  KeyHandle = 0LL;
  memset(KeyInformation, 0, 0x30uLL);
  v19.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DeviceOverrides";
  v0 = IopOpenRegistryKeyEx(&KeyHandle, 0LL, &v19, 0x20019u);
  Key = v0;
  if ( v0 == -1073741772 )
    goto LABEL_17;
  if ( v0 < 0 )
    goto LABEL_18;
  Key = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, ResultLength);
  if ( (int)(Key + 0x80000000) >= 0 && Key != -2147483643 )
    goto LABEL_18;
  if ( !KeyInformation[5] )
  {
LABEL_17:
    Key = 0;
    goto LABEL_18;
  }
  v2 = 0;
  v3 = (int *)&unk_1403896E8;
  while ( KeyInformation[5] >= (unsigned int)(3 * *v3) )
  {
    ++v2;
    ++v3;
    if ( v2 >= 3 )
      goto LABEL_8;
  }
  PnpDeviceOverrideHashListSize = *v3;
LABEL_8:
  v4 = PnpDeviceOverrideHashListSize;
  if ( !PnpDeviceOverrideHashListSize )
  {
    v4 = 257;
    PnpDeviceOverrideHashListSize = 257;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v4, 0x6E697050u);
  PnpDeviceOverrideHashList = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( PnpDeviceOverrideHashListSize )
    {
      v6 = (unsigned int)PnpDeviceOverrideHashListSize;
      do
      {
        PoolWithTag[1] = PoolWithTag;
        *PoolWithTag = PoolWithTag;
        PoolWithTag += 2;
        --v6;
      }
      while ( v6 );
    }
    for ( i = 0; ; ++i )
    {
      v8 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, v21, 0x218u, ResultLength);
      Key = v8;
      if ( v8 >= 0 )
      {
        if ( v22 <= 0x200 )
        {
          SourceString[(unsigned __int64)v22 >> 1] = 0;
          v10 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6E697050u);
          v11 = v10;
          if ( !v10 )
            goto LABEL_34;
          if ( !RtlCreateUnicodeString(v10 + 1, SourceString) )
          {
            Key = -1073741670;
            ExFreePoolWithTag(v11, 0);
            goto LABEL_18;
          }
          v12 = RtlHashUnicodeString(v11 + 1, 1u, 0, HashValue);
          v13 = HashValue[0];
          if ( v12 < 0 )
            v13 = 0;
          HashValue[0] = v13;
          v14 = PnpDeviceOverrideHashList + 16LL * (v13 % PnpDeviceOverrideHashListSize);
          v15 = *(UNICODE_STRING ***)(v14 + 8);
          if ( *v15 != (UNICODE_STRING *)v14 )
            __fastfail(3u);
          *(_QWORD *)&v11->Length = v14;
          v11->Buffer = (wchar_t *)v15;
          *v15 = v11;
          *(_QWORD *)(v14 + 8) = v11;
        }
      }
      else
      {
        if ( v8 == -2147483622 )
          goto LABEL_17;
        if ( v8 != -2147483643 )
          goto LABEL_18;
      }
    }
  }
  PnpDeviceOverrideHashListSize = 0;
LABEL_34:
  Key = -1073741670;
LABEL_18:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return Key;
}
