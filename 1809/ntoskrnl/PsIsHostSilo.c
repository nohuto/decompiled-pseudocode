/*
 * XREFs of PsIsHostSilo @ 0x1400B8A80
 * Callers:
 *     ExpTimeZoneDpcRoutine @ 0x140139CC0 (ExpTimeZoneDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1401601C0 (ExpCenturyDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1403198C0 (ExpNextYearDpcRoutine.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405B2694 (EtwpWriteAppStateChangeSummary.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1405F9484 (IopAllocateFoExtensionsOnCreate.c)
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060DB18 (PspEstimateNewProcessServerSilo.c)
 *     SeCreateClientSecurityEx @ 0x140631CE0 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140631EC0 (SepCreateClientSecurityEx.c)
 *     IopAllocRealFileObject @ 0x14063BB00 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     PspMapSiloSharedDataView @ 0x14067840C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140678444 (MmMapApiSetView.c)
 *     PopTransitionCheckpoint @ 0x1406DE5E0 (PopTransitionCheckpoint.c)
 *     DbgkRegisterErrorPort @ 0x1407024A0 (DbgkRegisterErrorPort.c)
 *     PsRegisterSiloMonitor @ 0x140728830 (PsRegisterSiloMonitor.c)
 *     ObpInitializeRootNamespace @ 0x14072BC6C (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14072C0A8 (ObpCreateDosDevicesDirectory.c)
 *     SepRmCommandServerThread @ 0x1407402A0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407403F4 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x140741434 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x140759EA0 (ObInitServerSilo.c)
 *     PspCatchCriticalBreak @ 0x14088B470 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x14089B7C4 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x1408A18D4 (SepUpdateSiloInClientSecurity.c)
 *     ExpTimeZoneWork @ 0x1408CD1B0 (ExpTimeZoneWork.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
