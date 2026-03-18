/*
 * XREFs of DbgSetDebugFilterState @ 0x14018F210
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x14076BA20 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
