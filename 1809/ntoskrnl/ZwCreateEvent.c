/*
 * XREFs of ZwCreateEvent @ 0x1401B8A70
 * Callers:
 *     CmpCreateEvent @ 0x1405B487C (CmpCreateEvent.c)
 *     SepInitializationPhase1 @ 0x140726F44 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x140727AD8 (DbgkpCreateNotificationEvent.c)
 *     MiCreateMemoryEvent @ 0x14072BB04 (MiCreateMemoryEvent.c)
 *     PiDrvDbCreateNode @ 0x14073AB68 (PiDrvDbCreateNode.c)
 *     PfpCreateEvent @ 0x140752E90 (PfpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x14075E490 (IoCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x1407611A4 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140761EA0 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x14081C300 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x140887614 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x1408D8C08 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408D94C0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
