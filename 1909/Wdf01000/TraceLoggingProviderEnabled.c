/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1C005AE10
 * Callers:
 *     FxAllocateDriverGlobals @ 0x1C0059154 (FxAllocateDriverGlobals.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0092BF8 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0043680 (_TlgKeywordOn.c)
 */

bool __fastcall TraceLoggingProviderEnabled(
        const _TlgProvider_t *hProvider,
        unsigned __int8 a2,
        unsigned __int64 eventLevel)
{
  char v3; // r9

  v3 = 0;
  if ( hProvider->LevelPlus1 )
    return TlgKeywordOn(hProvider, 0LL) != 0;
  return v3;
}
