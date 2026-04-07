/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022AF4
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001E250 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18001EDD0 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180026A64 (-GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180022D28 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D4A0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA-AW4w.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::ReportUsageToService()
{
  char v0; // bl
  int v1; // ebx
  __int64 v2; // rax
  int v3; // [rsp+58h] [rbp-9h] BYREF
  __int16 v4; // [rsp+5Ch] [rbp-5h]
  int v5; // [rsp+60h] [rbp-1h] BYREF
  __int16 v6; // [rsp+64h] [rbp+3h]
  _BYTE v7[24]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v8; // [rsp+80h] [rbp+1Fh]
  int v9; // [rsp+88h] [rbp+27h]
  __int64 v10; // [rsp+8Ch] [rbp+2Bh]
  int v11; // [rsp+94h] [rbp+33h]
  __int128 v12; // [rsp+98h] [rbp+37h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+47h]

  v0 = `wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetCachedFeatureEnabledState();
    v0 = `wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data;
  }
  v5 = 1;
  v3 = 3;
  LOBYTE(v4) = 0;
  v6 = v4;
  v1 = v0 & 0x30;
  v2 = wil_details_RecordUsageInPropertyCache(
         v7,
         &`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data);
  v12 = *(_OWORD *)v2;
  v13 = *(_QWORD *)(v2 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      1470244LL,
      6LL,
      1LL,
      &`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data,
      &v12);
    if ( v1 == 32 )
    {
      v8 = 0LL;
      v11 = (`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      v10 = 0LL;
      v9 = 6;
      ((void (__fastcall *)(__int64, __int64, __int64))g_wil_details_recordFeatureUsage)(1470244LL, 6LL, 1LL);
    }
  }
  if ( !(_DWORD)v13 )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x166F24u,
        (const struct FEATURE_LOGGED_TRAITS *)&v5,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v3,
        0LL,
        0,
        1uLL);
  }
}
