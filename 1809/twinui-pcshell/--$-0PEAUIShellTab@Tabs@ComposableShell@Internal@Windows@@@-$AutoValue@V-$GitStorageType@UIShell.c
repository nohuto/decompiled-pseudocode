/*
 * XREFs of ??$?0PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@?$AutoValue@V?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAJ@Z @ 0x1802094DC
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIShellTab@Tabs@ComposableShell@25@_N@Z @ 0x18020C720 (-InsertAtInternal@-$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U-$DefaultEqualit.c)
 *     ?SetAt@?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIShellTab@Tabs@ComposableShell@25@@Z @ 0x18020D680 (-SetAt@-$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@.c)
 * Callees:
 *     ?Initialize@?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18020C5E0 (-Initialize@-$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@Q.c)
 */

__int64 __fastcall XWinRT::AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::Tabs::IShellTab>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>>::AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::Tabs::IShellTab>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>>(
        __int64 a1,
        __int64 *a2,
        int *a3)
{
  __int64 v5; // rdx
  int v6; // eax

  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  v5 = *a2;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  v6 = XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::Tabs::IShellTab>::Initialize(a1, v5);
  *a3 = v6;
  if ( v6 < 0 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return a1;
}
