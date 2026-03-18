/*
 * XREFs of SepAdtOpenEtwReadyEvent @ 0x140775640
 * Callers:
 *     SepRmCallLsa @ 0x140132630 (SepRmCallLsa.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A17C20 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     NtCreateEvent @ 0x1405D7F30 (NtCreateEvent.c)
 */

NTSTATUS __fastcall SepAdtOpenEtwReadyEvent(PHANDLE EventHandle)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\ADT_ETW_CHANNEL_INIT");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 640;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtCreateEvent(EventHandle, 0x100003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result == 0x40000000 || result == -1073741771 )
    return 0;
  return result;
}
