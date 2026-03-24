/*
 * XREFs of PipServiceInstanceToDeviceInstance @ 0x1408276B0
 * Callers:
 *     PnpDriverLoadingFailed @ 0x1407630B0 (PnpDriverLoadingFailed.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83D0 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1406804D4 (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x1406F5B74 (PnpRegSzToString.c)
 *     PipOpenServiceEnumKeys @ 0x140709534 (PipOpenServiceEnumKeys.c)
 *     PnpConcatenateUnicodeStrings @ 0x14070F83C (PnpConcatenateUnicodeStrings.c)
 */

NTSTATUS __fastcall PipServiceInstanceToDeviceInstance(
        void *a1,
        UNICODE_STRING *a2,
        unsigned int a3,
        UNICODE_STRING *a4)
{
  NTSTATUS result; // eax
  NTSTATUS RegistryValue; // ebx
  _WORD *v8; // rdi
  HANDLE KeyHandle; // [rsp+30h] [rbp-59h] BYREF
  PVOID P; // [rsp+38h] [rbp-51h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  wchar_t pszDest[20]; // [rsp+80h] [rbp-9h] BYREF

  if ( a1 )
  {
    ObjectAttributes.RootDirectory = a1;
    SourceString.Buffer = L"Enum";
    *(_DWORD *)&SourceString.Length = 655368;
    ObjectAttributes.ObjectName = &SourceString;
    KeyHandle = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  else
  {
    result = PipOpenServiceEnumKeys(a2, 0x20019u, 0LL, &KeyHandle, 0);
  }
  if ( result >= 0 )
  {
    RtlStringCbPrintfW(pszDest, 0x28uLL, L"%u", a3);
    RegistryValue = IopGetRegistryValue(KeyHandle, pszDest, 100, &P);
    ZwClose(KeyHandle);
    if ( RegistryValue >= 0 )
    {
      v8 = P;
      if ( *((_DWORD *)P + 1) == 1 )
      {
        PnpRegSzToString((char *)P + *((unsigned int *)P + 2), *((_DWORD *)P + 3), (int *)&P);
        SourceString.Length = (unsigned __int16)P;
        SourceString.MaximumLength = v8[6];
        SourceString.Buffer = (_WORD *)((char *)v8 + *((unsigned int *)v8 + 2));
        if ( !(_WORD)P )
          RegistryValue = -1073741766;
      }
      else
      {
        RegistryValue = -1073741215;
      }
      if ( RegistryValue >= 0 )
      {
        if ( a4 )
          RegistryValue = PnpConcatenateUnicodeStrings(a4, &SourceString);
      }
      ExFreePoolWithTag(v8, 0);
    }
    return RegistryValue;
  }
  return result;
}
