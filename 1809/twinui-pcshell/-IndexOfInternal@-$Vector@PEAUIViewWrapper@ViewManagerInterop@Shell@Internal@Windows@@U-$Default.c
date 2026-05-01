/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@IPEAUIViewWrapper@ViewManagerInterop@Shell@25@PEAIPEAE@Z @ 0x180228E1C
 * Callers:
 *     ?IndexOf@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@25@PEAIPEAE@Z @ 0x180228C30 (-IndexOf@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEquality.c)
 * Callees:
 *     ??$?RUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0PEA_N@Z @ 0x180209528 (--$-RUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAU.c)
 *     ??$Destroy@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18020997C (--$Destroy@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SA.c)
 *     ??0?$PresentationReference@V?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@7Collections@Foundation@8@@detail@XWinRT@@QEAA@AEBV?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@12@PEAJ@Z @ 0x180223860 (--0-$PresentationReference@V-$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::IndexOfInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        unsigned int *a5,
        _BYTE *a6)
{
  int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]
  bool v16; // [rsp+60h] [rbp+18h] BYREF

  v15 = HIDWORD(a1);
  v13[1] = -2LL;
  v16 = 0;
  v9 = 0;
  v14 = 0;
  v10 = 0;
  if ( a3 )
  {
    while ( v9 >= 0 )
    {
      XWinRT::detail::PresentationReference<XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>>::PresentationReference<XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>>(
        v13,
        (__m128i *)(a2 + 16LL * v10),
        &v14);
      v9 = v14;
      if ( v14 >= 0 )
      {
        v9 = XWinRT::InterfaceEquals::operator()<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
               v11,
               a4,
               (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v13[0],
               &v16);
        v14 = v9;
        if ( v9 >= 0 && v16 )
        {
          *a6 = 1;
          *a5 = v10;
          XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::Tabs::IShellTab>(v13);
          return (unsigned int)v9;
        }
      }
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::Tabs::IShellTab>(v13);
      if ( ++v10 >= a3 )
        return (unsigned int)v9;
    }
  }
  return (unsigned int)v9;
}
