/*
 * XREFs of TtmpTraceLoggingCallback @ 0x140887870
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x1408814B4 (TtmiSessionsRundown.c)
 */

void __fastcall TtmpTraceLoggingCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
    TtmiSessionsRundown();
}
