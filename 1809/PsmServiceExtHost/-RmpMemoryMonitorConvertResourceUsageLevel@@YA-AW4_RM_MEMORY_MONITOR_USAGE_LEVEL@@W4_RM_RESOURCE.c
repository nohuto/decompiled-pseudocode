/*
 * XREFs of ?RmpMemoryMonitorConvertResourceUsageLevel@@YA?AW4_RM_MEMORY_MONITOR_USAGE_LEVEL@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180038518
 * Callers:
 *     ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@1@Z @ 0x180038474 (-RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpMemoryMonitorConvertResourceUsageLevel(int a1)
{
  unsigned int v1; // edx

  if ( a1 > 1 )
  {
    v1 = 2;
    if ( a1 == 2 )
      return 1;
    if ( (unsigned int)(a1 - 3) <= 1 )
      return v1;
  }
  return 0;
}
