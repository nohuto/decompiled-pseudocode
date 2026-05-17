/*
 * XREFs of ZwQueryDirectoryFile @ 0x18009CD80
 * Callers:
 *     sub_1800E00A8 @ 0x1800E00A8 (sub_1800E00A8.c)
 *     sub_1800ED05C @ 0x1800ED05C (sub_1800ED05C.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryDirectoryFile()
{
  __int64 result; // rax

  result = 53LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
