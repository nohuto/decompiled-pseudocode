/*
 * XREFs of ??1?$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x180219F84
 * Callers:
 *     _ApplicationViewBackedViewHostItem::RaiseFrameworkViewTypeSet_::_1_::dtor$0 @ 0x18021B2BA (_ApplicationViewBackedViewHostItem--RaiseFrameworkViewTypeSet_--_1_--dtor$0.c)
 *     _ViewWrapperBase::OperationRequestComplete_::_1_::dtor$3 @ 0x180298DEA (_ViewWrapperBase--OperationRequestComplete_--_1_--dtor$3.c)
 *     _wil::MakeOrThrow_ViewHandledEventArgs_bool_&__::_1_::dtor$0 @ 0x1802A4F02 (_wil--MakeOrThrow_ViewHandledEventArgs_bool_-__--_1_--dtor$0.c)
 *     _WindowWrapperBase::OnBackComplete_::_1_::dtor$3 @ 0x1802A7351 (_WindowWrapperBase--OnBackComplete_--_1_--dtor$3.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__::_1_::dtor$0 @ 0x180308F4B (_wil--MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__--_1_--dtor$0.c)
 *     _AppViewSwitchItemZOrderSort_CreateInstance_::_1_::dtor$0 @ 0x180309D9F (_AppViewSwitchItemZOrderSort_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<FrameworkViewTypeSetEventArgs>::~ComPtr<FrameworkViewTypeSetEventArgs>(
        volatile signed __int64 **a1)
{
  return Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(a1);
}
