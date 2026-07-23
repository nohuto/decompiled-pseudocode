/*
 * XREFs of ExpUuidLoadSequenceNumber @ 0x140760A50
 * Callers:
 *     ExpAllocateUuids @ 0x1406C7338 (ExpAllocateUuids.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x140613450 (RtlGetPersistedStateLocation.c)
 */

__int64 ExpUuidLoadSequenceNumber()
{
  NTSTATUS PersistedStateLocation; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-70h] BYREF
  int v7; // [rsp+94h] [rbp-6Ch]
  int v8; // [rsp+98h] [rbp-68h]
  int v9; // [rsp+9Ch] [rbp-64h]
  WCHAR SourceString[256]; // [rsp+B0h] [rbp-50h] BYREF

  KeyHandle = 0LL;
  memset(SourceString, 0, 0x1FEuLL);
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"KernelExecutive",
                             0LL,
                             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Executive",
                             LocationTypeRegistry,
                             SourceString,
                             0x1FEu,
                             0LL);
  if ( PersistedStateLocation >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    PersistedStateLocation = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
    if ( PersistedStateLocation >= 0 )
    {
      PersistedStateLocation = ZwQueryValueKey(
                                 KeyHandle,
                                 (PUNICODE_STRING)&ExpUuidSequenceNumberRegName,
                                 KeyValuePartialInformation,
                                 KeyValueInformation,
                                 0x14u,
                                 &ResultLength);
      if ( PersistedStateLocation >= 0 )
      {
        if ( v7 == 4 && v8 == 4 )
          ExpUuidSequenceNumber = v9;
        else
          PersistedStateLocation = -1073741823;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)PersistedStateLocation;
}
