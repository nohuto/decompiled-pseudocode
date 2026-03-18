/*
 * XREFs of _TlgCreateWsz @ 0x140012934
 * Callers:
 *     PopTraceThermalZonePassiveHistogram @ 0x1401425D0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x140171400 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402E26CC (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x1402E2A04 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1402E2B30 (PopTraceZoneCr3Tripped.c)
 *     PopLogPowerRequestAction @ 0x140589C44 (PopLogPowerRequestAction.c)
 *     EtwpWriteProcessStarted @ 0x1405B2408 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405B2694 (EtwpWriteAppStateChangeSummary.c)
 *     PnpTraceDeviceConfig @ 0x1406F6A68 (PnpTraceDeviceConfig.c)
 *     PopThermalHandlePreviousShutdown @ 0x140760834 (PopThermalHandlePreviousShutdown.c)
 *     IoGetEnvironmentVariableEx @ 0x14082131C (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140821608 (IoSetEnvironmentVariableEx.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x1408723B0 (PopDiagTraceDozeDeferralDecision.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14087AE3C (PopPublishAndPurgePowerRequestStats.c)
 *     PopSqmThermalCriticalEvent @ 0x14087C6D0 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x14087C9F0 (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x140883158 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x140883568 (TtmiLogDeviceEnumeratedTerminalEvent.c)
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
