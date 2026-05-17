/*
 * XREFs of ZwUpdateWnfStateData @ 0x1800A3BB0
 * Callers:
 *     RtlPublishWnfStateData @ 0x1800814A0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800877C0 (RtlTestAndPublishWnfStateData.c)
 *     SignalStartWerSvc @ 0x1800DE928 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FE520 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 ZwUpdateWnfStateData()
{
  __int64 result; // rax

  result = 455LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
