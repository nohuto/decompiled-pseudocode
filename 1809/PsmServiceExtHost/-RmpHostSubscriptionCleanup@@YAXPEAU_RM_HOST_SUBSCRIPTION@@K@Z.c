/*
 * XREFs of ?RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z @ 0x18003AD14
 * Callers:
 *     ?RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x18003AC5C (-RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 *     ?RmpHostSubscriptionDeleteForRtlTree@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18005B15C (-RmpHostSubscriptionDeleteForRtlTree@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpHostSubscriptionCleanup(struct _RM_HOST_SUBSCRIPTION *a1, char a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 **v6; // rdx
  struct _RM_OBJECT_HEADER *v7; // rcx

  v4 = (__int64 *)((char *)a1 + 8);
  v5 = *v4;
  if ( *v4 )
  {
    if ( *(__int64 **)(v5 + 8) != v4 || (v6 = (__int64 **)v4[1], *v6 != v4) )
      __fastfail(3u);
    *v6 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
  v7 = (struct _RM_OBJECT_HEADER *)*((_QWORD *)a1 + 6);
  if ( v7 )
    RmpObjectRelease(v7);
  if ( (a2 & 1) == 0 && *((_QWORD *)a1 + 5) != -1LL )
    RtlRbRemoveNode(*((_QWORD *)a1 + 7) + 40LL, (char *)a1 + 24);
}
