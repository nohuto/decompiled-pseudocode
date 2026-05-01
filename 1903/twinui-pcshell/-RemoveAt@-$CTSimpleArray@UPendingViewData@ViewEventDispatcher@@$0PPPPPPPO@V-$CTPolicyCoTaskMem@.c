/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x18026DF8C
 * Callers:
 *     wil::details::ScopeExitFn__lambda_8061a6914a01b14361eb9c3d0a3e5fbe___::_ScopeExitFn__lambda_8061a6914a01b14361eb9c3d0a3e5fbe___ @ 0x180268C68 (wil--details--ScopeExitFn__lambda_8061a6914a01b14361eb9c3d0a3e5fbe___--_ScopeExitFn__lambda_8061.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x180271974 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x180271ED8 (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x1802746E8 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x180274C20 (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x180274FB8 (-_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z @ 0x180275C3C (-_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 *     ??_GPendingViewData@ViewEventDispatcher@@QEAAPEAXI@Z @ 0x18026A138 (--_GPendingViewData@ViewEventDispatcher@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( a2 >= a1[1] )
    return 2147650721LL;
  v5 = 3 * a2;
  ViewEventDispatcher::PendingViewData::`scalar deleting destructor'((ViewEventDispatcher::PendingViewData *)(*a1 + 24 * a2));
  v6 = a1[1];
  if ( a2 != v6 - 1 )
  {
    memmove_0((void *)(*a1 + 8 * v5), (const void *)(*a1 + 8 * v5 + 24), 24 * (v6 - a2) - 24);
    v6 = a1[1];
  }
  a1[1] = v6 - 1;
  return 0LL;
}
