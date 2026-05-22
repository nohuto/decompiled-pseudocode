/*
 * XREFs of ?MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N00K0M0@Z @ 0x180130B08
 * Callers:
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_NAEBI2$$QEAM1@Z @ 0x18012E33C (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_NAEBI2$$.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEvent_(
        ISMTracing *this,
        int a2,
        char a3,
        char a4,
        bool a5,
        char a6,
        bool a7,
        float a8,
        bool a9)
{
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // [rsp+38h] [rbp-A1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-91h] BYREF
  __int64 *v14; // [rsp+68h] [rbp-71h]
  __int64 v15; // [rsp+70h] [rbp-69h]
  int *v16; // [rsp+78h] [rbp-61h]
  __int64 v17; // [rsp+80h] [rbp-59h]
  char *v18; // [rsp+88h] [rbp-51h]
  __int64 v19; // [rsp+90h] [rbp-49h]
  char *v20; // [rsp+98h] [rbp-41h]
  __int64 v21; // [rsp+A0h] [rbp-39h]
  bool *v22; // [rsp+A8h] [rbp-31h]
  __int64 v23; // [rsp+B0h] [rbp-29h]
  char *v24; // [rsp+B8h] [rbp-21h]
  __int64 v25; // [rsp+C0h] [rbp-19h]
  bool *v26; // [rsp+C8h] [rbp-11h]
  __int64 v27; // [rsp+D0h] [rbp-9h]
  float *v28; // [rsp+D8h] [rbp-1h]
  __int64 v29; // [rsp+E0h] [rbp+7h]
  bool *v30; // [rsp+E8h] [rbp+Fh]
  __int64 v31; // [rsp+F0h] [rbp+17h]
  int v32; // [rsp+120h] [rbp+47h] BYREF
  char v33; // [rsp+128h] [rbp+4Fh] BYREF
  char v34; // [rsp+130h] [rbp+57h] BYREF

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v9 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                        (__int64)this,
                                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v9 > 4u )
  {
    if ( TlgKeywordOn(v9, 0x400000000001uLL) )
    {
      v12 = 50331648LL;
      v14 = &v12;
      v16 = &v32;
      v18 = &v33;
      v20 = &v34;
      v22 = &a5;
      v24 = &a6;
      v26 = &a7;
      v28 = &a8;
      v30 = &a9;
      v15 = 8LL;
      v17 = v11;
      v19 = 1LL;
      v21 = 1LL;
      v23 = 1LL;
      v25 = v11;
      v27 = 1LL;
      v29 = v11;
      v31 = 1LL;
      TlgWrite(v10, &unk_1801A0CBF, 0LL, 0LL, 0xBu, &pData);
    }
  }
}
