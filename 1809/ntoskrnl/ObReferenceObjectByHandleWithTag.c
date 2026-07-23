/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x1406726C0
 * Callers:
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x140176528 (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x14026E15C (DbgkCaptureLiveKernelDump.c)
 *     MiReferenceAweHandle @ 0x1402B1D5C (MiReferenceAweHandle.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402D2EE0 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x1402EAB10 (PspTimerDelayProcess.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     PopInitializeDirectedDrips @ 0x1409DD6E0 (PopInitializeDirectedDrips.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
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
  return ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)Handle,
           DesiredAccess,
           (__int64)ObjectType,
           AccessMode,
           Tag,
           Object,
           HandleInformation,
           0LL);
}
