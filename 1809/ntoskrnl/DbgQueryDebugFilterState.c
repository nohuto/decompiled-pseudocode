/*
 * XREFs of DbgQueryDebugFilterState @ 0x1402ECBC0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140126570 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
