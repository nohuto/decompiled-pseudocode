/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x18009F980
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySymbolicLinkObject()
{
  __int64 result; // rax

  result = 344LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
