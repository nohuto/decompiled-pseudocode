/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x180071530
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006E064 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x18007149C (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostsForCommitSave(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax

  v2 = *((_QWORD *)a1 + 6);
  result = RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(a1, a2);
  if ( !(_DWORD)result )
  {
    if ( !RmpPolicyActivityHostIsValidEmptyTarget((struct _RM_ACTIVITY_HOST *)v2) )
      return 0LL;
    v6 = *((_QWORD *)a1 + 1) >> 1;
    if ( (*(_BYTE *)(v2 + 1465) & 1) == 0 )
      v6 = *((_QWORD *)a1 + 1);
    v7 = *((_QWORD *)a2 + 1) >> 1;
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 6) + 1465LL) & 1) == 0 )
      v7 = *((_QWORD *)a2 + 1);
    if ( v6 > v7 )
      return 0xFFFFFFFFLL;
    return v6 < v7;
  }
  return result;
}
