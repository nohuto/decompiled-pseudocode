/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x18009D890
 * Callers:
 *     sub_18002EBF0 @ 0x18002EBF0 (sub_18002EBF0.c)
 *     sub_180031544 @ 0x180031544 (sub_180031544.c)
 *     sub_180035FA0 @ 0x180035FA0 (sub_180035FA0.c)
 * Callees:
 *     <none>
 */

__int64 ZwAssociateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 142LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
