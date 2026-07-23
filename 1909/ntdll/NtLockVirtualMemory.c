/*
 * XREFs of NtLockVirtualMemory @ 0x18009EF80
 * Callers:
 *     RtlExtendMemoryZone @ 0x1800025F0 (RtlExtendMemoryZone.c)
 *     RtlLockMemoryZone @ 0x180073F40 (RtlLockMemoryZone.c)
 *     RtlpModuleEnumeratorCallback @ 0x18007DA30 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockCurrentThread @ 0x180082180 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x180082238 (RtlpLockStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 264;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
