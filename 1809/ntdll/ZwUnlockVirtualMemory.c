/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800A3B70
 * Callers:
 *     RtlUnlockMemoryZone @ 0x1800798D0 (RtlUnlockMemoryZone.c)
 *     RtlLockMemoryZone @ 0x180079A70 (RtlLockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x180079C40 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x1800865B0 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x18008A0B0 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x18008A13C (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 452;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
