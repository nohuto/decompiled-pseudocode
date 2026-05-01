/*
 * XREFs of ??0?$PresentationReference@V?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@6Collections@Foundation@7@@detail@XWinRT@@QEAA@AEBV?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@12@PEAJ@Z @ 0x18020C358
 * Callers:
 *     ?IndexOfInternal@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@IPEAUITreeNode@ComposableShell@25@PEAIPEAE@Z @ 0x18021016C (-IndexOfInternal@-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPred.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x18010AAC8 (--$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x180210C14 (-Localize@ReferencedGitCookie@-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@det.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall XWinRT::detail::PresentationReference<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>,Windows::Internal::ComposableShell::ITreeNode *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>>::PresentationReference<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>,Windows::Internal::ComposableShell::ITreeNode *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>>(
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
    v5 = XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Localize(
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
