/*
 * XREFs of NtWriteVirtualMemory @ 0x1800A0A20
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D81D0 (RtlpProcessReflectionStartup.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3788 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800FB0D0 (RtlRemoteCall.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180114174 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180114744 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteVirtualMemory()
{
  __int64 result; // rax

  result = 58LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
