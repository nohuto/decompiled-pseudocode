/*
 * XREFs of NtWriteVirtualMemory @ 0x18009D5D0
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D64C0 (RtlpProcessReflectionStartup.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F093C (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800F8D70 (RtlRemoteCall.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1801135D0 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180113B38 (PsspDuplicateSnapshotRemoteToRemote.c)
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
