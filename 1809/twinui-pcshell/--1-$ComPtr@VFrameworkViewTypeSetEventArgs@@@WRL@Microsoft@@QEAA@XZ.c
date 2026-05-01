/*
 * XREFs of ??1?$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x1801C2170
 * Callers:
 *     _ApplicationViewBackedViewHostItem::RaiseFrameworkViewTypeSet_::_1_::dtor$0 @ 0x1801C32EA (_ApplicationViewBackedViewHostItem--RaiseFrameworkViewTypeSet_--_1_--dtor$0.c)
 *     _ViewWrapperBase::OperationRequestComplete_::_1_::dtor$3 @ 0x180242D12 (_ViewWrapperBase--OperationRequestComplete_--_1_--dtor$3.c)
 *     _wil::MakeOrThrow_ViewHandledEventArgs_bool_&___ptr64__::_1_::dtor$0 @ 0x18024E922 (_wil--MakeOrThrow_ViewHandledEventArgs_bool_-___ptr64__--_1_--dtor$0.c)
 *     _WindowWrapperBase::OnBackComplete_::_1_::dtor$3 @ 0x1802507AB (_WindowWrapperBase--OnBackComplete_--_1_--dtor$3.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__::_1_::dtor$0 @ 0x1802B0977 (_wil--MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__--_1_--dtor$0.c)
 *     _AppViewSwitchItemZOrderSort_CreateInstance_::_1_::dtor$0 @ 0x1802B162F (_AppViewSwitchItemZOrderSort_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<FrameworkViewTypeSetEventArgs>::~ComPtr<FrameworkViewTypeSetEventArgs>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(a1);
}
