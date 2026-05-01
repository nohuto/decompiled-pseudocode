/*
 * XREFs of ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x1800612B0
 * Callers:
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEAXPEBX1@Z @ 0x180061480 (-RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEAXPEBX1@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x1800643AC (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 * Callees:
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180055B9C (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180061804 (-RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 */

__int64 __fastcall RmpPolicyCompareActivityHostsByPriorityAndCommitEx(
        struct _RM_POLICY_RECLAIM_CONTEXT *a1,
        const struct _RM_ACTIVITY_HOST_METRICS *a2,
        const struct _RM_ACTIVITY_HOST_METRICS *a3)
{
  int v5; // r10d
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 result; // rax
  char v10; // r8
  char v11; // r9
  int v12; // r10d
  char v13; // r11
  unsigned __int8 v14; // al
  unsigned __int8 v15; // cl
  int v16; // r10d
  bool v17; // cl
  bool v18; // cf
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 HostCommitForReclaim; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int16 v24; // r9

  if ( a1 )
  {
    v5 = *((_DWORD *)a1 + 2);
    v6 = *((_DWORD *)a1 + 3);
  }
  else
  {
    v5 = 0;
    v6 = 2;
  }
  v7 = *((_QWORD *)a3 + 6);
  v8 = *((_QWORD *)a2 + 6);
  if ( v5 == 1 )
  {
    if ( (*(_WORD *)(v7 + 1106) & 0x10) == 0 && (*(_WORD *)(v8 + 1106) & 0x10) != 0 )
      return 0xFFFFFFFFLL;
    if ( (*(_WORD *)(v7 + 1106) & 0x10) != 0 && (*(_WORD *)(v8 + 1106) & 0x10) == 0 )
      return 1LL;
  }
  result = RmpEmPriorityCompare(*((_DWORD *)a2 + 14), *((_DWORD *)a3 + 14));
  if ( (_DWORD)result )
    return result;
  if ( v13 )
  {
    v14 = *(_BYTE *)(v8 + 1410);
    v15 = *(_BYTE *)(v7 + 1410);
    if ( v14 < v15 )
      return 0xFFFFFFFFLL;
    if ( v14 > v15 )
      return 1LL;
  }
  v16 = v12 - 2;
  if ( v16 )
  {
    if ( v16 != 1 )
      goto LABEL_19;
    if ( (v11 & 0x20) == 0 && (v10 & 0x20) != 0 )
      return 0xFFFFFFFFLL;
    v17 = (v11 & 0x20) != 0;
    v18 = (v10 & 0x20) != 0;
  }
  else
  {
    if ( (v11 & 0x10) == 0 && (v10 & 0x10) != 0 )
      return 0xFFFFFFFFLL;
    v17 = (v11 & 0x10) != 0;
    v18 = (v10 & 0x10) != 0;
  }
  if ( v17 && !v18 )
    return 1LL;
LABEL_19:
  if ( v6 == 1 )
    goto LABEL_22;
  v19 = *(_QWORD *)(v8 + 1152);
  v20 = *(_QWORD *)(v7 + 1152);
  if ( v19 > v20 )
    return 0xFFFFFFFFLL;
  if ( v19 < v20 )
    return 1LL;
LABEL_22:
  RmpPolicyGetHostCommitForReclaim(v6, a2);
  HostCommitForReclaim = RmpPolicyGetHostCommitForReclaim(v6, a3);
  v23 = HostCommitForReclaim >> 1;
  if ( (v24 & *(_WORD *)(v7 + 1408)) == 0 )
    v23 = HostCommitForReclaim;
  if ( v22 > v23 )
    return 0xFFFFFFFFLL;
  return v22 < v23;
}
