/*
 * XREFs of ?LogMPCGenericInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18013D30C
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x18013D900 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::LogMPCGenericInputReport(struct InputInfo *a1, const bool *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // rdx
  const struct _TlgProvider_t *v6; // rcx
  int v7; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+34h] [rbp-55h] BYREF
  int v9; // [rsp+38h] [rbp-51h] BYREF
  int v10; // [rsp+3Ch] [rbp-4Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  int *v12; // [rsp+60h] [rbp-29h]
  __int64 v13; // [rsp+68h] [rbp-21h]
  int *v14; // [rsp+70h] [rbp-19h]
  __int64 v15; // [rsp+78h] [rbp-11h]
  char *v16; // [rsp+80h] [rbp-9h]
  __int64 v17; // [rsp+88h] [rbp-1h]
  const bool *v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]
  char *v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+A8h] [rbp+1Fh]
  int *v22; // [rsp+B0h] [rbp+27h]
  __int64 v23; // [rsp+B8h] [rbp+2Fh]
  int *v24; // [rsp+C0h] [rbp+37h]
  __int64 v25; // [rsp+C8h] [rbp+3Fh]

  v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                        (__int64)a1,
                                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v4 > 5u )
  {
    if ( TlgKeywordOn(v4, 1uLL) )
    {
      v7 = *(_DWORD *)a1;
      v12 = &v7;
      v8 = *((_DWORD *)a1 + 1);
      v14 = &v8;
      v16 = (char *)a1 + 8;
      v20 = (char *)a1 + 72;
      v9 = *((_DWORD *)a1 + 16);
      v22 = &v9;
      v10 = *((_DWORD *)a1 + 17);
      v24 = &v10;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v18 = a2;
      v19 = v5;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      TlgWrite(v6, &unk_1801A181D, 0LL, 0LL, 9u, &pData);
    }
  }
}
