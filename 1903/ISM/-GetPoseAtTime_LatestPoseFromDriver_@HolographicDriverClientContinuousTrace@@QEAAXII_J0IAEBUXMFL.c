/*
 * XREFs of ?GetPoseAtTime_LatestPoseFromDriver_@HolographicDriverClientContinuousTrace@@QEAAXII_J0IAEBUXMFLOAT4X3@DirectX@@@Z @ 0x180157574
 * Callers:
 *     ??$GetPoseAtTime_LatestPoseFromDriver@AEAIAEAKAEB_JAEB_JAEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUXMFLOAT4X3@DirectX@@@HolographicDriverClientContinuousTrace@@SAXAEAIAEAKAEB_J2AEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUXMFLOAT4X3@DirectX@@@Z @ 0x18014A3EC (--$GetPoseAtTime_LatestPoseFromDriver@AEAIAEAKAEB_JAEB_JAEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AE.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z @ 0x1801598B0 (-IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x18016176C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetPoseAtTime_LatestPoseFromDriver_(
        HolographicDriverClientContinuousTrace *this,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        char a6,
        const struct DirectX::XMFLOAT4X3 *a7)
{
  __int64 v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  int v10; // r9d
  __int64 v11; // [rsp+38h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-61h] BYREF
  __int64 *v13; // [rsp+68h] [rbp-41h]
  int v14; // [rsp+70h] [rbp-39h]
  int v15; // [rsp+74h] [rbp-35h]
  int *v16; // [rsp+78h] [rbp-31h]
  int v17; // [rsp+80h] [rbp-29h]
  int v18; // [rsp+84h] [rbp-25h]
  int *v19; // [rsp+88h] [rbp-21h]
  int v20; // [rsp+90h] [rbp-19h]
  int v21; // [rsp+94h] [rbp-15h]
  __int64 *v22; // [rsp+98h] [rbp-11h]
  int v23; // [rsp+A0h] [rbp-9h]
  int v24; // [rsp+A4h] [rbp-5h]
  char *v25; // [rsp+A8h] [rbp-1h]
  int v26; // [rsp+B0h] [rbp+7h]
  int v27; // [rsp+B4h] [rbp+Bh]
  char *v28; // [rsp+B8h] [rbp+Fh]
  int v29; // [rsp+C0h] [rbp+17h]
  int v30; // [rsp+C4h] [rbp+1Bh]
  const struct DirectX::XMFLOAT4X3 *v31; // [rsp+C8h] [rbp+1Fh]
  int v32; // [rsp+D0h] [rbp+27h]
  int v33; // [rsp+D4h] [rbp+2Bh]
  int v34; // [rsp+100h] [rbp+57h] BYREF
  int v35; // [rsp+108h] [rbp+5Fh] BYREF
  __int64 v36; // [rsp+110h] [rbp+67h] BYREF

  v36 = a4;
  v35 = a3;
  v34 = a2;
  if ( HolographicDriverClientContinuousTrace::IsVerboseTracingEnabled((unsigned __int64)this) )
  {
    v8 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
                                             v7,
                                             lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_)
                                         + 8);
    if ( *(_DWORD *)v8 > 4u )
    {
      if ( TlgKeywordOn(v8, 0x800000uLL) )
      {
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v33 = 0;
        v13 = &v11;
        v16 = &v34;
        v19 = &v35;
        v22 = &v36;
        v25 = &a5;
        v28 = &a6;
        v31 = a7;
        v11 = 0x1000000LL;
        v14 = v10 + 4;
        v17 = v10;
        v20 = v10;
        v23 = v10 + 4;
        v26 = v10 + 4;
        v29 = v10;
        v32 = 48;
        TlgWrite(v9, &unk_1801A3E2F, 0LL, 0LL, 9u, &pData);
      }
    }
  }
}
