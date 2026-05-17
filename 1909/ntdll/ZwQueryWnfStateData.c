/*
 * XREFs of ZwQueryWnfStateData @ 0x18009FA20
 * Callers:
 *     RtlQueryWnfStateData @ 0x18007CC10 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180083680 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FB9F0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateData()
{
  __int64 result; // rax

  result = 349LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
