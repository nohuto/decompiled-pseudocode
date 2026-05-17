/*
 * XREFs of ZwAllocateVirtualMemoryEx @ 0x18009D550
 * Callers:
 *     sub_180047BA0 @ 0x180047BA0 (sub_180047BA0.c)
 * Callees:
 *     <none>
 */

__int64 ZwAllocateVirtualMemoryEx()
{
  __int64 result; // rax

  result = 116LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
