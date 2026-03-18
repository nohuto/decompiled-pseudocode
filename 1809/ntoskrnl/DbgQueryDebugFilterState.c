/*
 * XREFs of DbgQueryDebugFilterState @ 0x1402EC8D0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140126480 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
