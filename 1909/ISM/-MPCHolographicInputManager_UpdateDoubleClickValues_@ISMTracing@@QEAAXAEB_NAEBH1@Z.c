/*
 * XREFs of ?MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z @ 0x180082478
 * Callers:
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x1800217C0 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_UpdateDoubleClickValues_(
        ISMTracing *this,
        const bool *a2,
        const int *a3,
        const int *a4)
{
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // rdx
  const struct _TlgProvider_t *v9; // rcx
  __int64 v10; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  const bool *v12; // [rsp+50h] [rbp-48h]
  __int64 v13; // [rsp+58h] [rbp-40h]
  const int *v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+68h] [rbp-30h]
  const int *v16; // [rsp+70h] [rbp-28h]
  __int64 v17; // [rsp+78h] [rbp-20h]

  v7 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                        (__int64)this,
                                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 4u )
  {
    if ( TlgKeywordOn(v7, 1uLL) )
    {
      v12 = a2;
      v13 = v8;
      v14 = a3;
      v15 = v10;
      v16 = a4;
      v17 = v10;
      TlgWrite(v9, &unk_18019B652, 0LL, 0LL, 5u, &pData);
    }
  }
}
