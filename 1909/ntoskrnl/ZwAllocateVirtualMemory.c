/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1401C0F50
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x14013448C (PspWow64ThunkProcessParameters.c)
 *     RtlpStdExtendLowerWatermark @ 0x14030B4A8 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x14030B5C8 (RtlpStdExtendUpperWatermark.c)
 *     RtlpAllocateHeap @ 0x14030E330 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x14030FF98 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x14031021C (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1403109D0 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x14031B270 (RtlpHpFixedHeapCommitRoutine.c)
 *     RtlCreateUserStack @ 0x1406106C0 (RtlCreateUserStack.c)
 *     EtwpFindUserBufferSpace @ 0x14063345C (EtwpFindUserBufferSpace.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067FB08 (PspSetupUserProcessAddressSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1406C610C (MiCheckForUserStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x1406DCCD0 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406E45CC (PspSetupReservedUserMappings.c)
 *     RtlCreateHeap @ 0x1406E7930 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x1408498A0 (DbgkUserReportWorkRoutine.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1408C876C (PspReserveAndCommitUserShadowStack.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1408E26F8 (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x1408ECA70 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x140913940 (ExRaiseHardError.c)
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
