/*
 * XREFs of EtwpFindMatchingPmcRegistryGroup @ 0x1408BC514
 * Callers:
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BBA60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408BD034 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x1408BC7F8 (EtwpGetPmcCpuHierarchyRegistry.c)
 */

__int64 __fastcall EtwpFindMatchingPmcRegistryGroup(__int64 a1, int a2, __int64 a3, unsigned int a4, wchar_t *pszDest)
{
  size_t v6; // r12
  char v7; // di
  int v9; // esi
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  _BYTE KeyInformation[12]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v20; // [rsp+B4h] [rbp-54h]
  _WORD v21[264]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v22; // [rsp+2C8h] [rbp+1C0h] BYREF
  unsigned int v23; // [rsp+2D0h] [rbp+1C8h]

  v6 = a4;
  v7 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v9 = -1;
  while ( 1 )
  {
    v10 = ZwEnumerateKey(KeyHandle, ++v9, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength);
    if ( v10 < 0 || v20 >= 0xFF )
    {
      if ( v10 == -1073741789 || v10 == -2147483643 )
        v10 = 0;
      goto LABEL_16;
    }
    v21[(unsigned __int64)v20 >> 1] = 0;
    RtlStringCbPrintfW(
      pszDest,
      v6,
      L"%ws\\%ws",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource",
      v21);
    RtlInitUnicodeString(&DestinationString, pszDest);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      EtwpGetPmcCpuHierarchyRegistry(Handle, &v13, &v22);
      ZwClose(Handle);
      if ( (_DWORD)v13 == a2 )
      {
        v11 = v22 - *(_QWORD *)a3;
        if ( v22 == *(_QWORD *)a3 )
          v11 = v23 - (unsigned __int64)*(unsigned int *)(a3 + 8);
        if ( !v11 )
          break;
      }
    }
LABEL_16:
    if ( v10 < 0 )
      goto LABEL_10;
  }
  v7 = 1;
LABEL_10:
  ZwClose(KeyHandle);
  result = 0LL;
  if ( !v7 )
  {
    memset(pszDest, 0, v6);
    return 3221225473LL;
  }
  return result;
}
