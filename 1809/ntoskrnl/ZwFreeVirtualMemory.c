/*
 * XREFs of ZwFreeVirtualMemory @ 0x1401B8530
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14012FD44 (SepRmDispatchDataToLsa.c)
 *     RtlpAllocateHeap @ 0x1402EFC30 (RtlpAllocateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F12E8 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1402F18C0 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1402F1DC8 (RtlpFreeHeap.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     PspSetupUserStack @ 0x1405F8DD0 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1405F8EDC (RtlCreateUserStack.c)
 *     WbFreeMemoryBlock @ 0x140691044 (WbFreeMemoryBlock.c)
 *     RtlpWow64CreateUserStack @ 0x1406BBC84 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1406CB090 (PspDeleteUserStack.c)
 *     RtlDestroyHeap @ 0x140702180 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x14070AF40 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140810900 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x14089641C (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1408A46C8 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1408C36D4 (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x1408D6600 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, RegionSize);
}
