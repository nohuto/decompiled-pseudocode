/*
 * XREFs of PsIsHostSilo @ 0x14000A920
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     IopAllocRealFileObject @ 0x1405D8060 (IopAllocRealFileObject.c)
 *     SeCreateClientSecurityEx @ 0x1405DDE10 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x1405DE000 (SepCreateClientSecurityEx.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 *     PspEstimateNewProcessServerSilo @ 0x140618978 (PspEstimateNewProcessServerSilo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140634D1C (EtwpWriteAppStateChangeSummary.c)
 *     PspMapSiloSharedDataView @ 0x140679EF4 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140679F2C (MmMapApiSetView.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406861CC (IopAllocateFoExtensionsOnCreate.c)
 *     PopTransitionCheckpoint @ 0x140725C1C (PopTransitionCheckpoint.c)
 *     DbgkRegisterErrorPort @ 0x1407287E4 (DbgkRegisterErrorPort.c)
 *     ObpInitializeRootNamespace @ 0x14074F160 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074F5C4 (ObpCreateDosDevicesDirectory.c)
 *     PsRegisterSiloMonitor @ 0x1407598D0 (PsRegisterSiloMonitor.c)
 *     SepRmCommandServerThread @ 0x1407639D0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140763B3C (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14076CFF8 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x140780C34 (ObInitServerSilo.c)
 *     PspCatchCriticalBreak @ 0x1408C9944 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x1408D9F44 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x1408E01B4 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
