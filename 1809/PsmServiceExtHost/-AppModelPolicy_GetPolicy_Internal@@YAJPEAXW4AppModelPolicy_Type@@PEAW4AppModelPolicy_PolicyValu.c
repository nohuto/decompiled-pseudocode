/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18003B1D0
 * Callers:
 *     ?HampSystemIsProcessLifetimeManaged@@YAJPEAXPEAK@Z @ 0x18000903C (-HampSystemIsProcessLifetimeManaged@@YAJPEAXPEAK@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800493A4 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180065A84 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@C.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, int *a3, _WORD *a4, _QWORD *a5)
{
  int PackageClaims; // ebx
  int v8; // eax
  int v10; // [rsp+40h] [rbp-28h] BYREF
  __int16 v11; // [rsp+44h] [rbp-24h]
  __int16 v12; // [rsp+84h] [rbp+1Ch]

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    PackageClaims = 0;
    *a4 = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    if ( (*(_BYTE *)a5 & 1) == 0 )
    {
      v8 = 0x10000;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)a5 & 2) == 0 )
    {
      v8 = 65538;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)a5 & 4) != 0 )
    {
      v8 = 65538;
      goto LABEL_12;
    }
    if ( (*(_QWORD *)a4 & 0x400LL) != 0 )
    {
      v8 = 0x10000;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)a4 & 4) != 0 )
    {
      v8 = 0x10000;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)a4 & 8) != 0 )
    {
      v8 = 0x10000;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)a4 & 0x40) == 0 )
    {
      v8 = `AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
LABEL_12:
      *a3 = v8;
      return PackageClaims | 0x10000000u;
    }
    if ( (`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetCachedFeatureEnabledState();
    LOBYTE(v12) = 1;
    v10 = 0;
    v11 = v12;
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data,
      10164710LL,
      &v10);
  }
  return PackageClaims | 0x10000000u;
}
