/*
 * XREFs of PsIsHostSilo @ 0x14000A9B0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     IopAllocRealFileObject @ 0x1405D8820 (IopAllocRealFileObject.c)
 *     SeCreateClientSecurityEx @ 0x1405DE5B0 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x1405DE7A0 (SepCreateClientSecurityEx.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     NtQueryInformationJobObject @ 0x140613C40 (NtQueryInformationJobObject.c)
 *     PspEstimateNewProcessServerSilo @ 0x14061A488 (PspEstimateNewProcessServerSilo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140637AD4 (EtwpWriteAppStateChangeSummary.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14064C13C (IopAllocateFoExtensionsOnCreate.c)
 *     PspMapSiloSharedDataView @ 0x14067FFA8 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14067FFE0 (MmMapApiSetView.c)
 *     PopTransitionCheckpoint @ 0x140727ABC (PopTransitionCheckpoint.c)
 *     DbgkRegisterErrorPort @ 0x140729B54 (DbgkRegisterErrorPort.c)
 *     ObpInitializeRootNamespace @ 0x14074FBF0 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140750054 (ObpCreateDosDevicesDirectory.c)
 *     PsRegisterSiloMonitor @ 0x14075E160 (PsRegisterSiloMonitor.c)
 *     SepRmCommandServerThread @ 0x1407683E0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14076854C (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14076FE4C (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x140782F9C (ObInitServerSilo.c)
 *     PspCatchCriticalBreak @ 0x1408C9224 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x1408D9844 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x1408DFAB4 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
