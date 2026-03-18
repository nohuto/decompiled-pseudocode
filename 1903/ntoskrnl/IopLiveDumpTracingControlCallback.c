/*
 * XREFs of IopLiveDumpTracingControlCallback @ 0x14029B5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IopLiveDumpTracingControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  _InterlockedExchange(&IopLiveDumpEtwEnabled, ControlCode != 0);
}
