/*
 * XREFs of ?GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ @ 0x1801F7A30
 * Callers:
 *     _anonymous_namespace_::GetWindowTitlebarSize @ 0x1801F7B7C (_anonymous_namespace_--GetWindowTitlebarSize.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18005726C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_N.c)
 */

__int64 __fastcall GetDefaultTitlebarHeightInLogicalPixels(__int64 a1, __int64 a2, __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsageToService(a1, a2, a3);
  return 32LL;
}
