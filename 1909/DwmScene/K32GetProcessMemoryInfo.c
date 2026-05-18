/*
 * XREFs of K32GetProcessMemoryInfo @ 0x18012771A
 * Callers:
 *     sub_180073BC4 @ 0x180073BC4 (sub_180073BC4.c)
 *     sub_18007BA30 @ 0x18007BA30 (sub_18007BA30.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall K32GetProcessMemoryInfo(HANDLE Process, PPROCESS_MEMORY_COUNTERS ppsmemCounters, DWORD cb)
{
  return __imp_K32GetProcessMemoryInfo(Process, ppsmemCounters, cb);
}
