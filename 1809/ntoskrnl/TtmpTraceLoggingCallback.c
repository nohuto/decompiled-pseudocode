/*
 * XREFs of TtmpTraceLoggingCallback @ 0x140886630
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x140880274 (TtmiSessionsRundown.c)
 */

void __fastcall TtmpTraceLoggingCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
    TtmiSessionsRundown();
}
