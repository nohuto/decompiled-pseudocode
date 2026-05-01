/*
 * XREFs of ?Localize@ReferencedGitCookie@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x180210C14
 * Callers:
 *     ??0?$PresentationReference@V?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@6Collections@Foundation@7@@detail@XWinRT@@QEAA@AEBV?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@12@PEAJ@Z @ 0x18020C358 (--0-$PresentationReference@V-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detai.c)
 *     ?GetAt@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITreeNode@ComposableShell@25@@Z @ 0x18020F300 (-GetAt@-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@PEAU.c)
 *     ?GetMany@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITreeNode@ComposableShell@25@PEAI@Z @ 0x18020F930 (-GetMany@-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@PE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Localize(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = 0LL;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_18059A2A8 + 40LL))(
           qword_18059A2A8,
           *(unsigned int *)(a1 + 4),
           &GUID_2d10b4a2_7c09_4621_b36f_9a62ecbac6cb,
           a2);
}
