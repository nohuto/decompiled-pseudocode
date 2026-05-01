/*
 * XREFs of ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180036C20
 * Callers:
 *     ?RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800367F0 (-RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006125C (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18006177C (-RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180063E50 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostIsRunnable(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  __int64 result; // rax

  if ( (*((_BYTE *)a1 + 1104) & 4) == 0 )
    return 1LL;
  if ( (*((_BYTE *)a1 + 1106) & 4) == 0 )
    return 1LL;
  result = 0LL;
  if ( !a2 )
    return 1LL;
  return result;
}
