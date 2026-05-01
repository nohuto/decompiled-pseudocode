/*
 * XREFs of ??1?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ @ 0x18021D844
 * Callers:
 *     _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$11 @ 0x1800E5A50 (_WindowEventDispatcher--AppViewUniversalPropertyChanged_--_1_--dtor$11.c)
 *     _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$13 @ 0x1800E5A70 (_WindowEventDispatcher--AppViewUniversalPropertyChanged_--_1_--dtor$13.c)
 *     _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$14 @ 0x1800E5A90 (_WindowEventDispatcher--AppViewUniversalPropertyChanged_--_1_--dtor$14.c)
 *     _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$40 @ 0x1800E5AF0 (_WindowEventDispatcher--AppViewUniversalPropertyChanged_--_1_--dtor$40.c)
 *     _HolographicPositioner::_RaiseFrameworkViewTypeChanged_::_1_::dtor$1 @ 0x1802247BD (_HolographicPositioner--_RaiseFrameworkViewTypeChanged_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$14 @ 0x180292304 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$14.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(&)[12]__::_1_::dtor$0 @ 0x1802972FA (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(-)[12]__--_.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const___const_&__::_1_::dtor$0 @ 0x180297392 (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const___const_-__-.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::~ComPtr<ViewEventArgsForSelectTargetView>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease(a1);
}
