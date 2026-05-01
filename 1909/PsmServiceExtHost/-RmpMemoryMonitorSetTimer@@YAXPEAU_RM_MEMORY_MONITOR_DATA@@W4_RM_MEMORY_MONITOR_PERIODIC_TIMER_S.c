/*
 * XREFs of ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180041604
 * Callers:
 *     ?RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18003F8F0 (-RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x1800453D8 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpMemoryMonitorSetTimer(__int64 *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 24) + 2616LL) & 1) == 0 )
  {
    if ( a2 == 1 )
      v4 = 0xFFFFFFFFLL;
    else
      v4 = 1000LL;
    v5 = a1[8];
    v6 = -50000000LL;
    if ( a3 > 0 )
      v6 = -10000000LL;
    v7 = v6;
    return TpSetTimer(v5, &v7, 0LL, v4);
  }
  return result;
}
