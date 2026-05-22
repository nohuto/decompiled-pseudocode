/*
 * XREFs of ?MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z @ 0x18008E2B4
 * Callers:
 *     ??$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ0AEAI1AEAK2AEAW4InputType@@@Z @ 0x18008C6C8 (--$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_PointerUpdated_(
        ISMTracing *this,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-69h] BYREF
  int *v12; // [rsp+58h] [rbp-49h]
  int v13; // [rsp+60h] [rbp-41h]
  int v14; // [rsp+64h] [rbp-3Dh]
  int *v15; // [rsp+68h] [rbp-39h]
  int v16; // [rsp+70h] [rbp-31h]
  int v17; // [rsp+74h] [rbp-2Dh]
  int *v18; // [rsp+78h] [rbp-29h]
  int v19; // [rsp+80h] [rbp-21h]
  int v20; // [rsp+84h] [rbp-1Dh]
  char *v21; // [rsp+88h] [rbp-19h]
  int v22; // [rsp+90h] [rbp-11h]
  int v23; // [rsp+94h] [rbp-Dh]
  char *v24; // [rsp+98h] [rbp-9h]
  int v25; // [rsp+A0h] [rbp-1h]
  int v26; // [rsp+A4h] [rbp+3h]
  char *v27; // [rsp+A8h] [rbp+7h]
  int v28; // [rsp+B0h] [rbp+Fh]
  int v29; // [rsp+B4h] [rbp+13h]
  char *v30; // [rsp+B8h] [rbp+17h]
  int v31; // [rsp+C0h] [rbp+1Fh]
  int v32; // [rsp+C4h] [rbp+23h]
  int v33; // [rsp+F0h] [rbp+4Fh] BYREF
  int v34; // [rsp+F8h] [rbp+57h] BYREF
  int v35; // [rsp+100h] [rbp+5Fh] BYREF

  v35 = a4;
  v34 = a3;
  v33 = a2;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v9 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          v8,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v9 > 5u )
    {
      if ( TlgKeywordOn(v9, 1uLL) )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v12 = &v33;
        v15 = &v34;
        v18 = &v35;
        v21 = &a5;
        v24 = &a6;
        v27 = &a7;
        v30 = &a8;
        v13 = 4;
        v16 = 4;
        v19 = 4;
        v22 = 4;
        v25 = 4;
        v28 = 4;
        v31 = 4;
        TlgWrite(v10, &unk_18019BFA9, 0LL, 0LL, 9u, &pData);
      }
    }
  }
}
