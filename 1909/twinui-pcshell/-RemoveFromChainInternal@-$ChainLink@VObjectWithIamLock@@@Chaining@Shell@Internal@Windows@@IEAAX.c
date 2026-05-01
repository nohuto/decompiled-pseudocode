/*
 * XREFs of ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x1801676B0
 * Callers:
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1801675D8 (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x18016A650 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180151860 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4Rep.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@PEAUIChainLink@3456@1W4ChainLinkEventType@3456@@Z @ 0x1801618EC (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Wind.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@W4ChainLinkEventTypeInternal@23456@@Z @ 0x180161968 (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@_ea_180161968.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // r8
  __int64 *v10; // rbp
  __int64 *v11; // rdi

  wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsageToService(a1, a2, a3);
  v7 = *(__int64 **)(a1 + 48);
  v8 = *(__int64 **)(a1 + 40);
  if ( v7 - v8 )
  {
    while ( v8 != v7 )
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
        a2,
        a1,
        *v8++,
        a1,
        0);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(a2, a1, 2);
  }
  v9 = *(_QWORD *)(a1 + 64);
  if ( v9 )
  {
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
      a2,
      a1,
      v9,
      a1,
      1u);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(a2, a1, 1);
    ++*(_DWORD *)(a1 + 72);
    *(_BYTE *)(a1 + 88) = 1;
  }
  wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsageToService(v6, v5, v9);
  v10 = *(__int64 **)(a1 + 48);
  v11 = *(__int64 **)(a1 + 40);
  if ( v11 != v10 )
  {
    do
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11++);
    while ( v11 != v10 );
    v11 = *(__int64 **)(a1 + 40);
  }
  *(_QWORD *)(a1 + 48) = v11;
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 64));
}
