/*
 * XREFs of ??1?$ComPtr@VUAPViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180287FFC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_unsigned_int_&_IUnknown___unsigned_short_const___unsigned_short_const_(&)[53]_ViewEventDispatcher____::_1_::dtor$1 @ 0x1802861C9 (_Microsoft--WRL--Details--MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_uns_ea_1802861C9.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_unsigned_int_&_IUnknown___unsigned_short_const___unsigned_short_const___ViewEventDispatcher____::_1_::dtor$1 @ 0x180286378 (_Microsoft--WRL--Details--MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_uns_ea_180286378.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18028D380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_18028D380.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<UAPViewWrapper>::~ComPtr<UAPViewWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(result);
  }
  return result;
}
