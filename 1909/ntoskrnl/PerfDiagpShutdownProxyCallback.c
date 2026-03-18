/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x1408EDB90
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x140720948 (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpShutdownProxyCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    if ( Level == 85 )
      PerfDiagpRequestState(7);
  }
}
