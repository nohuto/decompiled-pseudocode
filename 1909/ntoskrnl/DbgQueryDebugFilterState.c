/*
 * XREFs of DbgQueryDebugFilterState @ 0x14030AC50
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140126D30 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
