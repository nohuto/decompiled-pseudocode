/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180071A40
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180039404 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006E064 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x1800721AC (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 */

bool __fastcall RmpMemoryMonitorEmptyPolicyFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  char v2; // bp
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  bool result; // al

  v2 = (char)a2;
  result = 0;
  if ( !*((_DWORD *)a1 + 312) )
  {
    v4 = RmpPolicyComputeDesiredEmptyState(*((_QWORD *)a1 + 6) + 400LL, (__int64)a1, 1);
    v5 = v4 & *((_DWORD *)a1 + 311);
    v6 = v4;
    if ( RmpPolicyActivityHostIsValidEmptyTarget(a1) && (v5 != v6 || (v2 & 0x20) == 0) )
      return 1;
    if ( (v2 & 1) != 0 && v5 != v6 && RmpMemoryMonitorIsLargeAppTerminationTarget(a1, 0LL) )
      return 1;
  }
  return result;
}
