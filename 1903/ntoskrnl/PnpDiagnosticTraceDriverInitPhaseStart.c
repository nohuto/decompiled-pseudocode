/*
 * XREFs of PnpDiagnosticTraceDriverInitPhaseStart @ 0x14019DD2C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWriteStartScenario @ 0x140747090 (EtwWriteStartScenario.c)
 */

__int64 PnpDiagnosticTraceDriverInitPhaseStart()
{
  if ( PnpEtwHandle )
    return EtwWriteStartScenario(PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Start, &PnpDriverInitPhaseActivityId, 0, 0LL);
  else
    return 0LL;
}
