/*
 * XREFs of ?NodePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0@Z @ 0x18015A180
 * Callers:
 *     ?AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBUSPATIAL_NODE_ID@@@Z @ 0x1801530B4 (-AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologra.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::NodePropertyRequestAdded_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3,
        const struct _GUID *a4)
{
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  const struct _GUID *v10; // [rsp+50h] [rbp-48h]
  __int64 v11; // [rsp+58h] [rbp-40h]
  const struct SPATIAL_NODE_ID *v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+68h] [rbp-30h]
  const struct _GUID *v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]

  v7 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<HolographicDriverClientTrace>::get(
                                           this,
                                           lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v7 > 4u )
  {
    if ( TlgKeywordOn(v7, 2uLL) )
    {
      v10 = a2;
      v11 = 16LL;
      v12 = a3;
      v13 = 16LL;
      v14 = a4;
      v15 = 16LL;
      TlgWrite(v8, &unk_1801A2497, 0LL, 0LL, 5u, &pData);
    }
  }
}
