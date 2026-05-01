/*
 * XREFs of ??_GPendingViewData@ViewEventDispatcher@@QEAAPEAXI@Z @ 0x180213018
 * Callers:
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x180211BB0 (--1ViewEventDispatcher@@EEAA@XZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180217BF4 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

ViewEventDispatcher::PendingViewData *__fastcall ViewEventDispatcher::PendingViewData::`scalar deleting destructor'(
        ViewEventDispatcher::PendingViewData *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  return this;
}
