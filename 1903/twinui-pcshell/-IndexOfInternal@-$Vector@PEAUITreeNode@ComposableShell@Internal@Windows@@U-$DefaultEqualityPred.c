/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@IPEAUITreeNode@ComposableShell@25@PEAIPEAE@Z @ 0x18021016C
 * Callers:
 *     ?IndexOf@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITreeNode@ComposableShell@25@PEAIPEAE@Z @ 0x18020FF80 (-IndexOf@-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@PE.c)
 * Callees:
 *     ??$?RUITreeNode@ComposableShell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITreeNode@ComposableShell@Internal@Windows@@0PEA_N@Z @ 0x18010A224 (--$-RUITreeNode@ComposableShell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITreeNode@Co.c)
 *     ??$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x18010AAC8 (--$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 *     ??0?$PresentationReference@V?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@6Collections@Foundation@7@@detail@XWinRT@@QEAA@AEBV?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@12@PEAJ@Z @ 0x18020C358 (--0-$PresentationReference@V-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detai.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::ITreeNode *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::ITreeNode *,0,1,0>>::IndexOfInternal(
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
      XWinRT::detail::PresentationReference<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>,Windows::Internal::ComposableShell::ITreeNode *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>>::PresentationReference<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>,Windows::Internal::ComposableShell::ITreeNode *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>>(
        v13,
        (__m128i *)(a2 + 16LL * v10),
        &v14);
      v9 = v14;
      if ( v14 >= 0 )
      {
        v9 = XWinRT::InterfaceEquals::operator()<Windows::Internal::ComposableShell::ITreeNode>(
               v11,
               a4,
               (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v13[0],
               &v16);
        v14 = v9;
        if ( v9 >= 0 && v16 )
        {
          *a6 = 1;
          *a5 = v10;
          XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>(v13);
          return (unsigned int)v9;
        }
      }
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>(v13);
      if ( ++v10 >= a3 )
        return (unsigned int)v9;
    }
  }
  return (unsigned int)v9;
}
