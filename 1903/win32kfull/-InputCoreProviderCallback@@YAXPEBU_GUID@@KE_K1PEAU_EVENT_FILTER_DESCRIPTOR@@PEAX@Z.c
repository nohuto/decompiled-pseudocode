/*
 * XREFs of ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01EC390
 * Callers:
 *     <none>
 * Callees:
 *     ?CursorSuppressionState@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1C01EC2F8 (-CursorSuppressionState@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void __fastcall InputCoreProviderCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( !(unsigned int)UserIsDisconnectConnection(SourceId, ControlCode, Level, MatchAnyKeyword) )
    InputTraceLogging::Cursor::CursorSuppressionState();
}
