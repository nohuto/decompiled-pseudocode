/*
 * XREFs of ObInsertObject @ 0x1405D9570
 * Callers:
 *     SepCreateTokenEx @ 0x140086D2C (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x1400E1DB0 (FsRtlCreateSectionForDataScan.c)
 *     NtOpenThreadTokenEx @ 0x1405D5B10 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x1405D77E0 (NtDuplicateToken.c)
 *     NtQueryInformationToken @ 0x1405ECF30 (NtQueryInformationToken.c)
 *     SeSubProcessToken @ 0x140618F30 (SeSubProcessToken.c)
 *     NtCreateLowBoxToken @ 0x14067FAD0 (NtCreateLowBoxToken.c)
 *     NtCreateWorkerFactory @ 0x14068D8D0 (NtCreateWorkerFactory.c)
 *     ObpCreateDirectoryObject @ 0x14068DDFC (ObpCreateDirectoryObject.c)
 *     NtCreateJobObject @ 0x140696550 (NtCreateJobObject.c)
 *     EtwpRealtimeConnect @ 0x1406CC098 (EtwpRealtimeConnect.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     PopEtEnergyTrackerCreate @ 0x1407837D0 (PopEtEnergyTrackerCreate.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140906780 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x140917914 (ExpProfileCreate.c)
 *     PspInitPhase1 @ 0x1409FE9C4 (PspInitPhase1.c)
 *     CmpCreateRegistryRoot @ 0x140A0E368 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A111C8 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x140A1EFF8 (MiSectionInitialization.c)
 * Callees:
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(Object, PassedAccessState, 0, (__int64)NewObject, (__int64)Handle);
}
