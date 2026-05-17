/*
 * XREFs of NtCreateThreadEx @ 0x1800A1A50
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x1800510E0 (RtlpCreateUserThreadEx.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateThreadEx()
{
  __int64 result; // rax

  result = 188LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
