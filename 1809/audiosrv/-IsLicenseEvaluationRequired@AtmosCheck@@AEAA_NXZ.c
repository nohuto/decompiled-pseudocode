/*
 * XREFs of ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180016870
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180016490 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x1800546E4 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     _lambda_d16d110d62607e9e7a123dfd70e3b2fb_::operator() @ 0x180067D8C (_lambda_d16d110d62607e9e7a123dfd70e3b2fb_--operator().c)
 * Callees:
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180016678 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180016934 (-IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180016B00 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062F18 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x180138580 (-EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x18013A4C4 (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall AtmosCheck::IsLicenseEvaluationRequired(AtmosCheck *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  char v5; // r8
  bool v6; // bl
  char IsLogLicenseResult; // bl
  BCRYPT_KEY_HANDLE hKey[2]; // [rsp+28h] [rbp-28h] BYREF
  __m128i si128; // [rsp+38h] [rbp-18h] BYREF
  int v10; // [rsp+48h] [rbp-8h]
  int v11; // [rsp+4Ch] [rbp-4h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v10 = -2147023728;
  v11 = -2147023728;
  if ( AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(this) )
  {
    si128 = 0uLL;
    v10 = -2147023728;
    v11 = -2147023728;
    if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v2)
      || !(unsigned int)IsDolbyLicenseCheckSkippedOnCurrentPlatform(v3) )
    {
      if ( *((_DWORD *)this + 40) == 3 && !*((_BYTE *)this + 184) )
      {
        *(_OWORD *)hKey = 0LL;
        if ( DolbyOEMLicenseCheck::IsDolbyOEMLicensePresent((DolbyOEMLicenseCheck *)hKey) )
        {
          *((_DWORD *)this + 39) = 1;
          IsLogLicenseResult = AtmosCheck::IsLogLicenseResult(this, (struct SpatialLicenseResult *)&si128);
          AtmosCheck::EnableAllAtmosCapabilities(this);
          AtmosCheck::TraceResult(this, 0, IsLogLicenseResult);
          if ( hKey[1] )
            BCryptDestroyKey(hKey[1]);
          if ( hKey[0] )
            BCryptCloseAlgorithmProvider(hKey[0], 0);
          return 0;
        }
        if ( hKey[1] )
          BCryptDestroyKey(hKey[1]);
        if ( hKey[0] )
          BCryptCloseAlgorithmProvider(hKey[0], 0);
      }
      return 1;
    }
    *((_DWORD *)this + 39) = 3;
    v6 = AtmosCheck::IsLogLicenseResult(this, (struct SpatialLicenseResult *)&si128);
    AtmosCheck::EnableAllAtmosCapabilities(this);
    v5 = v6;
  }
  else
  {
    *((_DWORD *)this + 39) = 2;
    v5 = 0;
  }
  AtmosCheck::TraceResult(this, 0, v5);
  return 0;
}
