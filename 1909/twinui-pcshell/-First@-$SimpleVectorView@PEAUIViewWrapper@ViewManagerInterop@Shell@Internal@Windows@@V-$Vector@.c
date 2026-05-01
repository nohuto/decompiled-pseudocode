/*
 * XREFs of ?First@?$SimpleVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@V?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@345@@Z @ 0x180130260
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___0_1_0____XWinRT::IntVersionTag_::Do__lambda_768cb2220f6e5c58bd753db9dcc20fa9___lambda_ce29597577b2c05eb038e19e940cb786___ @ 0x180129D80 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_180129D80.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,XWinRT::IntVersionTag,1>::First(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v4; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v4 = &v5;
  v3[0] = a1 - 16;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___0_1_0____XWinRT::IntVersionTag_::Do__lambda_768cb2220f6e5c58bd753db9dcc20fa9___lambda_ce29597577b2c05eb038e19e940cb786___(
           (unsigned int *)(a1 + 64),
           *(_QWORD *)(a1 + 56),
           (__int64)v3,
           &v4);
}
