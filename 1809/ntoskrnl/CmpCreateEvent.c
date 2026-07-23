/*
 * XREFs of CmpCreateEvent @ 0x1405B587C
 * Callers:
 *     CmpDoFileRead @ 0x1401343E4 (CmpDoFileRead.c)
 *     CmpGetVolumeClusterSize @ 0x1405A5094 (CmpGetVolumeClusterSize.c)
 *     CmpDoFileWrite @ 0x1405B4A60 (CmpDoFileWrite.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1401B8BF0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmpCreateEvent(EVENT_TYPE EventType, HANDLE *a2, PVOID *a3)
{
  NTSTATUS v5; // ebx
  HANDLE v6; // rcx
  PVOID Object; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  HANDLE EventHandle; // [rsp+98h] [rbp+28h] BYREF

  EventHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, EventType, 0);
  if ( v5 < 0 || (v5 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, 0LL, 0, &Object, 0LL), v5 < 0) )
  {
    v6 = EventHandle;
  }
  else
  {
    v6 = 0LL;
    *a2 = EventHandle;
    v5 = 0;
    *a3 = Object;
    EventHandle = 0LL;
  }
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)v5;
}
