/*
 * XREFs of ZwCreateEvent @ 0x1401C09D0
 * Callers:
 *     CmpCreateEvent @ 0x140637170 (CmpCreateEvent.c)
 *     MiCreateMemoryEvent @ 0x14074EFD4 (MiCreateMemoryEvent.c)
 *     PiDrvDbCreateNode @ 0x1407565AC (PiDrvDbCreateNode.c)
 *     SepInitializationPhase1 @ 0x140758140 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x140758D38 (DbgkpCreateNotificationEvent.c)
 *     PfpCreateEvent @ 0x1407785F0 (PfpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x140784C00 (IoCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x140787E00 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x14078879C (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x140856360 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x1408C5984 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x140915E7C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409167B0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
