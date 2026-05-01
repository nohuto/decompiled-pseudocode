/*
 * XREFs of ??$?0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z@WindowActivatedEventHandler@Xaml@UI@Windows@@QE$AAA@PE$AAUIXamlSwitcherWindowInteractionEvents@@P84@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@23@@ZW4CallbackContext@6@_N@Z @ 0x1802DD2F4
 * Callers:
 *     ?Initialize@MonitorFrame@@QEAAXPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitcherControlBase@3456@PE$AAVWindow@Xaml@UI@Windows@@PEAUIXamlExplorerHostWindow@@@Z @ 0x1802E9370 (-Initialize@MonitorFrame@@QEAAXPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@Win.c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x1802FBAA8 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--operator().c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802D3970 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(Platform::Object___Windows::UI::Core::WindowActivatedEventArgs__)__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture @ 0x1802E2F14 (_Windows--UI--Xaml--WindowActivatedEventHandler--WindowActivatedEventHandler_IXamlS_ea_1802E2F14.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Xaml::WindowActivatedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Xaml::WindowActivatedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Xaml::WindowActivatedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  v4 = 0LL;
  if ( a1 != (_QWORD *)-40LL )
    v4 = Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler_IXamlSwitcherWindowInteractionEvents_void____cdecl_IXamlSwitcherWindowInteractionEvents::___Platform::Object___Windows::UI::Core::WindowActivatedEventArgs_____::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
           a1 + 5,
           a2);
  a1[37] = v4;
  return a1;
}
