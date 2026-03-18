/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x1405F0AB0
 * Callers:
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x14017FDA8 (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x140281A68 (DbgkCaptureLiveKernelDump.c)
 *     MiReferenceAweHandle @ 0x1402D7910 (MiReferenceAweHandle.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402ED370 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x140308440 (PspTimerDelayProcess.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     NtQueryInformationThread @ 0x1405E5490 (NtQueryInformationThread.c)
 *     NtSetInformationVirtualMemory @ 0x1405E9640 (NtSetInformationVirtualMemory.c)
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     MiMapViewOfSectionCommon @ 0x140608400 (MiMapViewOfSectionCommon.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     NtTerminateThread @ 0x140678410 (NtTerminateThread.c)
 *     NtCreateWorkerFactory @ 0x14068D8D0 (NtCreateWorkerFactory.c)
 *     PspSetQuotaLimits @ 0x1406D8200 (PspSetQuotaLimits.c)
 *     NtGetNextThread @ 0x1406E1870 (NtGetNextThread.c)
 *     NtAcquireProcessActivityReference @ 0x1406F7810 (NtAcquireProcessActivityReference.c)
 *     NtGetNextProcess @ 0x140741EC0 (NtGetNextProcess.c)
 *     PspAssignPrimaryToken @ 0x140780184 (PspAssignPrimaryToken.c)
 *     PspCreateProcess @ 0x1407853D0 (PspCreateProcess.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1408425E8 (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtRemoveProcessDebug @ 0x140849930 (NtRemoveProcessDebug.c)
 *     PspCreatePicoProcess @ 0x1408CA620 (PspCreatePicoProcess.c)
 *     ExpProfileCreate @ 0x140917914 (ExpProfileCreate.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A08E50 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
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
