/*
 * XREFs of ?GetPoseAtTime_PredictFromPoses_@HolographicDriverClientContinuousTrace@@QEAAXJ_J0IAEBUXMFLOAT4X3@DirectX@@@Z @ 0x180157868
 * Callers:
 *     ??$GetPoseAtTime_PredictFromPoses@AEBJAEA_JAEA_JAEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOAT4X3@DirectX@@@HolographicDriverClientContinuousTrace@@SAXAEBJAEA_J1AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOAT4X3@DirectX@@@Z @ 0x18014A45C (--$GetPoseAtTime_PredictFromPoses@AEBJAEA_JAEA_JAEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOA.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z @ 0x1801598C0 (-IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x18016179C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetPoseAtTime_PredictFromPoses_(
        HolographicDriverClientContinuousTrace *this,
        int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        const struct DirectX::XMFLOAT4X3 *a6)
{
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  int v9; // r9d
  __int64 v10; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v12; // [rsp+68h] [rbp-29h]
  int v13; // [rsp+70h] [rbp-21h]
  int v14; // [rsp+74h] [rbp-1Dh]
  int *v15; // [rsp+78h] [rbp-19h]
  int v16; // [rsp+80h] [rbp-11h]
  int v17; // [rsp+84h] [rbp-Dh]
  __int64 *v18; // [rsp+88h] [rbp-9h]
  int v19; // [rsp+90h] [rbp-1h]
  int v20; // [rsp+94h] [rbp+3h]
  __int64 *v21; // [rsp+98h] [rbp+7h]
  int v22; // [rsp+A0h] [rbp+Fh]
  int v23; // [rsp+A4h] [rbp+13h]
  char *v24; // [rsp+A8h] [rbp+17h]
  int v25; // [rsp+B0h] [rbp+1Fh]
  int v26; // [rsp+B4h] [rbp+23h]
  const struct DirectX::XMFLOAT4X3 *v27; // [rsp+B8h] [rbp+27h]
  int v28; // [rsp+C0h] [rbp+2Fh]
  int v29; // [rsp+C4h] [rbp+33h]
  int v30; // [rsp+F0h] [rbp+5Fh] BYREF
  __int64 v31; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v32; // [rsp+100h] [rbp+6Fh] BYREF

  v32 = a4;
  v31 = a3;
  v30 = a2;
  if ( HolographicDriverClientContinuousTrace::IsVerboseTracingEnabled((unsigned __int64)this) )
  {
    v7 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
                                             v6,
                                             lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_)
                                         + 8);
    if ( *(_DWORD *)v7 > 4u )
    {
      if ( TlgKeywordOn(v7, 0x800000uLL) )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v12 = &v10;
        v15 = &v30;
        v18 = &v31;
        v21 = &v32;
        v24 = &a5;
        v27 = a6;
        v10 = 0x1000000LL;
        v13 = v9 + 4;
        v16 = v9;
        v19 = v9 + 4;
        v22 = v9 + 4;
        v25 = v9;
        v28 = 48;
        TlgWrite(v8, &unk_1801A32A0, 0LL, 0LL, v9 + 4, &pData);
      }
    }
  }
}
