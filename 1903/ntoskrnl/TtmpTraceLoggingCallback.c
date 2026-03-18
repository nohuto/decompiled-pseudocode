/*
 * XREFs of TtmpTraceLoggingCallback @ 0x1408C4510
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x1408BDF10 (TtmiSessionsRundown.c)
 */

void __fastcall TtmpTraceLoggingCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
    TtmiSessionsRundown();
}
