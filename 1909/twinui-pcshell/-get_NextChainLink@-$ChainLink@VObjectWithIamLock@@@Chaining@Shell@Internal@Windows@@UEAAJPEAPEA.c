/*
 * XREFs of ?get_NextChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEAUIChainLink@2345@@Z @ 0x18016B060
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180151860 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4Rep.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::get_NextChainLink(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  *a2 = 0LL;
  wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsageToService(a1, (__int64)a2, a3);
  return 2147500033LL;
}
