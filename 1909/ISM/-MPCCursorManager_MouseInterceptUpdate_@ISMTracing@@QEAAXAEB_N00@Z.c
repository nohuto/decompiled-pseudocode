/*
 * XREFs of ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x18008BDF4
 * Callers:
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x18008C2B4 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCCursorManager_MouseInterceptUpdate_(
        ISMTracing *this,
        const bool *a2,
        const bool *a3,
        const bool *a4)
{
  __int64 v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  int v9; // edx
  const struct _TlgProvider_t *v10; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  const bool *v12; // [rsp+50h] [rbp-48h]
  int v13; // [rsp+58h] [rbp-40h]
  int v14; // [rsp+5Ch] [rbp-3Ch]
  const bool *v15; // [rsp+60h] [rbp-38h]
  int v16; // [rsp+68h] [rbp-30h]
  int v17; // [rsp+6Ch] [rbp-2Ch]
  const bool *v18; // [rsp+70h] [rbp-28h]
  int v19; // [rsp+78h] [rbp-20h]
  int v20; // [rsp+7Ch] [rbp-1Ch]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v8 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          v7,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v8 > 4u )
    {
      if ( TlgKeywordOn(v8, 1uLL) )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v12 = a2;
        v13 = v9;
        v15 = a3;
        v16 = v9;
        v18 = a4;
        v19 = v9;
        TlgWrite(v10, &unk_18019BED3, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
