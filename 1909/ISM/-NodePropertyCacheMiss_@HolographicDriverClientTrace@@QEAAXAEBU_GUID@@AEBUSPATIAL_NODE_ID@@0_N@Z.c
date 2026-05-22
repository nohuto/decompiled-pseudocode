/*
 * XREFs of ?NodePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0_N@Z @ 0x180159C7C
 * Callers:
 *     ??$NodePropertyCacheMiss@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBU1@AEB_N@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0AEB_N@Z @ 0x18014B1A0 (--$NodePropertyCacheMiss@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBU1@AEB_N@HolographicDriverClientTrac.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::NodePropertyCacheMiss_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3,
        const struct _GUID *a4,
        bool a5)
{
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  BOOL v10; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-21h] BYREF
  const struct _GUID *v12; // [rsp+68h] [rbp-1h]
  __int64 v13; // [rsp+70h] [rbp+7h]
  const struct _GUID *v14; // [rsp+78h] [rbp+Fh]
  __int64 v15; // [rsp+80h] [rbp+17h]
  const struct SPATIAL_NODE_ID *v16; // [rsp+88h] [rbp+1Fh]
  __int64 v17; // [rsp+90h] [rbp+27h]
  BOOL *v18; // [rsp+98h] [rbp+2Fh]
  __int64 v19; // [rsp+A0h] [rbp+37h]

  v8 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<HolographicDriverClientTrace>::get(
                                           this,
                                           lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v8 > 4u )
  {
    if ( TlgKeywordOn(v8, 2uLL) )
    {
      v10 = a5;
      v18 = &v10;
      v12 = a2;
      v13 = 16LL;
      v14 = a4;
      v15 = 16LL;
      v16 = a3;
      v17 = 16LL;
      v19 = 4LL;
      TlgWrite(v9, &unk_1801A2BBB, 0LL, 0LL, 6u, &pData);
    }
  }
}
