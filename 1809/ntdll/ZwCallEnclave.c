/*
 * XREFs of ZwCallEnclave @ 0x1800A14B0
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A4140 (RtlEnclaveCallDispatcher.c)
 *     RtlCallEnclave @ 0x1800A41B0 (RtlCallEnclave.c)
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
