/*
 * XREFs of ZwReadVirtualMemory @ 0x1800A0AC0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18007D750 (RtlQueryProcessDebugInformation.c)
 *     RtlpQueryReadVirtualMemory @ 0x180080FD0 (RtlpQueryReadVirtualMemory.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800DD510 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3788 (RtlpHeapPerformCrossProcessQuery.c)
 *     PssNtFreeRemoteSnapshot @ 0x180111FE0 (PssNtFreeRemoteSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011274C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureImageInformation @ 0x1801129D4 (PsspCaptureImageInformation.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180114744 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 ZwReadVirtualMemory()
{
  __int64 result; // rax

  result = 63LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
