/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x18009F380
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenSymbolicLinkObject()
{
  __int64 result; // rax

  result = 296LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
