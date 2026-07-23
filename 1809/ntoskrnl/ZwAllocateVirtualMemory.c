/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1401B85F0
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x140133878 (PspWow64ThunkProcessParameters.c)
 *     RtlpStdExtendLowerWatermark @ 0x1402ED468 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1402ED588 (RtlpStdExtendUpperWatermark.c)
 *     RtlpAllocateHeap @ 0x1402EFF20 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1402F1BB0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1402F1E50 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1402F2624 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x1402FCD30 (RtlpHpFixedHeapCommitRoutine.c)
 *     EtwpFindUserBufferSpace @ 0x1405C2B98 (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x1405F9EDC (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067912C (PspSetupUserProcessAddressSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1406A4CAC (MiCheckForUserStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x1406BCF04 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406C32A0 (PspSetupReservedUserMappings.c)
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140811AE0 (DbgkUserReportWorkRoutine.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1408A5908 (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x1408B1200 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x1408D78A0 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
