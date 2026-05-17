/*
 * XREFs of NtCreateThreadEx @ 0x18009E620
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x180005760 (RtlpCreateUserThreadEx.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateThreadEx()
{
  __int64 result; // rax

  result = 189LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
