/*
 * XREFs of ??1?$ComPtr@VUAPViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180211444
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_unsigned_int_&___ptr64_IUnknown_____ptr64_unsigned_short_const_____ptr64_unsigned_short_const_(&___ptr64)[53]_ViewEventDispatcher_____ptr64__::_1_::dtor$1 @ 0x18020F495 (_Microsoft--WRL--Details--MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_uns_ea_18020F495.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_unsigned_int_&___ptr64_IUnknown_____ptr64_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_ViewEventDispatcher_____ptr64__::_1_::dtor$1 @ 0x18020F644 (_Microsoft--WRL--Details--MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_uns_ea_18020F644.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180217B10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_180217B10.c)
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
