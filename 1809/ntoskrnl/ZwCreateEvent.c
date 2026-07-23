/*
 * XREFs of ZwCreateEvent @ 0x1401B8BF0
 * Callers:
 *     CmpCreateEvent @ 0x1405B587C (CmpCreateEvent.c)
 *     SepInitializationPhase1 @ 0x1407281C4 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x140728D58 (DbgkpCreateNotificationEvent.c)
 *     MiCreateMemoryEvent @ 0x14072CCD4 (MiCreateMemoryEvent.c)
 *     PiDrvDbCreateNode @ 0x14073BD38 (PiDrvDbCreateNode.c)
 *     PfpCreateEvent @ 0x140754060 (PfpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x14075F660 (IoCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x140762374 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140763070 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x14081D4E0 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x140888854 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x1408D9EA8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408DA760 (CMFSystemThreadRoutine.c)
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
