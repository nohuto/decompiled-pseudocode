/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x140671500
 * Callers:
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x140176428 (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x14026DF6C (DbgkCaptureLiveKernelDump.c)
 *     MiReferenceAweHandle @ 0x1402B1B6C (MiReferenceAweHandle.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402D2CF0 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x1402EA920 (PspTimerDelayProcess.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     NtQueryInformationProcess @ 0x14066DB70 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 *     PopInitializeDirectedDrips @ 0x1409DC6E0 (PopInitializeDirectedDrips.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
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
