/*
 * XREFs of ZwFreeVirtualMemory @ 0x18009D250
 * Callers:
 *     RtlExtendMemoryZone @ 0x1800025F0 (RtlExtendMemoryZone.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180003BA4 (RtlpAllocDeallocQueryBuffer.c)
 *     EtwpAllocateTraceBufferPool @ 0x180005400 (EtwpAllocateTraceBufferPool.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180048120 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpFreeVA @ 0x180048170 (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrAlloc @ 0x18004DEFC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x18004E374 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrCtxFree @ 0x18004F770 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x18004FB48 (RtlpHpVaMgrRangeFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x1800502F8 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlCreateQueryDebugBuffer @ 0x18005ADA0 (RtlCreateQueryDebugBuffer.c)
 *     LdrEnsureMrdataHeapExists @ 0x18007C748 (LdrEnsureMrdataHeapExists.c)
 *     RtlpInitParameterBlock @ 0x18007CD08 (RtlpInitParameterBlock.c)
 *     RtlFreeUserStack @ 0x18007EFA0 (RtlFreeUserStack.c)
 *     RtlDestroyMemoryZone @ 0x180084050 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x180084EF0 (RtlDestroyHandleTable.c)
 *     EtwpFreeLoggerContext @ 0x180087B98 (EtwpFreeLoggerContext.c)
 *     LdrCreateEnclave @ 0x1800CD420 (LdrCreateEnclave.c)
 *     LdrDeleteEnclave @ 0x1800CD530 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1800D5F30 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D64C0 (RtlpProcessReflectionStartup.c)
 *     WerReportExceptionWorker @ 0x1800DC760 (WerReportExceptionWorker.c)
 *     WerpFreeSid @ 0x1800DCB18 (WerpFreeSid.c)
 *     GetShipAssertBuffer @ 0x1800DCCF8 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DD0D0 (WerEscalationLazyInit.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F093C (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x1800FAC30 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x1800FAC70 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x1800FC44C (RtlpTraceDatabaseFree.c)
 *     EtwpShutdownCompression @ 0x18010E5C8 (EtwpShutdownCompression.c)
 *     PssNtFreeRemoteSnapshot @ 0x180110820 (PssNtFreeRemoteSnapshot.c)
 *     PssNtFreeSnapshot @ 0x180110A30 (PssNtFreeSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x180111660 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureHandleInformation @ 0x180111ED4 (PsspCaptureHandleInformation.c)
 *     PsspFreeLinkedHandleList @ 0x180112EB4 (PsspFreeLinkedHandleList.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1801135D0 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180113B38 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  NTSTATUS result; // eax

  result = 30;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
