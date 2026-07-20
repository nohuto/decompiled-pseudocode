/*
 * XREFs of RtlLookupFunctionEntry_0 @ 0x14000D4FE
 * Callers:
 *     __report_gsfailure @ 0x14000D2A0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry_0(
        DWORD64 ControlPc,
        PDWORD64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  return RtlLookupFunctionEntry(ControlPc, ImageBase, HistoryTable);
}
