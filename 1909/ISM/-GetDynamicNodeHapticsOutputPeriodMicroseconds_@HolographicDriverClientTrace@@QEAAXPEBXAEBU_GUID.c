/*
 * XREFs of ?GetDynamicNodeHapticsOutputPeriodMicroseconds_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@H@Z @ 0x180156084
 * Callers:
 *     ??$GetDynamicNodeHapticsOutputPeriodMicroseconds@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAI@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAI@Z @ 0x18014A234 (--$GetDynamicNodeHapticsOutputPeriodMicroseconds@PEAVSpatialGraphDriverClient@Holographic@Intern.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::GetDynamicNodeHapticsOutputPeriodMicroseconds_(
        HolographicDriverClientTrace *this,
        const void *a2,
        const struct _GUID *a3,
        const struct SPATIAL_NODE_ID *a4,
        char a5)
{
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  const void **v10; // [rsp+58h] [rbp-1h]
  __int64 v11; // [rsp+60h] [rbp+7h]
  const struct _GUID *v12; // [rsp+68h] [rbp+Fh]
  __int64 v13; // [rsp+70h] [rbp+17h]
  const struct SPATIAL_NODE_ID *v14; // [rsp+78h] [rbp+1Fh]
  __int64 v15; // [rsp+80h] [rbp+27h]
  char *v16; // [rsp+88h] [rbp+2Fh]
  __int64 v17; // [rsp+90h] [rbp+37h]
  const void *v18; // [rsp+C0h] [rbp+67h] BYREF

  v18 = a2;
  v7 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<HolographicDriverClientTrace>::get(
                                           this,
                                           lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v7 > 4u )
  {
    if ( TlgKeywordOn(v7, 2uLL) )
    {
      v11 = 8LL;
      v10 = &v18;
      v16 = &a5;
      v12 = a3;
      v13 = 16LL;
      v14 = a4;
      v15 = 16LL;
      v17 = 4LL;
      TlgWrite(v8, &unk_1801A2431, 0LL, 0LL, 6u, &pData);
    }
  }
}
