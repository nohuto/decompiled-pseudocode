/*
 * XREFs of ??1?$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x180239500
 * Callers:
 *     _ApplicationViewBackedViewHostItem::RaiseFrameworkViewTypeSet_::_1_::dtor$0 @ 0x18023A89A (_ApplicationViewBackedViewHostItem--RaiseFrameworkViewTypeSet_--_1_--dtor$0.c)
 *     _ViewWrapperBase::OperationRequestComplete_::_1_::dtor$3 @ 0x1802B82CA (_ViewWrapperBase--OperationRequestComplete_--_1_--dtor$3.c)
 *     _wil::MakeOrThrow_ViewHandledEventArgs_bool_&__::_1_::dtor$0 @ 0x1802C4432 (_wil--MakeOrThrow_ViewHandledEventArgs_bool_-__--_1_--dtor$0.c)
 *     _WindowWrapperBase::OnBackComplete_::_1_::dtor$3 @ 0x1802C6881 (_WindowWrapperBase--OnBackComplete_--_1_--dtor$3.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__::_1_::dtor$0 @ 0x180328457 (_wil--MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__--_1_--dtor$0.c)
 *     _AppViewSwitchItemZOrderSort_CreateInstance_::_1_::dtor$0 @ 0x1803292AF (_AppViewSwitchItemZOrderSort_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<FrameworkViewTypeSetEventArgs>::~ComPtr<FrameworkViewTypeSetEventArgs>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(a1);
}
