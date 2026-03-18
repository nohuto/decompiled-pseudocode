/*
 * XREFs of _TlgKeywordOn @ 0x1C0001040
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C000830C (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword
    || (keyword & *((_QWORD *)hProvider + 2)) != 0
    && (keyword & *((_QWORD *)hProvider + 3)) == *((_QWORD *)hProvider + 3) )
  {
    return 1;
  }
  return v2;
}
