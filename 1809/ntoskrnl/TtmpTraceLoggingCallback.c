/*
 * XREFs of TtmpTraceLoggingCallback @ 0x140886610
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x140880254 (TtmiSessionsRundown.c)
 */

void __fastcall TtmpTraceLoggingCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
    TtmiSessionsRundown();
}
