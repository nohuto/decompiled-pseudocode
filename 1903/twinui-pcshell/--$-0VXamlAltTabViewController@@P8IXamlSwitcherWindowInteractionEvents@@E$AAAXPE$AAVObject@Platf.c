/*
 * XREFs of ??$?0VXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z@RoutedEventHandler@Xaml@UI@Windows@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@123@@ZW4CallbackContext@7@_N@Z @ 0x1802E6A44
 * Callers:
 *     ?RegisterForEvents@XamlAltTabViewController@@QE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVAltTabViewModel@789WindowsInternal@@@Z @ 0x1802E8C58 (-RegisterForEvents@XamlAltTabViewController@@QE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PE$AAVAltTab@S.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802B4450 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(Platform::Object___Windows::UI::Xaml::RoutedEventArgs__)__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture @ 0x1802E7A1C (_Windows--UI--Xaml--RoutedEventHandler--RoutedEventHandler_XamlAltTabViewController_ea_1802E7A1C.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v6)(__int64); // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Xaml::RoutedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Xaml::RoutedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Xaml::RoutedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  v4 = 0LL;
  if ( a1 != (_QWORD *)-40LL )
  {
    v6 = IXamlSwitcherWindowInteractionEvents::FirstFrameRendered;
    v7 = 24;
    v4 = Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler_XamlAltTabViewController_void____cdecl_IXamlSwitcherWindowInteractionEvents::___Platform::Object___Windows::UI::Xaml::RoutedEventArgs_____::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
           a1 + 5,
           a2,
           &v6);
  }
  a1[37] = v4;
  return a1;
}
