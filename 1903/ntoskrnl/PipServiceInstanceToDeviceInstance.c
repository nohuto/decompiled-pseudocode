/*
 * XREFs of PipServiceInstanceToDeviceInstance @ 0x140861A70
 * Callers:
 *     PnpDriverLoadingFailed @ 0x140788FD4 (PnpDriverLoadingFailed.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x1406FCCF8 (PnpRegSzToString.c)
 *     PnpConcatenateUnicodeStrings @ 0x1407319E8 (PnpConcatenateUnicodeStrings.c)
 *     PipOpenServiceEnumKeys @ 0x140733E90 (PipOpenServiceEnumKeys.c)
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
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-51h] BYREF
  PVOID P; // [rsp+48h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  wchar_t pszDest[20]; // [rsp+80h] [rbp-9h] BYREF

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  if ( a1 )
  {
    ObjectAttributes.RootDirectory = a1;
    SourceString.Buffer = L"Enum";
    *(_DWORD *)&SourceString.Length = 655368;
    ObjectAttributes.ObjectName = &SourceString;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    KeyHandle = 0LL;
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
