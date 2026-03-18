/*
 * XREFs of NtGdiDestroyPhysicalMonitor @ 0x1C026F080
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x1C026EC6C (-DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall NtGdiDestroyPhysicalMonitor(CMonitorAPI *a1)
{
  return CMonitorAPI::DestroyPhysicalMonitor(a1, a1);
}
