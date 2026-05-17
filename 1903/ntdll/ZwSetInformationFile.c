/*
 * XREFs of ZwSetInformationFile @ 0x18009CBC0
 * Callers:
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 *     sub_180005268 @ 0x180005268 (sub_180005268.c)
 *     sub_180062AF0 @ 0x180062AF0 (sub_180062AF0.c)
 *     sub_180087200 @ 0x180087200 (sub_180087200.c)
 *     sub_1800E319C @ 0x1800E319C (sub_1800E319C.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationFile()
{
  __int64 result; // rax

  result = 39LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
