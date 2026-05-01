/*
 * XREFs of ?v_IsTabEligible@CWinRTApplicationView@@EEAAJPEA_N@Z @ 0x18017D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 */

__int64 __fastcall CWinRTApplicationView::v_IsTabEligible(CWinRTApplicationView *this, bool *a2)
{
  *a2 = 0;
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)this, 3u);
  return 0LL;
}
