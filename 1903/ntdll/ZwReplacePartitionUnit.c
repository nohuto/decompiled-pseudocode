/*
 * XREFs of ZwReplacePartitionUnit @ 0x18009F4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwReplacePartitionUnit()
{
  __int64 result; // rax

  result = 367LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
