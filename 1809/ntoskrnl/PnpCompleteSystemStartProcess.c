/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x14018B1D4
 * Callers:
 *     PnpDeviceActionWorker @ 0x14015F300 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x1401371E4 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x1406C67F0 (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x1407165A0 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x1407503C4 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x140750478 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x1407504FC (PiInitReleaseCachedGroupInformation.c)
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
