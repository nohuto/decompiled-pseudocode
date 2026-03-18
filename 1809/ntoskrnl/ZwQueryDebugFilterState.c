/*
 * XREFs of ZwQueryDebugFilterState @ 0x1401BA8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&ComponentId, *(_QWORD *)&Level, v2);
}
