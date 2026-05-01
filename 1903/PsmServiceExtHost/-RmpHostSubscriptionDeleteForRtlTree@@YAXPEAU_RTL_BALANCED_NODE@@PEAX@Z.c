/*
 * XREFs of ?RmpHostSubscriptionDeleteForRtlTree@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180067F10
 * Callers:
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x180067DF0 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 * Callees:
 *     ?RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z @ 0x18000B5D4 (-RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z.c)
 */

void __fastcall RmpHostSubscriptionDeleteForRtlTree(struct _RTL_BALANCED_NODE *a1, void *a2)
{
  struct _RTL_BALANCED_NODE *v2; // rbx

  v2 = a1 - 1;
  RmpHostSubscriptionCleanup((struct _RM_HOST_SUBSCRIPTION *)&a1[-1], (char)a2);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
}
