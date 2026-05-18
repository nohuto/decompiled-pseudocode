/*
 * XREFs of K32GetProcessMemoryInfo @ 0x18012760A
 * Callers:
 *     sub_180073AB4 @ 0x180073AB4 (sub_180073AB4.c)
 *     sub_18007B920 @ 0x18007B920 (sub_18007B920.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall K32GetProcessMemoryInfo(HANDLE Process, PPROCESS_MEMORY_COUNTERS ppsmemCounters, DWORD cb)
{
  return __imp_K32GetProcessMemoryInfo(Process, ppsmemCounters, cb);
}
