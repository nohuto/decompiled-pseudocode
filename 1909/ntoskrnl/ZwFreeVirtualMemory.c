/*
 * XREFs of ZwFreeVirtualMemory @ 0x1401C1010
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14013335C (SepRmDispatchDataToLsa.c)
 *     RtlpAllocateHeap @ 0x14030E330 (RtlpAllocateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x14030F9C0 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x14030FF98 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x140310478 (RtlpFreeHeap.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PspSetupUserStack @ 0x1406105A0 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1406106C0 (RtlCreateUserStack.c)
 *     WbFreeMemoryBlock @ 0x1406B1014 (WbFreeMemoryBlock.c)
 *     RtlpWow64CreateUserStack @ 0x1406DCCD0 (RtlpWow64CreateUserStack.c)
 *     RtlCreateHeap @ 0x1406E7930 (RtlCreateHeap.c)
 *     PspDeleteUserStack @ 0x1406EB994 (PspDeleteUserStack.c)
 *     RtlDestroyHeap @ 0x140720320 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x1408498A0 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x1408D3C88 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1408E26F8 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x140900234 (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x140913940 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
