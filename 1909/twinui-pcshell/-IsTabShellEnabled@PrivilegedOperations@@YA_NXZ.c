/*
 * XREFs of ?IsTabShellEnabled@PrivilegedOperations@@YA_NXZ @ 0x18020A4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 */

bool __fastcall PrivilegedOperations::IsTabShellEnabled(PrivilegedOperations *this)
{
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)this, 3u);
  return 0;
}
