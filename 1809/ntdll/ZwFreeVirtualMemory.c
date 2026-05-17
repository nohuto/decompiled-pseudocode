/*
 * XREFs of ZwFreeVirtualMemory @ 0x1800A06A0
 * Callers:
 *     EtwpShutdownCompression @ 0x1800029B8 (EtwpShutdownCompression.c)
 *     EtwpAllocateTraceBufferPool @ 0x18005125C (EtwpAllocateTraceBufferPool.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180053E30 (RtlpAllocDeallocQueryBuffer.c)
 *     EtwpFreeLoggerContext @ 0x18005A9DC (EtwpFreeLoggerContext.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x18005C928 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800611AC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpFreeVA @ 0x1800611FC (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrAlloc @ 0x180063220 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x180065734 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x180065B04 (RtlpHpVaMgrRangeFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180065F00 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpInitParameterBlock @ 0x180081230 (RtlpInitParameterBlock.c)
 *     RtlFreeUserStack @ 0x180081530 (RtlFreeUserStack.c)
 *     RtlCreateQueryDebugBuffer @ 0x180085F30 (RtlCreateQueryDebugBuffer.c)
 *     RtlDestroyMemoryZone @ 0x180088000 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x180088850 (RtlDestroyHandleTable.c)
 *     PssNtFreeSnapshot @ 0x180089520 (PssNtFreeSnapshot.c)
 *     LdrCreateEnclave @ 0x1800CEBB0 (LdrCreateEnclave.c)
 *     LdrDeleteEnclave @ 0x1800CECB0 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1800D7C30 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D81D0 (RtlpProcessReflectionStartup.c)
 *     WerReportExceptionWorker @ 0x1800DEA90 (WerReportExceptionWorker.c)
 *     WerpFreeSid @ 0x1800DEE5C (WerpFreeSid.c)
 *     GetShipAssertBuffer @ 0x1800DF044 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DF484 (WerEscalationLazyInit.c)
 *     RtlExtendMemoryZone @ 0x1800EB990 (RtlExtendMemoryZone.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3788 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x1800FD970 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x1800FD9B0 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x1800FEEF0 (RtlpTraceDatabaseFree.c)
 *     PssNtFreeRemoteSnapshot @ 0x180111FE0 (PssNtFreeRemoteSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011274C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureHandleInformation @ 0x18011302C (PsspCaptureHandleInformation.c)
 *     PsspFreeLinkedHandleList @ 0x18011403C (PsspFreeLinkedHandleList.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180114174 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180114744 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 ZwFreeVirtualMemory()
{
  __int64 result; // rax

  result = 30LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
