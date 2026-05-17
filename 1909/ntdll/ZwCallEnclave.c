/*
 * XREFs of ZwCallEnclave @ 0x18009E060
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A0D10 (RtlEnclaveCallDispatcher.c)
 *     RtlCallEnclave @ 0x1800A0D80 (RtlCallEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CE080 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwCallEnclave()
{
  __int64 result; // rax

  result = 143LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
