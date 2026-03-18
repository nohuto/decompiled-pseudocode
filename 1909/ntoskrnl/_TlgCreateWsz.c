/*
 * XREFs of _TlgCreateWsz @ 0x14008BAAC
 * Callers:
 *     PopTraceThermalZonePassiveHistogram @ 0x140166E88 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140167004 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1401672B0 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14016747C (PopTraceThermalRequestActiveActivity.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x140172C20 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopTraceZoneCr3Mitigated @ 0x1402FF2D8 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1402FF404 (PopTraceZoneCr3Tripped.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140637AD4 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessStarted @ 0x1406380D4 (EtwpWriteProcessStarted.c)
 *     PopLogPowerRequestAction @ 0x140671F98 (PopLogPowerRequestAction.c)
 *     PnpTraceDeviceConfig @ 0x1406FEEA8 (PnpTraceDeviceConfig.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407898F8 (PopThermalHandlePreviousShutdown.c)
 *     IoGetEnvironmentVariableEx @ 0x14085AAD4 (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x14085ADC0 (IoSetEnvironmentVariableEx.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x1408AE99C (PopDiagTraceDozeDeferralDecision.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B6CC4 (PopPublishAndPurgePowerRequestStats.c)
 *     PopSqmThermalCriticalEvent @ 0x1408B99A0 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1408B9CC0 (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1408C07B8 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1408C0BC8 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( pwsz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( pwsz[v2] );
  }
  pDesc->Reserved = 0;
  if ( !pwsz )
    pwsz = (LPCWSTR)&::pwsz;
  pDesc->Ptr = (ULONGLONG)pwsz;
  pDesc->Size = 2 * v2 + 2;
}
