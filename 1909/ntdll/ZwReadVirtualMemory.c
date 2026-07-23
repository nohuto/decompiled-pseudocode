/*
 * XREFs of ZwReadVirtualMemory @ 0x18009D670
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180075580 (RtlQueryProcessDebugInformation.c)
 *     RtlWow64GetSharedInfoProcess @ 0x180079850 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpQueryReadVirtualMemory @ 0x180079BF0 (RtlpQueryReadVirtualMemory.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E6980 (RtlQueryCriticalSectionOwner.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F093C (RtlpHeapPerformCrossProcessQuery.c)
 *     PssNtFreeRemoteSnapshot @ 0x180110820 (PssNtFreeRemoteSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x180111660 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureImageInformation @ 0x1801118E8 (PsspCaptureImageInformation.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180113B38 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  NTSTATUS result; // eax

  result = 63;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
