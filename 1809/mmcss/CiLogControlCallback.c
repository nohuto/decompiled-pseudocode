/*
 * XREFs of CiLogControlCallback @ 0x1C000C1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CiLogControlCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    RegHandle = CiLoggerContext;
    byte_1C00072E8 = 1;
  }
  else
  {
    RegHandle = 0LL;
    byte_1C00072E8 = 0;
  }
}
