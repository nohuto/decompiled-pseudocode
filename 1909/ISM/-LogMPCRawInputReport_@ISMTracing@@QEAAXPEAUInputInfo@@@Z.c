/*
 * XREFs of ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z @ 0x1800943F0
 * Callers:
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x1800948C4 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x180057810 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 */

void __fastcall ISMTracing::LogMPCRawInputReport_(ISMTracing *this, struct InputInfo *a2)
{
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  int v9; // [rsp+30h] [rbp-49h] BYREF
  int v10; // [rsp+34h] [rbp-45h] BYREF
  int v11; // [rsp+38h] [rbp-41h] BYREF
  int v12; // [rsp+3Ch] [rbp-3Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v14; // [rsp+60h] [rbp-19h]
  __int64 v15; // [rsp+68h] [rbp-11h]
  int *v16; // [rsp+70h] [rbp-9h]
  __int64 v17; // [rsp+78h] [rbp-1h]
  char *v18; // [rsp+80h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  char *v20; // [rsp+90h] [rbp+17h]
  __int64 v21; // [rsp+98h] [rbp+1Fh]
  int *v22; // [rsp+A0h] [rbp+27h]
  __int64 v23; // [rsp+A8h] [rbp+2Fh]
  int *v24; // [rsp+B0h] [rbp+37h]
  __int64 v25; // [rsp+B8h] [rbp+3Fh]

  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    if ( ((*((_DWORD *)a2 + 16) - 6) & 0xFFFFFFFD) != 0 )
    {
      v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                            v3,
                                            lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v4 > 4u )
      {
        if ( TlgKeywordOn(v4, 1uLL) )
        {
          v9 = *(_DWORD *)a2;
          v14 = &v9;
          v10 = *((_DWORD *)a2 + 1);
          v16 = &v10;
          v18 = (char *)a2 + 8;
          v20 = (char *)a2 + 72;
          v11 = *((_DWORD *)a2 + 16);
          v22 = &v11;
          v12 = *((_DWORD *)a2 + 17);
          v24 = &v12;
          v15 = v6;
          v17 = v6;
          v19 = v6;
          v21 = v6;
          v23 = v6;
          v25 = v6;
          TlgWrite(v5, &unk_18019C37D, 0LL, 0LL, 8u, &pData);
        }
      }
    }
    else
    {
      v7 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                            v3,
                                            lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v7 > 5u && TlgKeywordOn(v7, 1uLL) )
      {
        v12 = *(_DWORD *)a2;
        v14 = &v12;
        v11 = *((_DWORD *)a2 + 1);
        v16 = &v11;
        v18 = (char *)a2 + 8;
        v20 = (char *)a2 + 72;
        v10 = *((_DWORD *)a2 + 16);
        v22 = &v10;
        v9 = *((_DWORD *)a2 + 17);
        v24 = &v9;
        v15 = 4LL;
        v17 = 4LL;
        v19 = 4LL;
        v21 = 4LL;
        v23 = 4LL;
        v25 = 4LL;
        TlgWrite(v8, &unk_18019C3FB, 0LL, 0LL, 8u, &pData);
      }
    }
  }
}
