/*
 * XREFs of ObInsertObject @ 0x1405D9D30
 * Callers:
 *     SepCreateTokenEx @ 0x14008714C (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x1400C1C30 (FsRtlCreateSectionForDataScan.c)
 *     NtOpenThreadTokenEx @ 0x1405D62D0 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x1405D7FA0 (NtDuplicateToken.c)
 *     NtQueryInformationToken @ 0x1405ED700 (NtQueryInformationToken.c)
 *     SeSubProcessToken @ 0x14061AA40 (SeSubProcessToken.c)
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 *     NtCreateWorkerFactory @ 0x140680E40 (NtCreateWorkerFactory.c)
 *     ObpCreateDirectoryObject @ 0x14068136C (ObpCreateDirectoryObject.c)
 *     NtCreateJobObject @ 0x140689AC0 (NtCreateJobObject.c)
 *     NtCreateLowBoxToken @ 0x14069CB70 (NtCreateLowBoxToken.c)
 *     EtwpRealtimeConnect @ 0x1406CAEC8 (EtwpRealtimeConnect.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     PopEtEnergyTrackerCreate @ 0x140785B30 (PopEtEnergyTrackerCreate.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409060E0 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x140917374 (ExpProfileCreate.c)
 *     PspInitPhase1 @ 0x1409FEEE0 (PspInitPhase1.c)
 *     CmpCreateRegistryRoot @ 0x140A0EAE8 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A11960 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x140A1F1D8 (MiSectionInitialization.c)
 * Callees:
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
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
