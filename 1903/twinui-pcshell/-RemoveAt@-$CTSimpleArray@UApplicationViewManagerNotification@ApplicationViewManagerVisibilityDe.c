/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x180158F20
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180028D90 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x180158AC4 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 * Callees:
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 *     ??_GApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAAPEAXI@Z @ 0x180158548 (--_GApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v5; // rsi
  __int64 v6; // r8

  if ( a2 >= a1[1] )
    return 2147650721LL;
  v5 = 32 * a2;
  ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::`scalar deleting destructor'((ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)(32 * a2 + *a1));
  v6 = a1[1];
  if ( a2 != v6 - 1 )
  {
    memmove_0((void *)(v5 + *a1), (const void *)(v5 + *a1 + 32), 32 * (v6 - a2) - 32);
    v6 = a1[1];
  }
  a1[1] = v6 - 1;
  return 0LL;
}
