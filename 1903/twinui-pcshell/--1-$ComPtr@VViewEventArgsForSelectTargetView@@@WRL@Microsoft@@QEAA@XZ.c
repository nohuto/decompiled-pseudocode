/*
 * XREFs of ??1?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ @ 0x180268B20
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(&)[18]__::_1_::dtor$0 @ 0x18009A022 (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(-)[18]__--_.c)
 *     _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$14 @ 0x1800C3A30 (_WindowEventDispatcher--AppViewUniversalPropertyChanged_--_1_--dtor$14.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$14 @ 0x180272E34 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$14.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(&)[12]__::_1_::dtor$0 @ 0x180277E0A (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(-)[12]__--_.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const___const_&__::_1_::dtor$0 @ 0x180277EA2 (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const___const_-__-.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::~ComPtr<ViewEventArgsForSelectTargetView>(
        volatile signed __int64 **a1)
{
  return Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::InternalRelease(a1);
}
