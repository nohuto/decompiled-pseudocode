/*
 * XREFs of PerfDiagpBootSystemProxyCallback @ 0x14078CC50
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x140720948 (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpBootSystemProxyCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  int v4; // ecx

  if ( ControlCode )
  {
    if ( Level != 85 )
      return;
    v4 = 1;
  }
  else
  {
    v4 = 2;
  }
  PerfDiagpRequestState(v4);
}
