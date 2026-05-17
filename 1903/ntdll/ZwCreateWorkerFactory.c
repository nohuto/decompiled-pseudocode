/*
 * XREFs of ZwCreateWorkerFactory @ 0x18009DFD0
 * Callers:
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateWorkerFactory()
{
  __int64 result; // rax

  result = 200LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
