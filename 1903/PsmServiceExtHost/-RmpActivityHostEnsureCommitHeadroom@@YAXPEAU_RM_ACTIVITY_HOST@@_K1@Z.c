/*
 * XREFs of ?RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180019B30
 * Callers:
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180019180 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18003AFAC (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18006E44C (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18006E7F0 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006E9DC (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 */

void __fastcall RmpActivityHostEnsureCommitHeadroom(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rbx
  _BYTE v8[16]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C8h]
  _BYTE v10[48]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v11; // [rsp+B0h] [rbp-58h]

  if ( a2 > *((_QWORD *)a1 + 147) && a2 < a3 )
  {
    v5 = *((_QWORD *)a1 + 7);
    RmpPolicyPrepareToCheckMetrics(
      (struct _RM_PARTITION *)v5,
      (struct _RM_POLICY *)(*((_QWORD *)a1 + 6) + 400LL),
      (struct _RM_RESOURCE_USAGE_LIMITS *)v10,
      (struct _RM_SYSTEM_MEMORY_METRICS *)v8);
    v6 = v11 - v9;
    v7 = a3 - a2 + 1;
    if ( v11 - v9 < v7 )
    {
      RmpPolicyPopulateActivityHostMetrics(v5, 0LL, v5 + 144, 67LL, RmpPolicyFilterActivityHostWithFlags, 2LL);
      RmpPolicyGenerateReclaimListForCommit(v5, v5 + 144, 0LL, v7 - v6, 0, 2);
      if ( *(_DWORD *)(v5 + 184) )
        RmpPolicyReclaimHostList(v5 + 144, 2LL, 8LL, 0LL, 0LL);
    }
  }
}
