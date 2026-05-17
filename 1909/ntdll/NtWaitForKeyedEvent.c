/*
 * XREFs of NtWaitForKeyedEvent @ 0x1800A0800
 * Callers:
 *     RtlpRunOnceWaitForInit @ 0x180083744 (RtlpRunOnceWaitForInit.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitForKeyedEvent()
{
  __int64 result; // rax

  result = 460LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
