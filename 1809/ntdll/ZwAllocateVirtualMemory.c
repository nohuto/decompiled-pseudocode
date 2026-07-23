/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1800A0600
 * Callers:
 *     EtwpInitializeCompression @ 0x180002870 (EtwpInitializeCompression.c)
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18001CED8 (RtlpFindAndCommitPages.c)
 *     EtwpAllocateTraceBufferPool @ 0x18005125C (EtwpAllocateTraceBufferPool.c)
 *     EtwpAllocateFreeBuffers @ 0x180051368 (EtwpAllocateFreeBuffers.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180053E30 (RtlpAllocDeallocQueryBuffer.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18005F148 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x18005F5F8 (RtlpCreateLowFragHeap.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 *     RtlpInitializeHeapSegment @ 0x1800617A8 (RtlpInitializeHeapSegment.c)
 *     RtlAllocateHandle @ 0x1800737D0 (RtlAllocateHandle.c)
 *     RtlCreateUserStack @ 0x180077CF0 (RtlCreateUserStack.c)
 *     RtlpCommitQueryDebugInfo @ 0x18007DD6C (RtlpCommitQueryDebugInfo.c)
 *     RtlCreateMemoryZone @ 0x18007EF90 (RtlCreateMemoryZone.c)
 *     RtlCreateQueryDebugBuffer @ 0x180085F40 (RtlCreateQueryDebugBuffer.c)
 *     RtlCreateProcessReflection @ 0x1800D7C30 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D81D0 (RtlpProcessReflectionStartup.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D9EB0 (RtlpCopyRemoteDebugInformation.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DEB38 (WerpAllocateAndInitializeSid.c)
 *     GetShipAssertBuffer @ 0x1800DF044 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DF484 (WerEscalationLazyInit.c)
 *     RtlResetStackOverflow @ 0x1800DFABC (RtlResetStackOverflow.c)
 *     RtlExtendMemoryZone @ 0x1800EB990 (RtlExtendMemoryZone.c)
 *     RtlValidateProcessHeaps @ 0x1800F2B70 (RtlValidateProcessHeaps.c)
 *     RtlpAllocateTags @ 0x1800F2CB0 (RtlpAllocateTags.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3788 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdInitializeStackDatabase @ 0x1800FD9B0 (RtlStdInitializeStackDatabase.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800FDE54 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800FDF34 (RtlpStdExtendUpperWatermark.c)
 *     RtlpTraceDatabaseAllocate @ 0x1800FEEA4 (RtlpTraceDatabaseAllocate.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180109404 (RtlpValidateHeapHeaders.c)
 *     PssNtCaptureSnapshot @ 0x180111A70 (PssNtCaptureSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011274C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureHandleInformation @ 0x18011302C (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x180113AA8 (PsspCaptureThreadInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180114174 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011470C (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  NTSTATUS result; // eax

  result = 24;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
