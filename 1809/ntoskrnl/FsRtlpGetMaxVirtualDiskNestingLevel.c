/*
 * XREFs of FsRtlpGetMaxVirtualDiskNestingLevel @ 0x1401924D4
 * Callers:
 *     FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x14016CED0 (FsRtlQueryMaximumVirtualDiskNestingLevel.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 */

__int64 FsRtlpGetMaxVirtualDiskNestingLevel()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  UNICODE_STRING *p_DestinationString; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING v6; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+A0h] [rbp+37h] BYREF
  unsigned int v11; // [rsp+ACh] [rbp+43h]

  KeyHandle = 0LL;
  v0 = 2;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystem\\GroupPolicyKeys");
  RtlInitUnicodeString(&v6, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FsDepends\\Parameters");
  v1 = 0;
  do
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ++v1;
    ObjectAttributes.Attributes = 576;
    p_DestinationString = &v6;
    if ( v1 != 1 )
      p_DestinationString = &DestinationString;
    ObjectAttributes.ObjectName = p_DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"VirtualDiskMaxTreeDepth");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
        && v11 <= 2 )
      {
        v0 = v11;
      }
      ZwClose(KeyHandle);
    }
  }
  while ( v1 < 2 );
  return v0;
}
