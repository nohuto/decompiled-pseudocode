/*
 * XREFs of WerpCreateCompletionEvent @ 0x1800DEC7C
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DDDE0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DE2B0 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A0C00 (ZwCreateEvent.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

NTSTATUS __fastcall WerpCreateCompletionEvent(PHANDLE EventHandle)
{
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !EventHandle )
    return -1073741585;
  *EventHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 2;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwCreateEvent(EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
}
