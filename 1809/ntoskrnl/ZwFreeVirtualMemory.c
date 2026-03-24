/*
 * XREFs of ZwFreeVirtualMemory @ 0x1401B8550
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14012FD64 (SepRmDispatchDataToLsa.c)
 *     RtlpAllocateHeap @ 0x1402EFD30 (RtlpAllocateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F13E8 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1402F19C0 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1402F1EC8 (RtlpFreeHeap.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     PspSetupUserStack @ 0x1405F8DD0 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1405F8EDC (RtlCreateUserStack.c)
 *     WbFreeMemoryBlock @ 0x140691024 (WbFreeMemoryBlock.c)
 *     RtlpWow64CreateUserStack @ 0x1406BBC64 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1406CB070 (PspDeleteUserStack.c)
 *     RtlDestroyHeap @ 0x140702160 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x14070AF20 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x1408108E0 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x1408963FC (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1408A46A8 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1408C36B4 (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x1408D65E0 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, RegionSize);
}
