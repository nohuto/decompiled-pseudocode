/*
 * XREFs of ?HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@QEAAXKKPEBXAEBU_GUID@@@Z @ 0x180158DC4
 * Callers:
 *     ??$HolographicDriverHandleWrapper_DeviceIoControlFailed@AEAKAEAKPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@HolographicDriverClientContinuousTrace@@SAXAEAK0$$QEAPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@Z @ 0x18014AB5C (--$HolographicDriverHandleWrapper_DeviceIoControlFailed@AEAKAEAKPEAVHolographicDriverHandleWrapp.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x18016176C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::HolographicDriverHandleWrapper_DeviceIoControlFailed_(
        HolographicDriverClientContinuousTrace *this,
        int a2,
        int a3,
        const void *a4,
        const struct _GUID *a5)
{
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-31h] BYREF
  const void **v8; // [rsp+58h] [rbp-11h]
  __int64 v9; // [rsp+60h] [rbp-9h]
  int *v10; // [rsp+68h] [rbp-1h]
  __int64 v11; // [rsp+70h] [rbp+7h]
  int *v12; // [rsp+78h] [rbp+Fh]
  __int64 v13; // [rsp+80h] [rbp+17h]
  const void **v14; // [rsp+88h] [rbp+1Fh]
  __int64 v15; // [rsp+90h] [rbp+27h]
  const struct _GUID *v16; // [rsp+98h] [rbp+2Fh]
  __int64 v17; // [rsp+A0h] [rbp+37h]
  int v18; // [rsp+D0h] [rbp+67h] BYREF
  int v19; // [rsp+D8h] [rbp+6Fh] BYREF
  const void *v20; // [rsp+E0h] [rbp+77h] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
                                           this,
                                           lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 > 5u )
  {
    if ( TlgKeywordOn(v5, 2uLL) )
    {
      v9 = 8LL;
      v8 = &v20;
      v10 = &v18;
      v12 = &v19;
      v14 = &v20;
      v16 = a5;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 8LL;
      v17 = 16LL;
      TlgWrite(v6, &unk_1801A2410, 0LL, 0LL, 7u, &pData);
    }
  }
}
