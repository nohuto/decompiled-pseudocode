/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x18009F290
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x180006140 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x180082810 (RtlQueryWnfMetaNotification.c)
 *     sub_1800DC538 @ 0x1800DC538 (sub_1800DC538.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FB910 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateNameInformation()
{
  __int64 result; // rax

  result = 350LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
