/*
 * XREFs of PsIsHostSilo @ 0x1400B89C0
 * Callers:
 *     ExpTimeZoneDpcRoutine @ 0x140139DC0 (ExpTimeZoneDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1401602C0 (ExpCenturyDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x140319AB0 (ExpNextYearDpcRoutine.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405B3694 (EtwpWriteAppStateChangeSummary.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1405FA484 (IopAllocateFoExtensionsOnCreate.c)
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060EB18 (PspEstimateNewProcessServerSilo.c)
 *     SeCreateClientSecurityEx @ 0x140632D00 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140632EE0 (SepCreateClientSecurityEx.c)
 *     IopAllocRealFileObject @ 0x14063CB20 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     PspMapSiloSharedDataView @ 0x1406795CC (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140679604 (MmMapApiSetView.c)
 *     PopTransitionCheckpoint @ 0x1406DF880 (PopTransitionCheckpoint.c)
 *     DbgkRegisterErrorPort @ 0x140703740 (DbgkRegisterErrorPort.c)
 *     PsRegisterSiloMonitor @ 0x140729A20 (PsRegisterSiloMonitor.c)
 *     ObpInitializeRootNamespace @ 0x14072CE5C (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14072D298 (ObpCreateDosDevicesDirectory.c)
 *     SepRmCommandServerThread @ 0x140741490 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407415E4 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x140742624 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x14075B090 (ObInitServerSilo.c)
 *     PspCatchCriticalBreak @ 0x14088C6D0 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x14089CA24 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x1408A2B34 (SepUpdateSiloInClientSecurity.c)
 *     ExpTimeZoneWork @ 0x1408CE470 (ExpTimeZoneWork.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
