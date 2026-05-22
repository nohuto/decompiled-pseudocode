/*
 * XREFs of ?GetForwardOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z @ 0x18015670C
 * Callers:
 *     ?GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x180156610 (-GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::GetForwardOnly_(
        HolographicDriverClientTrace *this,
        const void *a2,
        const struct _GUID *a3,
        char a4)
{
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  const void **v8; // [rsp+58h] [rbp+17h]
  __int64 v9; // [rsp+60h] [rbp+1Fh]
  const struct _GUID *v10; // [rsp+68h] [rbp+27h]
  __int64 v11; // [rsp+70h] [rbp+2Fh]
  char *v12; // [rsp+78h] [rbp+37h]
  __int64 v13; // [rsp+80h] [rbp+3Fh]
  const void *v14; // [rsp+B0h] [rbp+6Fh] BYREF
  char v15; // [rsp+C0h] [rbp+7Fh] BYREF

  v15 = a4;
  v14 = a2;
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<HolographicDriverClientTrace>::get(
                                           this,
                                           lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 > 4u )
  {
    if ( TlgKeywordOn(v5, 2uLL) )
    {
      v9 = 8LL;
      v8 = &v14;
      v12 = &v15;
      v10 = a3;
      v11 = 16LL;
      v13 = 1LL;
      TlgWrite(v6, &unk_1801A3691, 0LL, 0LL, 5u, &pData);
    }
  }
}
