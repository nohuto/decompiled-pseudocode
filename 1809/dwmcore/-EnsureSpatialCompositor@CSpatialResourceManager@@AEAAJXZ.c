/*
 * XREFs of ?EnsureSpatialCompositor@CSpatialResourceManager@@AEAAJXZ @ 0x180156C3C
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?RegisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z @ 0x180156F58 (-RegisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801570C4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CAX_NW4Rep.c)
 */

__int64 __fastcall CSpatialResourceManager::EnsureSpatialCompositor(CSpatialResourceManager *this)
{
  wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::ReportUsageToService(this);
  return 0LL;
}
