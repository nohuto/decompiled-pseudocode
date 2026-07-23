/*
 * XREFs of ZwFreeVirtualMemory @ 0x1401C0490
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14013286C (SepRmDispatchDataToLsa.c)
 *     RtlpAllocateHeap @ 0x14030E8E0 (RtlpAllocateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x14030FF70 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x140310548 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x140310A28 (RtlpFreeHeap.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     PspSetupUserStack @ 0x14060EA90 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x14060EBB0 (RtlCreateUserStack.c)
 *     WbFreeMemoryBlock @ 0x1406AF0E4 (WbFreeMemoryBlock.c)
 *     RtlpWow64CreateUserStack @ 0x1406DC048 (RtlpWow64CreateUserStack.c)
 *     RtlCreateHeap @ 0x1406E6750 (RtlCreateHeap.c)
 *     PspDeleteUserStack @ 0x1406EA7A4 (PspDeleteUserStack.c)
 *     RtlDestroyHeap @ 0x14071E490 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x14084A1A0 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x1408D4388 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1408E2DF8 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1409008D4 (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x140913EE0 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
