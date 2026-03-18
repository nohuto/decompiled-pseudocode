/*
 * XREFs of EtwpKernelProvEnableCallback @ 0x14078C890
 * Callers:
 *     <none>
 * Callees:
 *     SeEtwEnableCallback @ 0x14019E22C (SeEtwEnableCallback.c)
 */

void __fastcall EtwpKernelProvEnableCallback(
        __int64 SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        int **FilterData)
{
  int v6; // [rsp+20h] [rbp-28h]

  SeEtwEnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword, v6, FilterData);
}
