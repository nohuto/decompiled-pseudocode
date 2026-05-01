/*
 * XREFs of _Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(Platform::Object_____ptr64_Windows::UI::Xaml::RoutedEventArgs_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture @ 0x18028E2E4
 * Callers:
 *     ??$?0VXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z@RoutedEventHandler@Xaml@UI@Windows@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@123@@ZW4CallbackContext@7@_N@Z @ 0x18028D304 (--$-0VXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXPE$AAVObject@Platf.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x180270870 (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler_XamlAltTabViewController_void____cdecl_IXamlSwitcherWindowInteractionEvents::___Platform::Object_____ptr64_Windows::UI::Xaml::RoutedEventArgs_____ptr64____ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 WeakReference; // rdi

  *(_QWORD *)a1 = &off_18050BC90;
  WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference((a2 + 144) & -(__int64)(a2 != 0));
  *(_QWORD *)(a1 + 8) = __abi_winrt_ptr_ctor(WeakReference);
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 16LL))(WeakReference);
  *(_OWORD *)(a1 + 16) = *a3;
  return a1;
}
