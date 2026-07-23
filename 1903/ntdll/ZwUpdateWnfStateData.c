/*
 * XREFs of ZwUpdateWnfStateData @ 0x18009FFD0
 * Callers:
 *     RtlPublishWnfStateData @ 0x18007C830 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180083560 (RtlTestAndPublishWnfStateData.c)
 *     sub_1800DC538 @ 0x1800DC538 (sub_1800DC538.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FB910 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  NTSTATUS result; // eax

  result = 456;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
