/*
 * XREFs of ZwUnlockVirtualMemory @ 0x18009FF70
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180073800 (RtlUnlockMemoryZone.c)
 *     RtlLockMemoryZone @ 0x1800739A0 (RtlLockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x180073B70 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x180081AE0 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180085E40 (RtlUnlockCurrentThread.c)
 *     sub_180085ECC @ 0x180085ECC (sub_180085ECC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 453;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
