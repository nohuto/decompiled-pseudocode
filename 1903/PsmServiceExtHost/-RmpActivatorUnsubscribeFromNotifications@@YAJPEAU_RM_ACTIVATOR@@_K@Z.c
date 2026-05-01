/*
 * XREFs of ?RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x18000B51C
 * Callers:
 *     ?RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x18000B39C (-RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 * Callees:
 *     ?RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z @ 0x18000B5D4 (-RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z.c)
 *     ?RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003AF90 (-RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall RmpActivatorUnsubscribeFromNotifications(struct _RM_ACTIVATOR *a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned int v3; // edi
  unsigned __int64 v4; // rbx
  int v5; // esi
  int v7; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (unsigned __int64)a1 + 40;
  v3 = 0;
  v4 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
  {
    if ( v4 )
      v4 ^= v2;
    else
      v4 = 0LL;
  }
  v5 = *(_BYTE *)(v2 + 8) & 1;
  if ( !v4 )
    return (unsigned int)-1073741275;
  do
  {
    v7 = RmpHostSubscriptionCompareForRtlTree(&v9, (struct _RTL_BALANCED_NODE *)v4);
    if ( v7 >= 0 )
    {
      if ( v7 <= 0 )
        break;
      v8 = *(_QWORD *)(v4 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v4;
    }
    if ( v5 && v8 )
      v4 ^= v8;
    else
      v4 = v8;
  }
  while ( v4 );
  if ( v4 )
  {
    RmpHostSubscriptionCleanup((struct _RM_HOST_SUBSCRIPTION *)(v4 - 24), 0);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)(v4 - 24));
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v3;
}
