/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180063E7C
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x1800407A0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000CBD4 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180013338 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001B000 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180036290 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180036CD8 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005B1E4 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180064F7C (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 */

void __fastcall RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_RESOURCE_USAGE_LIMITS *a2)
{
  struct _RM_PARTITION *v2; // r13
  __int64 v5; // rbx
  __int64 v6; // rdi
  const struct _TlgProvider_t *v7; // rcx
  unsigned __int64 v8; // r10
  unsigned int v9; // edx
  unsigned __int64 i; // rax
  __int64 v11; // rcx
  unsigned __int64 *v12; // r15
  const struct _TlgProvider_t *v13; // rcx
  int v14; // r9d
  const struct _TlgProvider_t *v15; // rcx
  int v16; // r9d
  __int64 v17; // rdx
  unsigned __int64 v18; // r10
  UCHAR v19; // dl
  const struct _TlgProvider_t *v20; // rcx
  int v21; // r10d
  const struct _TlgProvider_t *v22; // rcx
  const struct _TlgProvider_t *v23; // rcx
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v26[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v27[16]; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[16]; // [rsp+B0h] [rbp-50h] BYREF
  char v30; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR v31; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  char *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  int *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF

  v2 = *(struct _RM_PARTITION **)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v26[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v26;
  v26[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v26;
  v26[2] = *((struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)a1 + 4);
  RmpPolicyPrepareToCheckMetrics(v2, (struct _RM_POLICY *)(v5 + 400), a2, 0LL);
  RmpAcquireGlobalLock();
  v6 = *(_QWORD *)a1 + 144LL;
  *(_WORD *)(v6 + 44) = 0;
  RmpPolicyPopulateActivityHostMetrics(
    v2,
    *(_DWORD *)(v5 + 516),
    v6,
    3u,
    (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpMemoryMonitorActiveLowPriFilterCallback,
    0LL);
  if ( *(_DWORD *)(v6 + 36) )
  {
    v25 = 0LL;
    v8 = 0LL;
    v9 = 0;
    for ( i = 0LL; v9 < *(_DWORD *)(v6 + 36); i = v8 )
    {
      v11 = v9++;
      v8 += *(_QWORD *)((v11 << 6) + *(_QWORD *)v6);
      v25 = v8;
    }
    v12 = (unsigned __int64 *)((char *)a2 + 96);
    if ( i >= *v12 )
    {
      if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      {
        v33 = 8LL;
        v32 = (__int64 *)&v25;
        v36 = &v24;
        v34 = (char *)v12;
        v35 = 8LL;
        v24 = v16;
        v37 = 4LL;
        TlgWrite(v15, &unk_1800883C3, 0LL, 0LL, 5u, &v31);
      }
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_18009B0B0, v9, 1uLL) )
      {
        RmpSystemMemoryMetricsQuery(v2, (struct _RM_SYSTEM_MEMORY_METRICS *)v27);
        v18 = v25;
      }
      RmpMemoryMonitorGenerateHostListAndRevoke(v2, v17, *v12 - v18, 1LL, 5, v26);
      RmpReleaseGlobalLock();
      RmpMemoryMonitorWaitForEvents(a1, 13, *((_DWORD *)a1 + 18), (enum _RM_MEMORY_MONITOR_EVENT *)&v24);
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_18009B0B0, v19, 1uLL) )
      {
        if ( v21 )
        {
          if ( dword_18009B0B0 > 4u && TlgKeywordOn(v20, 0x200000000001uLL) )
            TlgWrite(v23, &unk_1800887D8, 0LL, 0LL, 2u, &pData);
        }
        else
        {
          RmpSystemMemoryMetricsQuery(v2, (struct _RM_SYSTEM_MEMORY_METRICS *)v29);
          if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x200000000001uLL) )
          {
            v32 = (__int64 *)&v24;
            v34 = &v28;
            v36 = (int *)&v30;
            v33 = 4LL;
            v35 = 8LL;
            v37 = 8LL;
            TlgWrite(v22, &unk_1800884DA, 0LL, 0LL, 5u, &v31);
          }
        }
      }
      RmpAcquireGlobalLock();
    }
    else if ( dword_18009B0B0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    {
      v33 = 8LL;
      v32 = (__int64 *)&v25;
      v36 = &v24;
      v34 = (char *)v12;
      v35 = 8LL;
      v24 = v14;
      v37 = 4LL;
      TlgWrite(v13, &unk_180088598, 0LL, 0LL, 5u, &v31);
    }
  }
  else if ( dword_18009B0B0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
  {
    TlgWrite(v7, &unk_1800881D9, 0LL, 0LL, 2u, &pData);
  }
  RmpActivityHostCleanupRemediationGroup(v26);
  RmpReleaseGlobalLock();
}
