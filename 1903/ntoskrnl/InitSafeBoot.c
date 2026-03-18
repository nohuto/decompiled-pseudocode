/*
 * XREFs of InitSafeBoot @ 0x140A38740
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FE82C (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     NtQueryValueKey @ 0x1405FD5A0 (NtQueryValueKey.c)
 *     NtSetValueKey @ 0x14062C340 (NtSetValueKey.c)
 */

int __fastcall InitSafeBoot(char a1)
{
  int result; // eax
  NTSTATUS v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-49h] BYREF
  int Data; // [rsp+58h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+Fh] BYREF
  ULONG Disposition; // [rsp+A4h] [rbp+13h] BYREF
  _BYTE KeyValueInformation[48]; // [rsp+A8h] [rbp+17h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  memset(KeyValueInformation, 0, 0x2CuLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetControlSafeBoot;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"AlternateShell");
      if ( NtQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x2Cu,
             &ResultLength) < 0 )
        a1 = 0;
    }
    RtlInitUnicodeString(&DestinationString, L"Option");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
    result = NtClose(KeyHandle);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"OptionValue");
      NtSetValueKey(Handle, &DestinationString, 0, 4u, &InitSafeBootMode, 4u);
      if ( a1 == 1 )
      {
        RtlInitUnicodeString(&DestinationString, L"UseAlternateShell");
        Data = 1;
        NtSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      }
      return NtClose(Handle);
    }
  }
  return result;
}
