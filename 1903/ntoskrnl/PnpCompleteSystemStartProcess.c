/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1401947F4
 * Callers:
 *     PnpDeviceActionWorker @ 0x14015D540 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x140153D94 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x140708844 (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x140747A50 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x140774A40 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x140774AF4 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x140774B78 (PiInitReleaseCachedGroupInformation.c)
 */

NTSTATUS PnpCompleteSystemStartProcess()
{
  __int64 v0; // rcx
  NTSTATUS result; // eax

  PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Start, 0, 0LL);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Start, 0, 0LL);
  LOBYTE(v0) = 1;
  IopCallDriverReinitializationRoutines(v0);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Stop, 0, 0LL);
  PnPInitialized = 1;
  KeSetEvent(&PnpSystemDeviceEnumerationComplete, 0, 0);
  PiInitReleaseCachedGroupInformation();
  PpReleaseBootDDB();
  KseShimDatabaseBootRelease();
  result = PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Stop, 0, 0LL);
  if ( PnpEtwHandle )
    return EtwWriteEndScenario(PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Stop, &PnpDriverInitPhaseActivityId, 0, 0LL);
  return result;
}
