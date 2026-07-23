/*
 * XREFs of DbgSetDebugFilterState @ 0x1800E1FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return ZwSetDebugFilterState(ComponentId, Level, State);
}
