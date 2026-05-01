/*
 * XREFs of ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180036F1C
 * Callers:
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180036D50 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036EAC (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x180037084 (-RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCES.c)
 *     ?RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU_MEMUTIL_PROCESS_METRICS@@G@Z @ 0x180037238 (-RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU.c)
 *     MemUtilQueryProcessMetrics @ 0x180037520 (MemUtilQueryProcessMetrics.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall RmpSystemQueryMemUtilMetricsForHosts(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        unsigned __int16 a3)
{
  int v4; // ebx
  SIZE_T v5; // rbx
  __int64 v6; // rsi
  struct _MEMUTIL_PROCESS_METRICS *Heap; // rax
  struct _MEMUTIL_PROCESS_METRICS *v8; // rdi
  unsigned int v9; // ebx
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR *v10; // r14
  struct _MEMUTIL_PROCESS_METRICS *v11; // rcx
  int *v12; // rdx
  int v13; // eax
  unsigned int v14; // r9d
  __int64 v15; // r8
  const struct _TlgProvider_t *v17; // rcx
  int v18; // r9d
  unsigned int v19; // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+38h] [rbp-48h] BYREF
  int v21; // [rsp+40h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  int *v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+74h] [rbp-Ch]

  P = 0LL;
  v4 = RmpActivityHostQueryProcessListForMetrics(a1, a2, (struct _RM_PROCESS_ID_HOST_METRICS_PAIR **)&P, &v19);
  if ( v4 >= 0 )
  {
    if ( v19 )
    {
      v5 = (unsigned __int64)v19 << 6;
      v6 = v19;
      Heap = (struct _MEMUTIL_PROCESS_METRICS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      v8 = Heap;
      if ( Heap )
      {
        memset_0(Heap, 0, v5);
        v9 = v19;
        v10 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
        if ( v19 )
        {
          v11 = v8;
          v12 = (int *)((char *)P + 8);
          do
          {
            v13 = *v12;
            v12 += 4;
            *(_DWORD *)v11 = v13;
            v11 = (struct _MEMUTIL_PROCESS_METRICS *)((char *)v11 + 64);
            --v6;
          }
          while ( v6 );
        }
        v14 = (2 * (a3 & 4)) | 1;
        if ( (a3 & 8) == 0 )
          v14 = 2 * (a3 & 4);
        v15 = v14 | 0x40;
        if ( (a3 & 0x20) == 0 )
          v15 = v14;
        if ( (unsigned int)MemUtilQueryProcessMetrics(v8, v9, v15) )
        {
          if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
          {
            v25 = 0;
            v23 = &v21;
            v21 = v18;
            v24 = 4;
            TlgWrite(v17, &unk_180088C0D, 0LL, 0LL, 3u, &pData);
          }
          v4 = -1073741823;
        }
        else
        {
          RmpActivityHostAggregateMemUtilMetricsByProcess(v10, v9, v8, a3);
          v4 = 0;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      }
      else
      {
        v4 = -1073741801;
      }
    }
    else
    {
      v4 = 0;
    }
  }
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return (unsigned int)v4;
}
