/*
 * XREFs of ZwQueryDebugFilterState @ 0x1401C33B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&ComponentId);
}
