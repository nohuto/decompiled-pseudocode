/*
 * XREFs of PsIsHostSilo @ 0x1400B8A60
 * Callers:
 *     ExpTimeZoneDpcRoutine @ 0x140139CA0 (ExpTimeZoneDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1401601A0 (ExpCenturyDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1403197C0 (ExpNextYearDpcRoutine.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405B2694 (EtwpWriteAppStateChangeSummary.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1405F9484 (IopAllocateFoExtensionsOnCreate.c)
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060DB18 (PspEstimateNewProcessServerSilo.c)
 *     SeCreateClientSecurityEx @ 0x140631CE0 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140631EC0 (SepCreateClientSecurityEx.c)
 *     IopAllocRealFileObject @ 0x14063BB00 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     PspMapSiloSharedDataView @ 0x14067842C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140678464 (MmMapApiSetView.c)
 *     PopTransitionCheckpoint @ 0x1406DE600 (PopTransitionCheckpoint.c)
 *     DbgkRegisterErrorPort @ 0x1407024C0 (DbgkRegisterErrorPort.c)
 *     PsRegisterSiloMonitor @ 0x140728850 (PsRegisterSiloMonitor.c)
 *     ObpInitializeRootNamespace @ 0x14072BC8C (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14072C0C8 (ObpCreateDosDevicesDirectory.c)
 *     SepRmCommandServerThread @ 0x1407402C0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140740414 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x140741454 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x140759EC0 (ObInitServerSilo.c)
 *     PspCatchCriticalBreak @ 0x14088B490 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x14089B7E4 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x1408A18F4 (SepUpdateSiloInClientSecurity.c)
 *     ExpTimeZoneWork @ 0x1408CD1D0 (ExpTimeZoneWork.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
