/*
 * XREFs of ?Localize@ReferencedGitCookie@?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18026493C
 * Callers:
 *     ??0?$PresentationReference@V?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@7Collections@Foundation@8@@detail@XWinRT@@QEAA@AEBV?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@12@PEAJ@Z @ 0x180262DC8 (--0-$PresentationReference@V-$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@.c)
 *     ?GetAt@?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIShellTab@Tabs@ComposableShell@25@@Z @ 0x180263970 (-GetAt@-$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@.c)
 *     ?GetMany@?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIShellTab@Tabs@ComposableShell@25@PEAI@Z @ 0x180263CF0 (-GetMany@-$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicat.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::Tabs::IShellTab>::ReferencedGitCookie::Localize(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = 0LL;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_18059A2A8 + 40LL))(
           qword_18059A2A8,
           *(unsigned int *)(a1 + 4),
           &GUID_3c3e4af7_f26d_4620_aa79_6440853c1416,
           a2);
}
