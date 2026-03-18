/*
 * XREFs of PipCheckForDenyExecute @ 0x140735748
 * Callers:
 *     IopRegisterDeviceInterface @ 0x1407352C4 (IopRegisterDeviceInterface.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpConcatPWSTR @ 0x140668EC4 (PnpConcatPWSTR.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 */

bool __fastcall PipCheckForDenyExecute(wchar_t *Str2)
{
  WCHAR *v1; // rbx
  bool v2; // di
  int v3; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v1 = 0LL;
  SourceString = 0LL;
  v2 = 0;
  if ( wcsicmp(L"{53f5630d-b6bf-11d0-94f2-00a0c91efb8b}", Str2) )
  {
    v3 = PnpConcatPWSTR(0x200uLL, 0x47706E50u, (PVOID *)&SourceString, 3uLL);
    v1 = (WCHAR *)SourceString;
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      *(&ObjectAttributes.Length + 1) = 0;
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      KeyHandle = 0LL;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
        && IopGetRegistryValue(KeyHandle, L"Deny_Execute", 0, &SourceString) >= 0
        && SourceString
        && *((_DWORD *)SourceString + 1) == 4
        && *((_DWORD *)SourceString + 3) == 4 )
      {
        v2 = *(_DWORD *)((char *)SourceString + *((unsigned int *)SourceString + 2)) != 0;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x47706E50u);
  return v2;
}
