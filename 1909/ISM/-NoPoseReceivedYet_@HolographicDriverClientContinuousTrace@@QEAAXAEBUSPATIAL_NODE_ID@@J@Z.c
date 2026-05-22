/*
 * XREFs of ?NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z @ 0x180159B88
 * Callers:
 *     ??$NoPoseReceivedYet@AEBUSPATIAL_NODE_ID@@AEBJ@HolographicDriverClientContinuousTrace@@SAXAEBUSPATIAL_NODE_ID@@AEBJ@Z @ 0x18014B15C (--$NoPoseReceivedYet@AEBUSPATIAL_NODE_ID@@AEBJ@HolographicDriverClientContinuousTrace@@SAXAEBUSP.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x18016179C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::NoPoseReceivedYet_(
        HolographicDriverClientContinuousTrace *this,
        const struct SPATIAL_NODE_ID *a2,
        int a3)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const struct SPATIAL_NODE_ID *v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  int *v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]
  int v13; // [rsp+A0h] [rbp+18h] BYREF

  v13 = a3;
  v4 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
                                           this,
                                           lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v4 > 5u )
  {
    if ( TlgKeywordOn(v4, 2uLL) )
    {
      v9 = 0;
      v12 = 0;
      v10 = &v13;
      v11 = 4;
      v7 = a2;
      v8 = 16;
      TlgWrite(v5, &unk_1801A3A24, 0LL, 0LL, 4u, &pData);
    }
  }
}
