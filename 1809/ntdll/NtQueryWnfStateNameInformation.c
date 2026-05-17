/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1800A2E70
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x18005C4B0 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x1800868B0 (RtlQueryWnfMetaNotification.c)
 *     SignalStartWerSvc @ 0x1800DE928 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FE520 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryWnfStateNameInformation()
{
  __int64 result; // rax

  result = 349LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
