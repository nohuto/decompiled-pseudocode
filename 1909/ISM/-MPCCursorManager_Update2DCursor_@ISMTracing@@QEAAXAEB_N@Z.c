/*
 * XREFs of ?MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z @ 0x18008BEC8
 * Callers:
 *     ?Update2DCursor@MPCCursorManager@@AEAAX_N@Z @ 0x18008C1A4 (-Update2DCursor@MPCCursorManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCCursorManager_Update2DCursor_(ISMTracing *this, const bool *a2)
{
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  int v5; // edx
  const struct _TlgProvider_t *v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const bool *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          v3,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v4 > 4u )
    {
      if ( TlgKeywordOn(v4, 1uLL) )
      {
        v10 = 0;
        v8 = a2;
        v9 = v5;
        TlgWrite(v6, &unk_18019BE95, 0LL, 0LL, 3u, &pData);
      }
    }
  }
}
