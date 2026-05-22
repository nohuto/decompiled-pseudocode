/*
 * XREFs of ?GetStaticNodeForPose_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@2@Z @ 0x180157EA0
 * Callers:
 *     ??$GetStaticNodeForPose@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@AEAU6@@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@AEAU6@@Z @ 0x18014AA78 (--$GetStaticNodeForPose@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AE.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x18016176C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetStaticNodeForPose_(
        HolographicDriverClientContinuousTrace *this,
        const void *a2,
        const struct _GUID *a3,
        const struct SPATIAL_NODE_ID *a4,
        const struct DirectX::XMFLOAT4X3 *a5,
        const struct SPATIAL_NODE_ID *a6)
{
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-39h] BYREF
  const void **v11; // [rsp+58h] [rbp-19h]
  __int64 v12; // [rsp+60h] [rbp-11h]
  const struct _GUID *v13; // [rsp+68h] [rbp-9h]
  __int64 v14; // [rsp+70h] [rbp-1h]
  const struct SPATIAL_NODE_ID *v15; // [rsp+78h] [rbp+7h]
  __int64 v16; // [rsp+80h] [rbp+Fh]
  const struct DirectX::XMFLOAT4X3 *v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+90h] [rbp+1Fh]
  const struct SPATIAL_NODE_ID *v19; // [rsp+98h] [rbp+27h]
  __int64 v20; // [rsp+A0h] [rbp+2Fh]
  const void *v21; // [rsp+D0h] [rbp+5Fh] BYREF

  v21 = a2;
  v8 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
                                           this,
                                           lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v8 > 4u )
  {
    if ( TlgKeywordOn(v8, 2uLL) )
    {
      v12 = 8LL;
      v11 = &v21;
      v17 = a5;
      v19 = a6;
      v13 = a3;
      v14 = 16LL;
      v15 = a4;
      v16 = 16LL;
      v18 = 48LL;
      v20 = 16LL;
      TlgWrite(v9, &unk_1801A3D4E, 0LL, 0LL, 7u, &pData);
    }
  }
}
