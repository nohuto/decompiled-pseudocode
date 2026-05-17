/*
 * XREFs of ZwUpdateWnfStateData @ 0x1800A0780
 * Callers:
 *     RtlPublishWnfStateData @ 0x18007CED0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180083C00 (RtlTestAndPublishWnfStateData.c)
 *     SignalStartWerSvc @ 0x1800DC5F8 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FB9F0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 ZwUpdateWnfStateData()
{
  __int64 result; // rax

  result = 456LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
