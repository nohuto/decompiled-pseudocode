/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x1405F13C0
 * Callers:
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x140180498 (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x1402817C8 (DbgkCaptureLiveKernelDump.c)
 *     MiReferenceAweHandle @ 0x1402D7670 (MiReferenceAweHandle.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402ED0D0 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x140307EF0 (PspTimerDelayProcess.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     NtQueryInformationThread @ 0x1405E5C60 (NtQueryInformationThread.c)
 *     NtSetInformationVirtualMemory @ 0x1405E9E10 (NtSetInformationVirtualMemory.c)
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MiMapViewOfSectionCommon @ 0x140609F10 (MiMapViewOfSectionCommon.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     NtTerminateThread @ 0x14067DB20 (NtTerminateThread.c)
 *     NtCreateWorkerFactory @ 0x140680E40 (NtCreateWorkerFactory.c)
 *     PspSetQuotaLimits @ 0x1406D7FE0 (PspSetQuotaLimits.c)
 *     NtGetNextThread @ 0x1406E2EF0 (NtGetNextThread.c)
 *     NtAcquireProcessActivityReference @ 0x1406F95D0 (NtAcquireProcessActivityReference.c)
 *     NtGetNextProcess @ 0x140743DC0 (NtGetNextProcess.c)
 *     PspAssignPrimaryToken @ 0x14074AF20 (PspAssignPrimaryToken.c)
 *     PspCreateProcess @ 0x140787730 (PspCreateProcess.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140841C48 (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtRemoveProcessDebug @ 0x140849030 (NtRemoveProcessDebug.c)
 *     PspCreatePicoProcess @ 0x1408C9F00 (PspCreatePicoProcess.c)
 *     ExpProfileCreate @ 0x140917374 (ExpProfileCreate.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A0937C (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall ObReferenceObjectByHandleWithTag(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  return ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, Tag, (__int64)Object, (__int64)HandleInformation, 0LL);
}
