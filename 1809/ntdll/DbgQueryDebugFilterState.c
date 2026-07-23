/*
 * XREFs of DbgQueryDebugFilterState @ 0x1800E1FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return ZwQueryDebugFilterState(ComponentId, Level);
}
