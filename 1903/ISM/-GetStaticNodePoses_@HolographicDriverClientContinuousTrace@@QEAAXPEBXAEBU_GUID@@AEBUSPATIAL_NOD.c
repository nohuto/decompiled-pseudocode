/*
 * XREFs of ?GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@KPEBU3@PEBUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1801581DC
 * Callers:
 *     ??$GetStaticNodePoses@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAKAEAPEBU6@AEAPEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAKAEAPEBU6@AEAPEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18014AAE8 (--$GetStaticNodePoses@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBU.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x18016176C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetStaticNodePoses_(
        HolographicDriverClientContinuousTrace *this,
        const void *a2,
        const struct _GUID *a3,
        const struct SPATIAL_NODE_ID *a4,
        unsigned __int16 a5,
        const struct SPATIAL_NODE_ID *a6)
{
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  __int64 v10; // r9
  unsigned __int16 v11; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-41h] BYREF
  const void **v13; // [rsp+68h] [rbp-21h]
  __int64 v14; // [rsp+70h] [rbp-19h]
  const struct _GUID *v15; // [rsp+78h] [rbp-11h]
  __int64 v16; // [rsp+80h] [rbp-9h]
  const struct SPATIAL_NODE_ID *v17; // [rsp+88h] [rbp-1h]
  __int64 v18; // [rsp+90h] [rbp+7h]
  __int16 *v19; // [rsp+98h] [rbp+Fh]
  __int64 v20; // [rsp+A0h] [rbp+17h]
  const struct SPATIAL_NODE_ID *v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+B4h] [rbp+2Bh]
  const void *v24; // [rsp+E0h] [rbp+57h] BYREF

  v24 = a2;
  v8 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
                                           this,
                                           lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v8 > 5u )
  {
    if ( TlgKeywordOn(v8, 2uLL) )
    {
      v13 = &v24;
      v19 = (__int16 *)&v11;
      v11 = a5;
      v21 = a6;
      v14 = 8LL;
      v15 = a3;
      v16 = 16LL;
      v17 = a4;
      v18 = 16LL;
      v20 = v10;
      v22 = 16 * a5;
      v23 = 0;
      TlgWrite(v9, &unk_1801A347D, 0LL, 0LL, 7u, &pData);
    }
  }
}
