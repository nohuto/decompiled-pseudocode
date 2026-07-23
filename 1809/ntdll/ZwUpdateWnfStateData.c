/*
 * XREFs of ZwUpdateWnfStateData @ 0x1800A3BD0
 * Callers:
 *     RtlPublishWnfStateData @ 0x1800814B0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800877D0 (RtlTestAndPublishWnfStateData.c)
 *     SignalStartWerSvc @ 0x1800DE928 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FE520 (RtlRaiseCustomSystemEventTrigger.c)
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

  result = 455;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
