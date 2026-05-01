/*
 * XREFs of ?Invoke@RoutedEventHandler@Xaml@UI@Windows@@UE$AAAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@234@@Z @ 0x1802CB500
 * Callers:
 *     ?__abi_Windows_UI_Xaml_RoutedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@RoutedEventHandler@Xaml@UI@Windows@@2345@UE$AAAJPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@345@@Z @ 0x1802D5730 (-__abi_Windows_UI_Xaml_RoutedEventHandler___abi_IDelegate____abi_Invoke@-Q__abi_IDelegate@Routed.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::RoutedEventHandler::Invoke(_QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &Windows::UI::Xaml::RoutedEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
