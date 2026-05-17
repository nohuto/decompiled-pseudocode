/*
 * XREFs of ZwWaitForWorkViaWorkerFactory @ 0x1800A0070
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 * Callees:
 *     <none>
 */

__int64 ZwWaitForWorkViaWorkerFactory()
{
  __int64 result; // rax

  result = 461LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
