/*
 * XREFs of DbgSetDebugFilterState @ 0x14018E900
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x140766F20 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
