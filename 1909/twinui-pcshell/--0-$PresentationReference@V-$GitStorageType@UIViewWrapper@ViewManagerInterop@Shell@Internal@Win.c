/*
 * XREFs of ??0?$PresentationReference@V?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@7Collections@Foundation@8@@detail@XWinRT@@QEAA@AEBV?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@12@PEAJ@Z @ 0x18012C220
 * Callers:
 *     ?IndexOfInternal@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@IPEAUIViewWrapper@ViewManagerInterop@Shell@25@PEAIPEAE@Z @ 0x180132EAC (-IndexOfInternal@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$Default.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x180129BE8 (--$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180133978 (-Localize@ReferencedGitCookie@-$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall XWinRT::detail::PresentationReference<XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>>::PresentationReference<XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>>(
        __int64 *a1,
        __m128i *a2,
        int *a3)
{
  int v5; // esi
  __int64 v6; // rbx
  __m128i v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  *a1 = 0LL;
  v8 = *a2;
  v5 = 0;
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*a2, 8)) )
  {
    v5 = XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::ReferencedGitCookie::Localize(
           v8.m128i_i64[0],
           &v9);
  }
  else
  {
    v6 = a2->m128i_i64[0];
    v9 = a2->m128i_i64[0];
    if ( !v8.m128i_i64[0] )
    {
LABEL_7:
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>(a1);
      *a1 = v6;
      goto LABEL_8;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8.m128i_i64[0] + 8LL))(v8.m128i_i64[0]);
  }
  if ( v5 >= 0 )
  {
    v6 = v9;
    goto LABEL_7;
  }
LABEL_8:
  *a3 = v5;
  return a1;
}
