/*
 * XREFs of NtGetCurrentProcessorNumberEx @ 0x1800A2090
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x1800A4C90 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     <none>
 */

__int64 NtGetCurrentProcessorNumberEx()
{
  __int64 result; // rax

  result = 238LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
