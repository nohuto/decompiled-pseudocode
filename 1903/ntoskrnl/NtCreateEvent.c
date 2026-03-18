/*
 * XREFs of NtCreateEvent @ 0x1405D7F30
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1406269A0 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPrefetchMetadata @ 0x140627954 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x1406280F0 (PfSnPopulateReadList.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140775640 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x140A1A51C (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  PHANDLE v6; // rbx
  unsigned __int8 v7; // si
  NTSTATUS Object; // ecx
  struct _KEVENT *Event; // [rsp+50h] [rbp-18h]
  __int64 v11; // [rsp+58h] [rbp-10h] BYREF

  v6 = EventHandle;
  v7 = KeGetCurrentThread()->$42514DC6747B59BF81E16C40547B231E::gap0[10];
  if ( v7 )
  {
    if ( (unsigned __int64)EventHandle >= 0x7FFFFFFF0000LL )
      EventHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *EventHandle = *EventHandle;
  }
  if ( (unsigned int)EventType > SynchronizationEvent )
    return -1073741811;
  Object = ObCreateObjectEx(v7, (_DWORD)ExEventObjectType, (_DWORD)ObjectAttributes, v7);
  if ( Object >= 0 )
  {
    KeInitializeEvent(Event, EventType, InitialState);
    Object = ObInsertObjectEx(Event, 0LL, 0, 0LL, (__int64)&v11);
    if ( Object >= 0 )
      *v6 = (HANDLE)v11;
  }
  return Object;
}
