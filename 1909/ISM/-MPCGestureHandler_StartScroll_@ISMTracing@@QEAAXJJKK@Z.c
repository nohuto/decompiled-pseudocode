/*
 * XREFs of ?MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z @ 0x18008E3C0
 * Callers:
 *     ??$MPCGestureHandler_StartScroll@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x18008C758 (--$MPCGestureHandler_StartScroll@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_StartScroll_(ISMTracing *this, int a2, int a3, int a4, char a5)
{
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  int v8; // r9d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  int *v10; // [rsp+58h] [rbp-1h]
  int v11; // [rsp+60h] [rbp+7h]
  int v12; // [rsp+64h] [rbp+Bh]
  int *v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+74h] [rbp+1Bh]
  int *v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+84h] [rbp+2Bh]
  char *v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+90h] [rbp+37h]
  int v21; // [rsp+94h] [rbp+3Bh]
  int v22; // [rsp+C0h] [rbp+67h] BYREF
  int v23; // [rsp+C8h] [rbp+6Fh] BYREF
  int v24; // [rsp+D0h] [rbp+77h] BYREF

  v24 = a4;
  v23 = a3;
  v22 = a2;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          v5,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v6 > 4u )
    {
      if ( TlgKeywordOn(v6, 1uLL) )
      {
        v12 = 0;
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v10 = &v22;
        v13 = &v23;
        v16 = &v24;
        v19 = &a5;
        v11 = v8;
        v14 = v8;
        v17 = v8;
        v20 = v8;
        TlgWrite(v7, &unk_18019C02F, 0LL, 0LL, 6u, &pData);
      }
    }
  }
}
