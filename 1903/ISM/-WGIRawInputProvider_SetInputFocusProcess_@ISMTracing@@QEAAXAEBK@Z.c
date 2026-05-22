/*
 * XREFs of ?WGIRawInputProvider_SetInputFocusProcess_@ISMTracing@@QEAAXAEBK@Z @ 0x1800A80E8
 * Callers:
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x1800271BC (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall ISMTracing::WGIRawInputProvider_SetInputFocusProcess_(ISMTracing *this, const unsigned int *a2)
{
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const unsigned int *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          v3,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v4 > 4u )
    {
      v8 = 0;
      v6 = a2;
      v7 = 4;
      TlgWrite(v4, &unk_18019D178, 0LL, 0LL, 3u, &pData);
    }
  }
}
