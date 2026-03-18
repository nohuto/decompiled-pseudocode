/*
 * XREFs of DbgSetDebugFilterState @ 0x140185D00
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x140740A30 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
