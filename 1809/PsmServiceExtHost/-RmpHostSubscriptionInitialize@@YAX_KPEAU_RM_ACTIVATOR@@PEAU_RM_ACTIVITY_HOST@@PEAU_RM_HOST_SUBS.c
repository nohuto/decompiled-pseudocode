/*
 * XREFs of ?RmpHostSubscriptionInitialize@@YAX_KPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEAU_RM_HOST_SUBSCRIPTION@@@Z @ 0x18000AD04
 * Callers:
 *     ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000ABCC (-RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 * Callees:
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall RmpHostSubscriptionInitialize(
        __int64 a1,
        struct _RM_ACTIVATOR *a2,
        struct _RM_ACTIVITY_HOST *a3,
        struct _RM_HOST_SUBSCRIPTION *a4)
{
  memset_0(a4, 0, 0x40uLL);
  *(_QWORD *)a4 = a1;
  *((_QWORD *)a4 + 7) = a2;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a3 + 2) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a4 + 5) = -1LL;
  *((_QWORD *)a4 + 6) = a3;
}
