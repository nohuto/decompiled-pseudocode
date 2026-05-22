/*
 * XREFs of ?DeleteStaticNodes_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@W4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x180154864
 * Callers:
 *     ??$DeleteStaticNodes@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEAW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@AEAKAEAPEBUSPATIAL_NODE_ID@@@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEAW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@AEAKAEAPEBUSPATIAL_NODE_ID@@@Z @ 0x180149FD4 (--$DeleteStaticNodes@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEAW4.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::DeleteStaticNodes_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        __int64 a6)
{
  __int64 v8; // rax
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  __int64 v11; // r9
  unsigned __int16 v13; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+3Ch] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v16; // [rsp+68h] [rbp-19h]
  __int64 v17; // [rsp+70h] [rbp-11h]
  __int64 v18; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  int *v20; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  __int16 *v22; // [rsp+98h] [rbp+17h]
  __int64 v23; // [rsp+A0h] [rbp+1Fh]
  __int64 v24; // [rsp+A8h] [rbp+27h]
  int v25; // [rsp+B0h] [rbp+2Fh]
  int v26; // [rsp+B4h] [rbp+33h]
  __int64 v27; // [rsp+E0h] [rbp+5Fh] BYREF

  v27 = a2;
  v8 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  v9 = *(const struct _TlgProvider_t **)(v8 + 8);
  if ( *(_DWORD *)v9 > 4u )
  {
    LOBYTE(v8) = TlgKeywordOn(v9, 2uLL);
    if ( (_BYTE)v8 )
    {
      v16 = &v27;
      v20 = &v14;
      v22 = (__int16 *)&v13;
      v13 = a5;
      v24 = a6;
      v17 = 8LL;
      v18 = a3;
      v19 = 16LL;
      v14 = a4;
      v21 = 4LL;
      v23 = v11;
      v25 = 16 * a5;
      v26 = 0;
      LOBYTE(v8) = TlgWrite(v10, &unk_1801A3826, 0LL, 0LL, 7u, &pData);
    }
  }
  return v8;
}
