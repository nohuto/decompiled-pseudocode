/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x140194FD4
 * Callers:
 *     PnpDeviceActionWorker @ 0x14015DBE0 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x140154434 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x14070A624 (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x140749950 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x140778020 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x1407780D4 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x140778158 (PiInitReleaseCachedGroupInformation.c)
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
