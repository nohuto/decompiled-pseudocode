/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x1408EE280
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x14071EAB8 (PerfDiagpRequestState.c)
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
