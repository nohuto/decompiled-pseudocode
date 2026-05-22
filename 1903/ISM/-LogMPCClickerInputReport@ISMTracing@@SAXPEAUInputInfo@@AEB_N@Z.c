/*
 * XREFs of ?LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18013D100
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x18013D8C0 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall ISMTracing::LogMPCClickerInputReport(struct InputInfo *a1, const bool *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // rdx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // r9
  const struct _TlgProvider_t *v8; // rcx
  __int64 v9; // rdx
  const struct _TlgProvider_t *v10; // rcx
  int v11; // [rsp+30h] [rbp-49h] BYREF
  int v12; // [rsp+34h] [rbp-45h] BYREF
  int v13; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v15; // [rsp+60h] [rbp-19h]
  __int64 v16; // [rsp+68h] [rbp-11h]
  int *v17; // [rsp+70h] [rbp-9h]
  __int64 v18; // [rsp+78h] [rbp-1h]
  char *v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+Fh]
  const bool *v21; // [rsp+90h] [rbp+17h]
  __int64 v22; // [rsp+98h] [rbp+1Fh]
  char *v23; // [rsp+A0h] [rbp+27h]
  __int64 v24; // [rsp+A8h] [rbp+2Fh]
  int *v25; // [rsp+B0h] [rbp+37h]
  __int64 v26; // [rsp+B8h] [rbp+3Fh]

  if ( *((_DWORD *)a1 + 17) == 3 || *((_DWORD *)a1 + 17) == 6 )
  {
    v8 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          (__int64)a1,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v8 > 5u && TlgKeywordOn(v8, 1uLL) )
    {
      v13 = *(_DWORD *)a1;
      v15 = &v13;
      v12 = *((_DWORD *)a1 + 1);
      v17 = &v12;
      v19 = (char *)a1 + 8;
      v23 = (char *)a1 + 72;
      v11 = *((_DWORD *)a1 + 17);
      v25 = &v11;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v21 = a2;
      v22 = v9;
      v24 = 4LL;
      v26 = 4LL;
      TlgWrite(v10, &unk_1801A14D1, 0LL, 0LL, 8u, &pData);
    }
  }
  else
  {
    v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          (__int64)a1,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v4 > 4u )
    {
      if ( TlgKeywordOn(v4, 1uLL) )
      {
        v11 = *(_DWORD *)a1;
        v15 = &v11;
        v12 = *((_DWORD *)a1 + 1);
        v17 = &v12;
        v19 = (char *)a1 + 8;
        v23 = (char *)a1 + 72;
        v13 = *((_DWORD *)a1 + 17);
        v25 = &v13;
        v16 = v7;
        v18 = v7;
        v20 = v7;
        v21 = a2;
        v22 = v5;
        v24 = v7;
        v26 = v7;
        TlgWrite(v6, &unk_1801A185B, 0LL, 0LL, 8u, &pData);
      }
    }
  }
}
