/*
 * XREFs of PnpDiagnosticTraceDriverInitPhaseStart @ 0x14019373C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWriteStartScenario @ 0x140716670 (EtwWriteStartScenario.c)
 */

__int64 PnpDiagnosticTraceDriverInitPhaseStart()
{
  if ( PnpEtwHandle )
    return EtwWriteStartScenario(PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Start, &PnpDriverInitPhaseActivityId, 0, 0LL);
  else
    return 0LL;
}
