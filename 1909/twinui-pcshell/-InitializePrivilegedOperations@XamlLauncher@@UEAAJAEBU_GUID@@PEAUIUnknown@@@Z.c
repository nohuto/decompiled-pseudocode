/*
 * XREFs of ?InitializePrivilegedOperations@XamlLauncher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180312550
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StartInWin32Host@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18020B158 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StartInWin32Host@@@wil@@CAX_NW4Repor.c)
 */

__int64 __fastcall XamlLauncher::InitializePrivilegedOperations(
        XamlLauncher *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  wil::Feature<__WilFeatureTraits_Feature_StartInWin32Host>::ReportUsageToService(
    (__int64)this,
    (__int64)a2,
    (__int64)a3);
  return 0LL;
}
