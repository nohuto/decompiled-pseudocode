/*
 * XREFs of ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006E28C
 * Callers:
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x1800203A0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 * Callees:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18006E7F0 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 */

void __fastcall RmpPolicyEnsureMetricsForAcquire(struct _RM_PARTITION *a1, struct _RM_SYSTEM_MEMORY_METRICS *a2)
{
  struct _RM_POLICY_WORK_BUFFER *v2; // rbx

  v2 = (struct _RM_PARTITION *)((char *)a1 + 144);
  RmpPolicyPopulateActivityHostMetrics(a1, 0LL, (char *)a1 + 144, 67LL, RmpPolicyFilterActivityHostWithFlags, 2LL);
  RmpPolicyPopulateFastCommitUse(a2, v2);
}
