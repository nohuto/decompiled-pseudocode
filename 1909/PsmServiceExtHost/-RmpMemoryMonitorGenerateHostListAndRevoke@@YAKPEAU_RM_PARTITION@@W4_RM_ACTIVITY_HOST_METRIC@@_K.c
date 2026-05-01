/*
 * XREFs of ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18007206C
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180070F6C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800725D8 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180072770 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18006E44C (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006E9DC (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 */

__int64 __fastcall RmpMemoryMonitorGenerateHostListAndRevoke(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a6)
{
  __int64 v7; // rsi
  int v9; // ecx
  int v10; // ecx
  __int16 v12; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  __int16 *v14; // [rsp+60h] [rbp-48h]
  int v15; // [rsp+68h] [rbp-40h]
  int v16; // [rsp+6Ch] [rbp-3Ch]
  __int64 v17; // [rsp+70h] [rbp-38h]
  int v18; // [rsp+78h] [rbp-30h]
  int v19; // [rsp+7Ch] [rbp-2Ch]

  v7 = a1 + 144;
  if ( a4 == 1 )
    v9 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 516LL);
  else
    v9 = 0;
  RmpPolicyGenerateReclaimListForCommit(a1, v7, 0LL, a3, v9, a4);
  if ( *(_DWORD *)(a1 + 184) )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v10 = *(unsigned __int16 *)(a1 + 184);
      v16 = 0;
      v12 = v10;
      v19 = 0;
      v14 = &v12;
      v17 = *(_QWORD *)(a1 + 152);
      v18 = 8 * v10;
      v15 = 2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180095CA3, 0LL, 0LL, 4u, &pData);
    }
    RmpPolicyReclaimHostList(v7, a4, a5, 0LL, a6);
  }
  return *(unsigned int *)(a1 + 184);
}
