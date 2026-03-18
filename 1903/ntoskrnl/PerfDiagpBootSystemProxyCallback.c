/*
 * XREFs of PerfDiagpBootSystemProxyCallback @ 0x14078A7B0
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x14071EAB8 (PerfDiagpRequestState.c)
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
