/*
 * XREFs of EtwpFindMatchingPmcRegistryGroup @ 0x1408F7758
 * Callers:
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408F6C60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408F8378 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x1401C1290 (ZwEnumerateKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x1408F7AD0 (EtwpGetPmcCpuHierarchyRegistry.c)
 */

__int64 __fastcall EtwpFindMatchingPmcRegistryGroup(__int64 a1, int a2, __int64 a3, unsigned int a4, wchar_t *pszDest)
{
  size_t v6; // r12
  char v8; // di
  int v9; // esi
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD KeyInformation[136]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+2C8h] [rbp+1C0h] BYREF
  unsigned int v21; // [rsp+2D0h] [rbp+1C8h]

  v6 = a4;
  memset(KeyInformation, 0, 0x218uLL);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v8 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v9 = -1;
  while ( 1 )
  {
    v10 = ZwEnumerateKey(KeyHandle, ++v9, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength);
    if ( v10 < 0 || KeyInformation[3] >= 0xFFu )
    {
      if ( v10 == -1073741789 || v10 == -2147483643 )
        v10 = 0;
      goto LABEL_16;
    }
    *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
    RtlStringCbPrintfW(
      pszDest,
      v6,
      L"%ws\\%ws",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource",
      &KeyInformation[4]);
    RtlInitUnicodeString(&DestinationString, pszDest);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      EtwpGetPmcCpuHierarchyRegistry(Handle, &v13, &v20);
      ZwClose(Handle);
      if ( (_DWORD)v13 == a2 )
      {
        v11 = v20 - *(_QWORD *)a3;
        if ( v20 == *(_QWORD *)a3 )
          v11 = v21 - (unsigned __int64)*(unsigned int *)(a3 + 8);
        if ( !v11 )
          break;
      }
    }
LABEL_16:
    if ( v10 < 0 )
      goto LABEL_10;
  }
  v8 = 1;
LABEL_10:
  ZwClose(KeyHandle);
  result = 0LL;
  if ( !v8 )
  {
    memset(pszDest, 0, v6);
    return 3221225473LL;
  }
  return result;
}
