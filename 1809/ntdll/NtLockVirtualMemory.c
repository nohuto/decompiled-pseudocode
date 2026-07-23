/*
 * XREFs of NtLockVirtualMemory @ 0x1800A23D0
 * Callers:
 *     RtlLockMemoryZone @ 0x180079A70 (RtlLockMemoryZone.c)
 *     RtlpModuleEnumeratorCallback @ 0x180082550 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockCurrentThread @ 0x1800865B0 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x180086668 (RtlpLockStack.c)
 *     RtlExtendMemoryZone @ 0x1800EB990 (RtlExtendMemoryZone.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 263;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
