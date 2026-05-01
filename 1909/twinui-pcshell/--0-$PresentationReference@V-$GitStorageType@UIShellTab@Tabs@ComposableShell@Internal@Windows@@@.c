/*
 * XREFs of ??0?$PresentationReference@V?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@7Collections@Foundation@8@@detail@XWinRT@@QEAA@AEBV?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@12@PEAJ@Z @ 0x180282390
 * Callers:
 *     ?IndexOfInternal@?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@IPEAUIShellTab@Tabs@ComposableShell@25@PEAIPEAE@Z @ 0x18028396C (-IndexOfInternal@-$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U-$DefaultEquality.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x180129BE8 (--$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180283F0C (-Localize@ReferencedGitCookie@-$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall XWinRT::detail::PresentationReference<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::Tabs::IShellTab>,Windows::Internal::ComposableShell::Tabs::IShellTab *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>>::PresentationReference<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::Tabs::IShellTab>,Windows::Internal::ComposableShell::Tabs::IShellTab *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>>(
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
    v5 = XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::Tabs::IShellTab>::ReferencedGitCookie::Localize(
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
