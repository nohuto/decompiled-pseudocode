/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1C003126C
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6B0 (NdisMSetMiniportAttributes.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00C8E78 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031294 (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // r9

  v3 = 0;
  if ( hProvider->LevelPlus1 )
    return TlgKeywordOn(hProvider, 0LL) != 0;
  return v3;
}
