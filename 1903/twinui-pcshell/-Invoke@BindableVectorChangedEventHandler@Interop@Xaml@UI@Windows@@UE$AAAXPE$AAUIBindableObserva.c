/*
 * XREFs of ?Invoke@BindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@UE$AAAXPE$AAUIBindableObservableVector@2345@PE$AAVObject@Platform@@@Z @ 0x1802CB320
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_BindableVectorChangedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@BindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@23456@UE$AAAJPE$AAUIBindableObservableVector@3456@PE$AAVObject@Platform@@@Z @ 0x1802D50E0 (-__abi_Windows_UI_Xaml_Interop_BindableVectorChangedEventHandler___abi_IDelegate____abi_Invoke@-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler::Invoke(_QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
