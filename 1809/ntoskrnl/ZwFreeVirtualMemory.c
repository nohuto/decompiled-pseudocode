/*
 * XREFs of ZwFreeVirtualMemory @ 0x1401B86B0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14012FE34 (SepRmDispatchDataToLsa.c)
 *     RtlpAllocateHeap @ 0x1402EFF20 (RtlpAllocateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F15D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1402F1BB0 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1402F20B8 (RtlpFreeHeap.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     PspSetupUserStack @ 0x1405F9DD0 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1405F9EDC (RtlCreateUserStack.c)
 *     WbFreeMemoryBlock @ 0x1406921E4 (WbFreeMemoryBlock.c)
 *     RtlpWow64CreateUserStack @ 0x1406BCF04 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1406CC310 (PspDeleteUserStack.c)
 *     RtlDestroyHeap @ 0x140703400 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140811AE0 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x14089765C (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1408A5908 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1408C4974 (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x1408D78A0 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
