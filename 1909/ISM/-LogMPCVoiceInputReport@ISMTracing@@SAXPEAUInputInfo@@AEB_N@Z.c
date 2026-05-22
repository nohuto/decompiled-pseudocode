/*
 * XREFs of ?LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18013DB60
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x18013D900 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::LogMPCVoiceInputReport(struct InputInfo *a1, const bool *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // rdx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // r9
  int v8; // [rsp+30h] [rbp-79h] BYREF
  int v9; // [rsp+34h] [rbp-75h] BYREF
  int v10; // [rsp+38h] [rbp-71h] BYREF
  int v11; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v12; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v14; // [rsp+70h] [rbp-39h]
  __int64 v15; // [rsp+78h] [rbp-31h]
  int *v16; // [rsp+80h] [rbp-29h]
  __int64 v17; // [rsp+88h] [rbp-21h]
  char *v18; // [rsp+90h] [rbp-19h]
  __int64 v19; // [rsp+98h] [rbp-11h]
  const bool *v20; // [rsp+A0h] [rbp-9h]
  __int64 v21; // [rsp+A8h] [rbp-1h]
  char *v22; // [rsp+B0h] [rbp+7h]
  __int64 v23; // [rsp+B8h] [rbp+Fh]
  int *v24; // [rsp+C0h] [rbp+17h]
  __int64 v25; // [rsp+C8h] [rbp+1Fh]
  int *v26; // [rsp+D0h] [rbp+27h]
  __int64 v27; // [rsp+D8h] [rbp+2Fh]
  int *v28; // [rsp+E0h] [rbp+37h]
  __int64 v29; // [rsp+E8h] [rbp+3Fh]

  v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                        (__int64)a1,
                                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v4 > 4u )
  {
    if ( TlgKeywordOn(v4, 1uLL) )
    {
      v8 = *(_DWORD *)a1;
      v14 = &v8;
      v9 = *((_DWORD *)a1 + 1);
      v16 = &v9;
      v18 = (char *)a1 + 8;
      v22 = (char *)a1 + 72;
      v10 = *((_DWORD *)a1 + 16);
      v24 = &v10;
      v11 = *((_DWORD *)a1 + 17);
      v26 = &v11;
      v12 = *((_DWORD *)a1 + 176);
      v28 = &v12;
      v15 = v7;
      v17 = v7;
      v19 = v7;
      v20 = a2;
      v21 = v5;
      v23 = v7;
      v25 = v7;
      v27 = v7;
      v29 = v7;
      TlgWrite(v6, &unk_1801A12B0, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
