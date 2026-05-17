/*
 * XREFs of ZwCreateIoCompletion @ 0x18009DBD0
 * Callers:
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateIoCompletion()
{
  __int64 result; // rax

  result = 168LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
