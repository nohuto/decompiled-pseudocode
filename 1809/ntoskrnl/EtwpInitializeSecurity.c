/*
 * XREFs of EtwpInitializeSecurity @ 0x1409D108C
 * Callers:
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1405C7158 (EtwpGetGuidSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x140613450 (RtlGetPersistedStateLocation.c)
 */

__int64 EtwpInitializeSecurity()
{
  unsigned int PersistedStateLocation; // ebx
  ULONG BufferLengthOut; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[256]; // [rsp+A0h] [rbp-60h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\Security");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&EtwpSecurityKeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    EtwpSecurityKeyHandle = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"ETWSecurityPath",
                             0LL,
                             0LL,
                             LocationTypeRegistry,
                             SourceString,
                             0x1FEu,
                             &BufferLengthOut);
  if ( PersistedStateLocation
    || (RtlInitUnicodeString(&DestinationString, SourceString),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        (PersistedStateLocation = ZwOpenKey(&EtwpMutableSecurityKeyHandle, 0x20019u, &ObjectAttributes)) != 0) )
  {
    if ( !EtwpSecurityKeyHandle )
      return PersistedStateLocation;
    EtwpMutableSecurityKeyHandle = 0LL;
    PersistedStateLocation = 0;
  }
  RtlInitUnicodeString(&ValueName, L"0811c1af-7a07-4a06-82ed-869455cdf713");
  EtwpGetGuidSecurityDescriptor(&ValueName, &EtwpDefaultTraceSecurityDescriptor);
  if ( !EtwpDefaultTraceSecurityDescriptor )
    EtwpDefaultTraceSecurityDescriptor = WmipDefaultAccessSd;
  return PersistedStateLocation;
}
