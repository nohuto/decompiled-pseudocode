/*
 * XREFs of ?MPCGestureHandler_PointerUp_@ISMTracing@@QEAAXJJIKK@Z @ 0x18008E3D4
 * Callers:
 *     ??$MPCGestureHandler_PointerUp@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z @ 0x18008C894 (--$MPCGestureHandler_PointerUp@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_PointerUp_(ISMTracing *this, int a2, int a3, int a4, char a5, char a6)
{
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  int v9; // r9d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-39h] BYREF
  int *v11; // [rsp+58h] [rbp-19h]
  int v12; // [rsp+60h] [rbp-11h]
  int v13; // [rsp+64h] [rbp-Dh]
  int *v14; // [rsp+68h] [rbp-9h]
  int v15; // [rsp+70h] [rbp-1h]
  int v16; // [rsp+74h] [rbp+3h]
  int *v17; // [rsp+78h] [rbp+7h]
  int v18; // [rsp+80h] [rbp+Fh]
  int v19; // [rsp+84h] [rbp+13h]
  char *v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+94h] [rbp+23h]
  char *v23; // [rsp+98h] [rbp+27h]
  int v24; // [rsp+A0h] [rbp+2Fh]
  int v25; // [rsp+A4h] [rbp+33h]
  int v26; // [rsp+D0h] [rbp+5Fh] BYREF
  int v27; // [rsp+D8h] [rbp+67h] BYREF
  int v28; // [rsp+E0h] [rbp+6Fh] BYREF

  v28 = a4;
  v27 = a3;
  v26 = a2;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v7 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          v6,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v7 > 4u )
    {
      if ( TlgKeywordOn(v7, 1uLL) )
      {
        v13 = 0;
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v11 = &v28;
        v14 = &v26;
        v17 = &v27;
        v20 = &a5;
        v23 = &a6;
        v12 = v9;
        v15 = v9;
        v18 = v9;
        v21 = v9;
        v24 = v9;
        TlgWrite(v8, &unk_18019C0F1, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
