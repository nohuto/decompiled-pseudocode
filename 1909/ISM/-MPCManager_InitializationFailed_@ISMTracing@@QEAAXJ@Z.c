/*
 * XREFs of ?MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z @ 0x18007DF04
 * Callers:
 *     _lambda_3bf0c1641773c9cead522fb3b6204044_::operator() @ 0x180021B3C (_lambda_3bf0c1641773c9cead522fb3b6204044_--operator().c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCManager_InitializationFailed_(ISMTracing *this, int a2)
{
  __int64 v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+10h] BYREF

  v9 = a2;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v3 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          v2,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v3 > 4u )
    {
      if ( TlgKeywordOn(v3, 1uLL) )
      {
        v8 = 0;
        v6 = &v9;
        v7 = 4;
        TlgWrite(v4, &unk_18019B5B7, 0LL, 0LL, 3u, &pData);
      }
    }
  }
}
