/*
 * XREFs of PnpDiagnosticTraceDriverInitPhaseStart @ 0x14019E44C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWriteStartScenario @ 0x140748F90 (EtwWriteStartScenario.c)
 */

__int64 PnpDiagnosticTraceDriverInitPhaseStart()
{
  if ( PnpEtwHandle )
    return EtwWriteStartScenario(PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Start, &PnpDriverInitPhaseActivityId, 0, 0LL);
  else
    return 0LL;
}
