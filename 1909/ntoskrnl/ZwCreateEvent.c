/*
 * XREFs of ZwCreateEvent @ 0x1401C1550
 * Callers:
 *     CmpCreateEvent @ 0x14063A3D0 (CmpCreateEvent.c)
 *     MiCreateMemoryEvent @ 0x14074FA64 (MiCreateMemoryEvent.c)
 *     PiDrvDbCreateNode @ 0x14075703C (PiDrvDbCreateNode.c)
 *     SepInitializationPhase1 @ 0x14075C9D4 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x14075D5C8 (DbgkpCreateNotificationEvent.c)
 *     PfpCreateEvent @ 0x14077BBD0 (PfpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x140786F60 (IoCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x14078A260 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x14078ABFC (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x140855A60 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x1408C5264 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x1409158DC (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140916210 (CMFSystemThreadRoutine.c)
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
