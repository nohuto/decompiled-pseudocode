/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800A0720
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180073DA0 (RtlUnlockMemoryZone.c)
 *     RtlLockMemoryZone @ 0x180073F40 (RtlLockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x180074110 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x180082180 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x1800864E0 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x18008656C (RtlpUnlockStack.c)
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
