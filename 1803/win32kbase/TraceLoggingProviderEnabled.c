/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1C004076C
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C003FDE0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1C0126888 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C01681AC (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // r9

  v3 = 0;
  if ( *(_DWORD *)hProvider )
    return TlgKeywordOn(hProvider, eventKeyword) != 0;
  return v3;
}
