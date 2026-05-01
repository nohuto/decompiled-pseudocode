/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x1800715C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180039404 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006E064 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x18007149C (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostsForEmpty(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v7; // r15
  int v8; // eax
  int v9; // r8d
  int v10; // eax
  int v11; // eax
  int v12; // r8d
  int v13; // r11d
  int v14; // eax
  char v15; // r14
  char v16; // di
  int v17; // eax
  int v18; // r11d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx

  v2 = *((_QWORD *)a1 + 6);
  v4 = *((_QWORD *)a2 + 6);
  result = RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(a1, a2);
  if ( !(_DWORD)result )
  {
    if ( RmpPolicyActivityHostIsValidEmptyTarget((struct _RM_ACTIVITY_HOST *)v2) )
    {
      v7 = *(_QWORD *)(v2 + 48) + 400LL;
      v8 = RmpPolicyComputeDesiredEmptyState(v7, v2, 1);
      if ( (v8 & *(_DWORD *)(v2 + 1244)) != v8 )
      {
        v10 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v4 + 48) + 400LL, v4, v9);
        if ( (v10 & *(_DWORD *)(v4 + 1244)) == v10 )
          return 0xFFFFFFFFLL;
      }
      v11 = RmpPolicyComputeDesiredEmptyState(v7, v2, 1);
      if ( (v11 & v13) == v11 )
      {
        v14 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v4 + 48) + 400LL, v4, v12);
        if ( (v14 & *(_DWORD *)(v4 + 1244)) != v14 )
          return 1LL;
      }
      v15 = *(_BYTE *)(v2 + 1465) & 1;
      v16 = *(_BYTE *)(v4 + 1465) & 1;
      v17 = RmpPolicyComputeDesiredEmptyState(v7, v2, 1);
      if ( (v17 & v18) == v17 )
      {
        v19 = *((_QWORD *)a1 + 4) >> 1;
        if ( !v15 )
          v19 = *((_QWORD *)a1 + 4);
        v20 = *((_QWORD *)a2 + 4) >> 1;
        if ( !v16 )
          v20 = *((_QWORD *)a2 + 4);
      }
      else
      {
        v19 = *((_QWORD *)a1 + 3) >> 1;
        if ( !v15 )
          v19 = *((_QWORD *)a1 + 3);
        v20 = *((_QWORD *)a2 + 3) >> 1;
        if ( !v16 )
          v20 = *((_QWORD *)a2 + 3);
      }
      if ( v19 > v20 )
        return 0xFFFFFFFFLL;
      if ( v19 < v20 )
        return 1LL;
    }
    return 0LL;
  }
  return result;
}
