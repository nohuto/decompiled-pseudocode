/*
 * XREFs of ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180072770
 * Callers:
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180071430 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180037130 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18003AFAC (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180067F98 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18006E7F0 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x18006E868 (-RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18007206C (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeExtraActivities(
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **a1,
        unsigned __int64 a2)
{
  __int64 v2; // r14
  unsigned int v5; // edi
  __int64 v6; // rdx
  int HostListAndRevoke; // ebx
  const struct _TlgProvider_t *v8; // rcx
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v11[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+70h] [rbp-90h]
  _BYTE v15[128]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF

  v2 = (__int64)*a1;
  v11[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v11;
  v11[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v11;
  v11[2] = a1[4];
  RmpAcquireGlobalLock();
  RmpPolicyPrepareToCheckMetrics(
    (struct _RM_PARTITION *)v2,
    (struct _RM_POLICY *)(*((_QWORD *)*a1 + 3) + 400LL),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v15,
    (struct _RM_SYSTEM_MEMORY_METRICS *)v12);
  v5 = 2;
  RmpPolicyPopulateActivityHostMetrics(
    (struct _RM_PARTITION *)v2,
    0,
    v2 + 144,
    67,
    (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpPolicyFilterActivityHostWithFlags,
    (void *)2);
  RmpPolicyPopulateFastCommitUse((struct _RM_SYSTEM_MEMORY_METRICS *)v12, (struct _RM_POLICY_WORK_BUFFER *)(v2 + 144));
  if ( v13 - v14 < a2 )
  {
    v5 = 3;
LABEL_14:
    RmpReleaseGlobalLock();
    return v5;
  }
  if ( !*(_DWORD *)(v2 + 180) )
    goto LABEL_14;
  HostListAndRevoke = RmpMemoryMonitorGenerateHostListAndRevoke(
                        v2,
                        v6,
                        v13 - v14 - a2,
                        1u,
                        5u,
                        (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v11);
  RmpReleaseGlobalLock();
  if ( HostListAndRevoke )
  {
    if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                         (struct _RM_MEMORY_MONITOR_DATA *)a1,
                         13,
                         *((_DWORD *)a1 + 18),
                         (enum _RM_MEMORY_MONITOR_EVENT *)&v10) )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        TlgWrite(v8, &unk_180096321, 0LL, 0LL, 2u, &pData);
      v5 = 1;
    }
    else if ( v10 == 2 )
    {
      v5 = 4;
    }
    else
    {
      v5 = 0;
    }
    RmpAcquireGlobalLock();
    RmpActivityHostCleanupRemediationGroup(v11);
    goto LABEL_14;
  }
  return v5;
}
