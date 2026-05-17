/*
 * XREFs of ZwLockVirtualMemory @ 0x18009E7D0
 * Callers:
 *     RtlExtendMemoryZone @ 0x1800025F0 (RtlExtendMemoryZone.c)
 *     RtlLockMemoryZone @ 0x1800739A0 (RtlLockMemoryZone.c)
 *     sub_18007D390 @ 0x18007D390 (sub_18007D390.c)
 *     RtlLockCurrentThread @ 0x180081AE0 (RtlLockCurrentThread.c)
 *     sub_180081B98 @ 0x180081B98 (sub_180081B98.c)
 * Callees:
 *     <none>
 */

__int64 ZwLockVirtualMemory()
{
  __int64 result; // rax

  result = 264LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
