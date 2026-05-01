/*
 * XREFs of ?GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ @ 0x18004D4D8
 * Callers:
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x18004D318 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     _anonymous_namespace_::GetWindowTitlebarSize @ 0x18026810C (_anonymous_namespace_--GetWindowTitlebarSize.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004D4FC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_N.c)
 */

__int64 __fastcall GetDefaultTitlebarHeightInLogicalPixels(__int64 a1)
{
  wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsageToService(a1);
  return 32LL;
}
