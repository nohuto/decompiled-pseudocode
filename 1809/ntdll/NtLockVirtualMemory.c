/*
 * XREFs of NtLockVirtualMemory @ 0x1800A23B0
 * Callers:
 *     RtlLockMemoryZone @ 0x180079A60 (RtlLockMemoryZone.c)
 *     RtlpModuleEnumeratorCallback @ 0x180082540 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockCurrentThread @ 0x1800865A0 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x180086658 (RtlpLockStack.c)
 *     RtlExtendMemoryZone @ 0x1800EB990 (RtlExtendMemoryZone.c)
 * Callees:
 *     <none>
 */

__int64 NtLockVirtualMemory()
{
  __int64 result; // rax

  result = 263LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
