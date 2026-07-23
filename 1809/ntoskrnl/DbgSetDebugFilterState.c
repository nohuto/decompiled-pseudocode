/*
 * XREFs of DbgSetDebugFilterState @ 0x140185E60
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x140741C00 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
