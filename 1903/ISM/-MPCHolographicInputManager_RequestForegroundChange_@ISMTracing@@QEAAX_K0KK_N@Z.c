/*
 * XREFs of ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x180082410
 * Callers:
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x1800837CC (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(
        ISMTracing *this,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        bool a6)
{
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  int v9; // r9d
  int v10; // r10d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-39h] BYREF
  __int64 *v12; // [rsp+58h] [rbp-19h]
  int v13; // [rsp+60h] [rbp-11h]
  int v14; // [rsp+64h] [rbp-Dh]
  __int64 *v15; // [rsp+68h] [rbp-9h]
  int v16; // [rsp+70h] [rbp-1h]
  int v17; // [rsp+74h] [rbp+3h]
  int *v18; // [rsp+78h] [rbp+7h]
  int v19; // [rsp+80h] [rbp+Fh]
  int v20; // [rsp+84h] [rbp+13h]
  char *v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+90h] [rbp+1Fh]
  int v23; // [rsp+94h] [rbp+23h]
  bool *v24; // [rsp+98h] [rbp+27h]
  int v25; // [rsp+A0h] [rbp+2Fh]
  int v26; // [rsp+A4h] [rbp+33h]
  __int64 v27; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v28; // [rsp+D8h] [rbp+67h] BYREF
  int v29; // [rsp+E0h] [rbp+6Fh] BYREF

  v29 = a4;
  v28 = a3;
  v27 = a2;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v7 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          v6,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v7 > 4u )
    {
      if ( TlgKeywordOn(v7, 1uLL) )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v12 = &v27;
        v15 = &v28;
        v18 = &v29;
        v21 = &a5;
        v24 = &a6;
        v13 = v9 + 4;
        v16 = v9 + 4;
        v19 = v9;
        v22 = v9;
        v25 = v10;
        TlgWrite(v8, &unk_18019B98F, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
