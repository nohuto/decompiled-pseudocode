/*
 * XREFs of ?IsTabShellEnabled@PrivilegedOperations@@YA_NXZ @ 0x1801A3FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 */

bool __fastcall PrivilegedOperations::IsTabShellEnabled(PrivilegedOperations *this, __int64 a2, __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)this, 3u, a3);
  return 0;
}
