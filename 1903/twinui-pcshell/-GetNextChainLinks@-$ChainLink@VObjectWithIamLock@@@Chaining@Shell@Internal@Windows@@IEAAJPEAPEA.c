/*
 * XREFs of ?GetNextChainLinks@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEAU?$IVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Collections@Foundation@5@@Z @ 0x180144B20
 * Callers:
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x18014B3E0 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180132300 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4Rep.c)
 *     ??$Make@V?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@5678@@Z @ 0x1801405B8 (--$Make@V-$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$DefaultEqualityPredicate@PE.c)
 *     ?GetView@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@345@@Z @ 0x180145040 (-GetView@-$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$DefaultEqualityPredicate@PE.c)
 *     ?InsertAtInternal@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIChainLink@Chaining@Shell@25@_N@Z @ 0x1801462B0 (-InsertAtInternal@-$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$DefaultEqualityPre.c)
 *     ?InternalRelease@?$ComPtr@V?$AgileVector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1801464C8 (-InternalRelease@-$ComPtr@V-$AgileVector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$Defa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::GetNextChainLinks(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  _QWORD *v9; // rbp
  int v10; // eax
  int v11; // edi
  int View; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  *a2 = 0LL;
  wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsageToService(a1, (__int64)a2, a3);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,0>>::InternalRelease(&v17);
  v17 = 0LL;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *> const &,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>::permission>(&v18);
  v7 = v18;
  if ( v18 )
  {
    v17 = v18;
    v8 = *(_QWORD **)(a1 + 40);
    v9 = *(_QWORD **)(a1 + 48);
    while ( v8 != v9 )
    {
      LOBYTE(v6) = 1;
      v10 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>::InsertAtInternal(
              v7,
              0LL,
              *v8,
              v6);
      v11 = v10;
      if ( v10 < 0 )
      {
        v13 = (unsigned int)v10;
        v14 = 371LL;
        goto LABEL_10;
      }
      ++v8;
      v7 = v17;
    }
    View = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>::GetView(
             v7,
             a2);
    v11 = View;
    if ( View >= 0 )
      goto LABEL_11;
    v13 = (unsigned int)View;
    v14 = 374LL;
  }
  else
  {
    v11 = -2147024882;
    v13 = 2147942414LL;
    v14 = 367LL;
  }
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
    (const char *)v13);
  v5 = v11;
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,0>>::InternalRelease(&v17);
  return v5;
}
