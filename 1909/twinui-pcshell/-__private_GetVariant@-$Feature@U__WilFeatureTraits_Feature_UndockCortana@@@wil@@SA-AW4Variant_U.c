/*
 * XREFs of ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@SA?AW4Variant_UndockCortana@@W4VariantReportingKind@2@_N@Z @ 0x1801ECC48
 * Callers:
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801EAF5C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CA?AW4Variant_UndockCortana@@XZ @ 0x1801E59E0 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CA-AW4Variant_.c)
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CAX_NW4Variant_UndockCortana@@W4VariantReportingKind@2@_K@Z @ 0x1801E6E60 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CAX_NW4V.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::__private_GetVariant()
{
  char CachedVariantState; // bl
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9

  CachedVariantState = wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetCachedVariantState();
  wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::ReportVariantUsageToService(v1, CachedVariantState, v2, v3);
  return CachedVariantState;
}
