/*
 * XREFs of _TlgCreateWsz @ 0x14008A7AC
 * Callers:
 *     PopTraceThermalZonePassiveHistogram @ 0x140167438 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1401675B4 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140167860 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140167A2C (PopTraceThermalRequestActiveActivity.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x1401724F0 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopTraceZoneCr3Mitigated @ 0x1402FF828 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1402FF954 (PopTraceZoneCr3Tripped.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140634D1C (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessStarted @ 0x14063531C (EtwpWriteProcessStarted.c)
 *     PopLogPowerRequestAction @ 0x14069FE80 (PopLogPowerRequestAction.c)
 *     PnpTraceDeviceConfig @ 0x1406FD0C8 (PnpTraceDeviceConfig.c)
 *     PopThermalHandlePreviousShutdown @ 0x14075B3AC (PopThermalHandlePreviousShutdown.c)
 *     IoGetEnvironmentVariableEx @ 0x14085B3D4 (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x14085B6C0 (IoSetEnvironmentVariableEx.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x1408AF13C (PopDiagTraceDozeDeferralDecision.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B73F4 (PopPublishAndPurgePowerRequestStats.c)
 *     PopSqmThermalCriticalEvent @ 0x1408BA0D0 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1408BA3F0 (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1408C0EE8 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1408C12F8 (TtmiLogDeviceEnumeratedTerminalEvent.c)
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
