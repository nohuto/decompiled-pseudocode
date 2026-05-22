/*
 * XREFs of ?MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z @ 0x180054FCC
 * Callers:
 *     ??$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z @ 0x180053208 (--$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCInputRouter_Update3DFocusWNF_(
        ISMTracing *this,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  int v10; // r9d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-51h] BYREF
  __int64 *v12; // [rsp+58h] [rbp-31h]
  int v13; // [rsp+60h] [rbp-29h]
  int v14; // [rsp+64h] [rbp-25h]
  __int64 *v15; // [rsp+68h] [rbp-21h]
  int v16; // [rsp+70h] [rbp-19h]
  int v17; // [rsp+74h] [rbp-15h]
  int *v18; // [rsp+78h] [rbp-11h]
  int v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+84h] [rbp-5h]
  char *v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+94h] [rbp+Bh]
  char *v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+A0h] [rbp+17h]
  int v26; // [rsp+A4h] [rbp+1Bh]
  char *v27; // [rsp+A8h] [rbp+1Fh]
  int v28; // [rsp+B0h] [rbp+27h]
  int v29; // [rsp+B4h] [rbp+2Bh]
  __int64 v30; // [rsp+E0h] [rbp+57h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+5Fh] BYREF
  int v32; // [rsp+F0h] [rbp+67h] BYREF

  v32 = a4;
  v31 = a3;
  v30 = a2;
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
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v12 = &v30;
        v15 = &v31;
        v18 = &v32;
        v21 = &a5;
        v24 = &a6;
        v27 = &a7;
        v13 = v10 + 4;
        v16 = v10 + 4;
        v19 = v10;
        v22 = v10;
        v25 = v10;
        v28 = v10;
        TlgWrite(v9, &unk_18019A593, 0LL, 0LL, v10 + 4, &pData);
      }
    }
  }
}
