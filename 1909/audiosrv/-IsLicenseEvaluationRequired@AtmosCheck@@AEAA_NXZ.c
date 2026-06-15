/*
 * XREFs of ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180038224
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180037244 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180058F90 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     _lambda_07ea8ee8549f00f16399909de546051c_::operator() @ 0x18006B150 (_lambda_07ea8ee8549f00f16399909de546051c_--operator().c)
 *     _lambda_a70780d56f8e66bb41551630c0bd5b4d_::operator() @ 0x18006B600 (_lambda_a70780d56f8e66bb41551630c0bd5b4d_--operator().c)
 * Callees:
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180038030 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180038280 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800675C8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x18013DDCC (-EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x18013F02C (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z.c)
 */

char __fastcall AtmosCheck::IsLicenseEvaluationRequired(AtmosCheck *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char v10; // r8
  bool IsLogLicenseResult; // bl
  _QWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+34h] [rbp-14h]

  if ( AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(this) )
  {
    v12[0] = 0LL;
    v12[1] = 0LL;
    v13 = -2147023728;
    v14 = -2147023728;
    if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v3, v2, v4, v5)
      || !(unsigned int)IsDolbyLicenseCheckSkippedOnCurrentPlatform(v7, v6, v8) )
    {
      return 1;
    }
    *((_DWORD *)this + 47) = 2;
    IsLogLicenseResult = AtmosCheck::IsLogLicenseResult(this, (struct SpatialLicenseResult *)v12);
    AtmosCheck::EnableAllAtmosCapabilities(this);
    v10 = IsLogLicenseResult;
  }
  else
  {
    *((_DWORD *)this + 47) = 1;
    v10 = 0;
  }
  AtmosCheck::TraceResult(this, 0, v10);
  return 0;
}
