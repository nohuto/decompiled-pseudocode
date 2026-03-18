/*
 * XREFs of PerfDiagpSecondaryLogonProxyCallback @ 0x1408B0DD0
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x14075F05C (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpSecondaryLogonProxyCallback(
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
    v4 = 5;
  }
  else
  {
    v4 = 6;
  }
  PerfDiagpRequestState(v4);
}
