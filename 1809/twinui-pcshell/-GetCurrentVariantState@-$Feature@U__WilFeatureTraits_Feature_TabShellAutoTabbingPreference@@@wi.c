/*
 * XREFs of ?GetCurrentVariantState@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CA?AW4Variant_TabShellAutoTabbingPreference@@PEAIPEAH1@Z @ 0x1801F2F40
 * Callers:
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CA?AW4Variant_TabShellAutoTabbingPreference@@XZ @ 0x1801F2E24 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetCurrentVariantState(
        _DWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  unsigned int (*v3)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *); // rax
  __int64 v6; // rcx

  v3 = g_wil_details_internalGetFeatureVariant;
  if ( g_wil_details_internalGetFeatureVariant || (v3 = g_wil_details_apiGetFeatureVariant) != 0LL )
    v6 = ((unsigned int (__fastcall *)(__int64, _QWORD, _DWORD *, __int64))v3)(17057765LL, 0LL, a1, a2);
  else
    v6 = 0LL;
  *a3 = ((unsigned int)v6 >> 7) & 1;
  LOBYTE(v6) = v6 & 0x7F;
  if ( !(_BYTE)v6 )
    *a1 = 0;
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v6, 0, (__int64)a3);
  *a1 = 0;
  return 0;
}
