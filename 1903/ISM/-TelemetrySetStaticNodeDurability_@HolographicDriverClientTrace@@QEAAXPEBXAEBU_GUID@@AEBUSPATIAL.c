/*
 * XREFs of ?TelemetrySetStaticNodeDurability_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x18015FC3C
 * Callers:
 *     ??$TelemetrySetStaticNodeDurability@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_STATIC_NODE_DURABILITY@@@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x18014B27C (--$TelemetrySetStaticNodeDurability@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@A.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::TelemetrySetStaticNodeDurability_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v7; // rax
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  int v11; // [rsp+38h] [rbp-41h] BYREF
  __int64 v12; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v14; // [rsp+68h] [rbp-11h]
  __int64 v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  __int64 v19; // [rsp+90h] [rbp+17h]
  int *v20; // [rsp+98h] [rbp+1Fh]
  __int64 v21; // [rsp+A0h] [rbp+27h]
  __int64 *v22; // [rsp+A8h] [rbp+2Fh]
  __int64 v23; // [rsp+B0h] [rbp+37h]
  __int64 v24; // [rsp+E0h] [rbp+67h] BYREF

  v24 = a2;
  v7 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  v8 = *(const struct _TlgProvider_t **)(v7 + 8);
  if ( *(_DWORD *)v8 > 4u )
  {
    LOBYTE(v7) = TlgKeywordOn(v8, 0x200000000002uLL);
    if ( (_BYTE)v7 )
    {
      v15 = 8LL;
      v14 = &v24;
      v11 = a5;
      v20 = &v11;
      v22 = &v12;
      v16 = a3;
      v17 = 16LL;
      v18 = a4;
      v19 = 16LL;
      v21 = 4LL;
      v12 = 0x2000000LL;
      v23 = 8LL;
      LOBYTE(v7) = TlgWrite(v9, &unk_1801A3405, 0LL, 0LL, 7u, &pData);
    }
  }
  return v7;
}
