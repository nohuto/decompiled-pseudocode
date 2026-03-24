/*
 * XREFs of ZwCreateEvent @ 0x1401B8A90
 * Callers:
 *     CmpCreateEvent @ 0x1405B487C (CmpCreateEvent.c)
 *     SepInitializationPhase1 @ 0x140726F24 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x140727AB8 (DbgkpCreateNotificationEvent.c)
 *     MiCreateMemoryEvent @ 0x14072BAE4 (MiCreateMemoryEvent.c)
 *     PiDrvDbCreateNode @ 0x14073AB48 (PiDrvDbCreateNode.c)
 *     PfpCreateEvent @ 0x140752E70 (PfpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x14075E470 (IoCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x140761184 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140761E80 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x14081C2E0 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x1408875F4 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x1408D8BE8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408D94A0 (CMFSystemThreadRoutine.c)
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
