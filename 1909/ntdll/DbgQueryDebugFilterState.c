/*
 * XREFs of DbgQueryDebugFilterState @ 0x1800DFC10
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
