/*
 * XREFs of ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0005BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1C017C2B4 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 */

void __fastcall W32kBaseInputEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode - 1 <= 1 )
    CPTPProcessor::TraceEnvironment();
}
