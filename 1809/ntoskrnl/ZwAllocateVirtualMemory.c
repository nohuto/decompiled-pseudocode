/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1401B8490
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x1401337A8 (PspWow64ThunkProcessParameters.c)
 *     RtlpStdExtendLowerWatermark @ 0x1402ED278 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1402ED398 (RtlpStdExtendUpperWatermark.c)
 *     RtlpAllocateHeap @ 0x1402EFD30 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1402F19C0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1402F1C60 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1402F2434 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x1402FCB40 (RtlpHpFixedHeapCommitRoutine.c)
 *     EtwpFindUserBufferSpace @ 0x1405C1B98 (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x1405F8EDC (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x140677F6C (PspSetupUserProcessAddressSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1406A3A0C (MiCheckForUserStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x1406BBC64 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406C2000 (PspSetupReservedUserMappings.c)
 *     RtlCreateHeap @ 0x14070AF20 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x1408108E0 (DbgkUserReportWorkRoutine.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1408A46A8 (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x1408AFFA0 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x1408D65E0 (ExRaiseHardError.c)
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
