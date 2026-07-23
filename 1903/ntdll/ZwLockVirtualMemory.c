/*
 * XREFs of ZwLockVirtualMemory @ 0x18009E7D0
 * Callers:
 *     RtlExtendMemoryZone @ 0x1800025F0 (RtlExtendMemoryZone.c)
 *     RtlLockMemoryZone @ 0x1800739A0 (RtlLockMemoryZone.c)
 *     EnumProc @ 0x18007D390 (EnumProc.c)
 *     RtlLockCurrentThread @ 0x180081AE0 (RtlLockCurrentThread.c)
 *     sub_180081B98 @ 0x180081B98 (sub_180081B98.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 264;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
