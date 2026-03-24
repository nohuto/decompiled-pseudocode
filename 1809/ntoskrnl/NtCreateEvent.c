/*
 * XREFs of NtCreateEvent @ 0x14062CF50
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x14065DC4C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPrefetchMetadata @ 0x14065ECDC (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x14065F740 (PfSnPopulateReadList.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14073716C (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x1409D789C (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8E70 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x1405E05E0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14062D080 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  PHANDLE v6; // rbx
  char PreviousMode; // si
  NTSTATUS inserted; // ecx
  __int64 v10; // [rsp+20h] [rbp-48h]
  PRKEVENT Event; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h] BYREF

  v6 = EventHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)EventHandle >= 0x7FFFFFFF0000LL )
      EventHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *EventHandle = *EventHandle;
  }
  if ( (unsigned int)EventType > SynchronizationEvent )
    return -1073741811;
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExEventObjectType,
               (int)ObjectAttributes,
               PreviousMode,
               v10,
               24,
               0,
               0,
               &Event,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeEvent(Event, EventType, InitialState);
    inserted = ObInsertObjectEx(Event, 0LL, 0, 0LL, (__int64)&v12);
    LODWORD(Event) = inserted;
    if ( inserted >= 0 )
      *v6 = (HANDLE)v12;
  }
  return inserted;
}
