/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180046954
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180046754 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180046948 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180046F8C (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800625B0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllo.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

void wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::ReportUsageToService()
{
  char v0; // bl
  int v1; // ebx
  __int64 v2; // rax
  int v3; // [rsp+50h] [rbp-9h] BYREF
  __int16 v4; // [rsp+54h] [rbp-5h]
  int v5; // [rsp+58h] [rbp-1h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+3h]
  _BYTE v7[24]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  int v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+84h] [rbp+2Bh]
  int v11; // [rsp+8Ch] [rbp+33h]
  __int128 v12; // [rsp+90h] [rbp+37h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+47h]

  v0 = `wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetCachedFeatureEnabledState();
    v0 = `wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data;
  }
  LOBYTE(v4) = 0;
  v5 = 0;
  v6 = v4;
  v1 = v0 & 0x30;
  v3 = 3;
  v2 = wil_details_RecordUsageInPropertyCache(
         v7,
         &`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data,
         6LL,
         0LL);
  v12 = *(_OWORD *)v2;
  v13 = *(_QWORD *)(v2 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      10011581LL,
      6LL,
      1LL,
      &`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data,
      &v12);
    if ( v1 == 32 )
    {
      v8 = 0LL;
      v11 = (`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      v10 = 0LL;
      v9 = 6;
      ((void (__fastcall *)(__int64, __int64, __int64))g_wil_details_recordFeatureUsage)(10011581LL, 6LL, 1LL);
    }
  }
  if ( !(_DWORD)v13 )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x98C3BDu,
        (const struct FEATURE_LOGGED_TRAITS *)&v5,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v3,
        0LL,
        0,
        1uLL);
  }
}
