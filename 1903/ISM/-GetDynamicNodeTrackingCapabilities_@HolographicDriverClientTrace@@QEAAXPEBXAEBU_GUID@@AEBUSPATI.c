/*
 * XREFs of ?GetDynamicNodeTrackingCapabilities_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x180156208
 * Callers:
 *     ??$GetDynamicNodeTrackingCapabilities@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x18014A2AC (--$GetDynamicNodeTrackingCapabilities@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::GetDynamicNodeTrackingCapabilities_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v7; // rax
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  int v11; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-21h] BYREF
  __int64 *v13; // [rsp+68h] [rbp-1h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+27h]
  int *v19; // [rsp+98h] [rbp+2Fh]
  __int64 v20; // [rsp+A0h] [rbp+37h]
  __int64 v21; // [rsp+D0h] [rbp+67h] BYREF

  v21 = a2;
  v7 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  v8 = *(const struct _TlgProvider_t **)(v7 + 8);
  if ( *(_DWORD *)v8 > 4u )
  {
    LOBYTE(v7) = TlgKeywordOn(v8, 2uLL);
    if ( (_BYTE)v7 )
    {
      v14 = 8LL;
      v13 = &v21;
      v11 = a5;
      v19 = &v11;
      v15 = a3;
      v16 = 16LL;
      v17 = a4;
      v18 = 16LL;
      v20 = 4LL;
      LOBYTE(v7) = TlgWrite(v9, &unk_1801A3ADE, 0LL, 0LL, 6u, &pData);
    }
  }
  return v7;
}
