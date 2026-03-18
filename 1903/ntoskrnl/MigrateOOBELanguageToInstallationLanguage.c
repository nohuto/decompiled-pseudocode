/*
 * XREFs of MigrateOOBELanguageToInstallationLanguage @ 0x14033ED48
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1406D0820 (NtGetMUIRegistryInfo.c)
 *     NtFlushInstallUILanguage @ 0x140786870 (NtFlushInstallUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 MigrateOOBELanguageToInstallationLanguage()
{
  NTSTATUS v0; // ebx
  unsigned __int16 v1; // dx
  __int64 i; // r8
  __int16 v3; // ax
  unsigned __int16 v4; // cx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+98h] [rbp-70h] BYREF
  __int16 v12; // [rsp+A0h] [rbp-68h]
  ULONG KeyValueInformation[132]; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyHandle = 0LL;
  v11 = 0LL;
  v12 = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  ResultLength[0] = 0;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\NLS\\Language");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"InstallLanguage");
    v1 = PsInstallUILanguageId;
    for ( i = 3LL; i >= 0; --i )
    {
      v3 = 55;
      v4 = v1 & 0xF;
      if ( v4 <= 9u )
        v3 = 48;
      v1 >>= 4;
      *((_WORD *)&v11 + i) = v4 + v3;
    }
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x210u,
           ResultLength) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"PreviousInstallLanguage");
      ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, &KeyValueInformation[3], KeyValueInformation[2]);
    }
    v0 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, &v11, 0xAu);
    if ( v0 >= 0 )
      v0 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v0;
}
