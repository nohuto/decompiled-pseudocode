/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1401C03D0
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x140133A7C (PspWow64ThunkProcessParameters.c)
 *     RtlpStdExtendLowerWatermark @ 0x14030B9F8 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x14030BB18 (RtlpStdExtendUpperWatermark.c)
 *     RtlpAllocateHeap @ 0x14030E8E0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x140310548 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1403107CC (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x140310F80 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x14031B820 (RtlpHpFixedHeapCommitRoutine.c)
 *     RtlCreateUserStack @ 0x14060EBB0 (RtlCreateUserStack.c)
 *     EtwpFindUserBufferSpace @ 0x14062F5DC (EtwpFindUserBufferSpace.c)
 *     PspSetupUserProcessAddressSpace @ 0x140679A54 (PspSetupUserProcessAddressSpace.c)
 *     PspSetupReservedUserMappings @ 0x14068D350 (PspSetupReservedUserMappings.c)
 *     MiCheckForUserStackOverflow @ 0x1406C7DD8 (MiCheckForUserStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x1406DC048 (RtlpWow64CreateUserStack.c)
 *     RtlCreateHeap @ 0x1406E6750 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x14084A1A0 (DbgkUserReportWorkRoutine.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1408C8E8C (PspReserveAndCommitUserShadowStack.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1408E2DF8 (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x1408ED160 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x140913EE0 (ExRaiseHardError.c)
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
