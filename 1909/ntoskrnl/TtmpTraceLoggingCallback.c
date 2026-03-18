/*
 * XREFs of TtmpTraceLoggingCallback @ 0x1408C3DE0
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x1408BD7E0 (TtmiSessionsRundown.c)
 */

void __fastcall TtmpTraceLoggingCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
    TtmiSessionsRundown();
}
