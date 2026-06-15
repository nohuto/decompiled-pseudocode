/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1800223D4
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001C620 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180021B70 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@C.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800220C8 (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  __int64 v9; // rdx
  int PackageClaims; // ebx
  int v11; // r8d
  int v13; // [rsp+50h] [rbp-10h] BYREF
  __int16 v14; // [rsp+54h] [rbp-Ch]
  int v15; // [rsp+A0h] [rbp+40h] BYREF
  __int16 v16; // [rsp+A4h] [rbp+44h]

  v5 = a5;
  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL);
  if ( PackageClaims == -1073741275 )
  {
    *v5 = 0LL;
    PackageClaims = 0;
    *a4 = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    if ( (*(_BYTE *)v5 & 1) == 0 )
    {
      v11 = 3;
      goto LABEL_23;
    }
    v11 = 2;
    if ( (*(_BYTE *)v5 & 2) == 0 )
    {
      v11 = 6;
      goto LABEL_23;
    }
    if ( (*(_BYTE *)v5 & 4) != 0 )
    {
      v11 = 5;
      goto LABEL_23;
    }
    if ( (*(_QWORD *)a4 & 0x400LL) != 0 )
    {
      v11 = 9;
      goto LABEL_23;
    }
    if ( (*(_BYTE *)a4 & 4) != 0 )
      goto LABEL_23;
    v11 = 8;
    if ( (*(_BYTE *)a4 & 8) != 0 )
    {
      v11 = 7;
      goto LABEL_23;
    }
    if ( (*(_BYTE *)a4 & 0x40) == 0 )
    {
      v11 = 1;
      goto LABEL_23;
    }
    if ( a2 != 1 )
    {
LABEL_23:
      *a3 = `AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table[9 * (a2 - 1) + v11 - 1];
      return PackageClaims | 0x10000000u;
    }
    if ( (`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetCachedFeatureEnabledState();
    v13 = 0;
    LOBYTE(v16) = 1;
    v15 = 3;
    v14 = v16;
    if ( (unsigned int)wil::details::ReportUsageToServiceDirect(
                         &`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data,
                         v9,
                         6)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0x9B19E6u,
        (const struct FEATURE_LOGGED_TRAITS *)&v13,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v15,
        0LL,
        0,
        1uLL);
    }
  }
  return PackageClaims | 0x10000000u;
}
