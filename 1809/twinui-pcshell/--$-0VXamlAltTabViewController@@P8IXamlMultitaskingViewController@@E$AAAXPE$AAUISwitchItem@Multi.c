/*
 * XREFs of ??$?0VXamlAltTabViewController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z@ItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@ZW4CallbackContext@Platform@@_N@Z @ 0x18028D104
 * Callers:
 *     ?RegisterForEvents@XamlAltTabViewController@@QE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVAltTabViewModel@789WindowsInternal@@@Z @ 0x18028F528 (-RegisterForEvents@XamlAltTabViewController@@QE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PE$AAVAltTab@S.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18025BFD8 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler::ItemCloseInvokedEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture @ 0x18028E19C (_WindowsInternal--ComposableShell--Experiences--Switcher--ItemCloseInvokedEventHand_ea_18028E19C.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler::ItemCloseInvokedEventHandler(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v6)(__int64); // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  v4 = 0LL;
  if ( a1 != (_QWORD *)-40LL )
  {
    v6 = IXamlSwitcherWindowInteractionEvents::OnLightDismiss;
    v7 = 16;
    v4 = WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler::ItemCloseInvokedEventHandler_XamlAltTabViewController_void____cdecl_IXamlMultitaskingViewController::___Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64____ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
           a1 + 5,
           a2,
           &v6);
  }
  a1[37] = v4;
  return a1;
}
