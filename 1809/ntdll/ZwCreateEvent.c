/*
 * XREFs of ZwCreateEvent @ 0x1800A0BE0
 * Callers:
 *     EtwpInitLoggerContext @ 0x180051D88 (EtwpInitLoggerContext.c)
 *     RtlWaitForWnfMetaNotification @ 0x18005C4B0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18005F030 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     LdrpCreateLoaderEvents @ 0x180063114 (LdrpCreateLoaderEvents.c)
 *     _LdrpInitialize @ 0x18007874C (_LdrpInitialize.c)
 *     RtlpWnfRegisterTpNotification @ 0x180080E64 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081BF0 (EtwpRegisterTpNotificationOnce.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D0C80 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D7C30 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D81D0 (RtlpProcessReflectionStartup.c)
 *     WerpCreateCompletionEvent @ 0x1800DEC7C (WerpCreateCompletionEvent.c)
 *     RtlCreateUmsCompletionList @ 0x1800F6070 (RtlCreateUmsCompletionList.c)
 *     RtlpCtContextInit @ 0x1800FE7E4 (RtlpCtContextInit.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateEvent()
{
  __int64 result; // rax

  result = 72LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
