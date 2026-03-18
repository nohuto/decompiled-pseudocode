/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x1408B0E00
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x14075F05C (PerfDiagpRequestState.c)
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
