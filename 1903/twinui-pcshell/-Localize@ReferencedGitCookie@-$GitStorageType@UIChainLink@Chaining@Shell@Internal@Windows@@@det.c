/*
 * XREFs of ?Localize@ReferencedGitCookie@?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x180146AE8
 * Callers:
 *     ??0?$PresentationReference@V?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@7Collections@Foundation@8@@detail@XWinRT@@QEAA@AEBV?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@12@PEAJ@Z @ 0x180140BE0 (--0-$PresentationReference@V-$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detai.c)
 *     ?GetAt@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIChainLink@Chaining@Shell@25@@Z @ 0x180143A80 (-GetAt@-$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$DefaultEqualityPredicate@PEAU.c)
 *     ?GetMany@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIChainLink@Chaining@Shell@25@PEAI@Z @ 0x180144600 (-GetMany@-$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$DefaultEqualityPredicate@PE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<Windows::Internal::Shell::Chaining::IChainLink>::ReferencedGitCookie::Localize(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = 0LL;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_18059A2A8 + 40LL))(
           qword_18059A2A8,
           *(unsigned int *)(a1 + 4),
           &GUID_602076f4_9793_429d_a999_f951052e28e9,
           a2);
}
