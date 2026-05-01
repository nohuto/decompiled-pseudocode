/*
 * XREFs of ?GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ @ 0x180056984
 * Callers:
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x180056070 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     _anonymous_namespace_::GetWindowTitlebarSize @ 0x180248B0C (_anonymous_namespace_--GetWindowTitlebarSize.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800569A8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_N.c)
 */

__int64 __fastcall GetDefaultTitlebarHeightInLogicalPixels(__int64 a1)
{
  wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsageToService(a1);
  return 32LL;
}
