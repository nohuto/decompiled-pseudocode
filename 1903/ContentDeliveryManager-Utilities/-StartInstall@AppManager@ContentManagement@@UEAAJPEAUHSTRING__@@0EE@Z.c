/*
 * XREFs of ?StartInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE@Z @ 0x180055EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180058854 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductIns.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::StartInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4,
        char a5)
{
  __int64 v9; // r9
  int v11; // [rsp+20h] [rbp-38h]
  __int16 v12; // [rsp+44h] [rbp-14h]
  int v13; // [rsp+48h] [rbp-10h] BYREF
  __int16 v14; // [rsp+4Ch] [rbp-Ch]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetCachedFeatureEnabledState();
  LOBYTE(v12) = 3;
  v13 = 0;
  v14 = v12;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v13,
    1,
    3);
  LOBYTE(v9) = a4;
  LOBYTE(v11) = a5;
  return (*(__int64 (__fastcall **)(ContentManagement::AppManager *, HSTRING, HSTRING, __int64, int, _QWORD, _QWORD))(*(_QWORD *)this + 128LL))(
           this,
           a2,
           a3,
           v9,
           v11,
           0LL,
           0LL);
}
