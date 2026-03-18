/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1401B8470
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x140133788 (PspWow64ThunkProcessParameters.c)
 *     RtlpStdExtendLowerWatermark @ 0x1402ED178 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1402ED298 (RtlpStdExtendUpperWatermark.c)
 *     RtlpAllocateHeap @ 0x1402EFC30 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1402F18C0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1402F1B60 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1402F2334 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x1402FCA40 (RtlpHpFixedHeapCommitRoutine.c)
 *     EtwpFindUserBufferSpace @ 0x1405C1B98 (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x1405F8EDC (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x140677F8C (PspSetupUserProcessAddressSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1406A3A2C (MiCheckForUserStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x1406BBC84 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406C2020 (PspSetupReservedUserMappings.c)
 *     RtlCreateHeap @ 0x14070AF40 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140810900 (DbgkUserReportWorkRoutine.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1408A46C8 (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x1408AFFC0 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x1408D6600 (ExRaiseHardError.c)
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
  return KiServiceInternal(ProcessHandle, BaseAddress, ZeroBits);
}
