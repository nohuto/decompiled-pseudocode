/*
 * XREFs of NtCreateTimer2 @ 0x1800A1A90
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x1800300B8 (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateTimer2()
{
  __int64 result; // rax

  result = 190LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
