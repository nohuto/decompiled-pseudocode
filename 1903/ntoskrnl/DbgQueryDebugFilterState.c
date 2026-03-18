/*
 * XREFs of DbgQueryDebugFilterState @ 0x14030B1A0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x1401266C0 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
