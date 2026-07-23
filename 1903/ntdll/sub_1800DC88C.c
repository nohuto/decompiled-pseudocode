/*
 * XREFs of sub_1800DC88C @ 0x1800DC88C
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009CFE0 (ZwCreateEvent.c)
 */

NTSTATUS __fastcall sub_1800DC88C(HANDLE *a1)
{
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( !a1 )
    return -1073741585;
  *a1 = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  return ZwCreateEvent(a1, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
}
