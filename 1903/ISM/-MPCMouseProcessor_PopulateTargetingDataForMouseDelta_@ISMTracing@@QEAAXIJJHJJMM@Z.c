/*
 * XREFs of ?MPCMouseProcessor_PopulateTargetingDataForMouseDelta_@ISMTracing@@QEAAXIJJHJJMM@Z @ 0x18013B1F4
 * Callers:
 *     ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAJ1AEAH11AEAM3@Z @ 0x180139D14 (--$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTrac.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta_(
        ISMTracing *this,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        float a8,
        float a9)
{
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-81h] BYREF
  int *v12; // [rsp+58h] [rbp-61h]
  __int64 v13; // [rsp+60h] [rbp-59h]
  int *v14; // [rsp+68h] [rbp-51h]
  __int64 v15; // [rsp+70h] [rbp-49h]
  int *v16; // [rsp+78h] [rbp-41h]
  __int64 v17; // [rsp+80h] [rbp-39h]
  char *v18; // [rsp+88h] [rbp-31h]
  __int64 v19; // [rsp+90h] [rbp-29h]
  char *v20; // [rsp+98h] [rbp-21h]
  __int64 v21; // [rsp+A0h] [rbp-19h]
  char *v22; // [rsp+A8h] [rbp-11h]
  __int64 v23; // [rsp+B0h] [rbp-9h]
  float *v24; // [rsp+B8h] [rbp-1h]
  __int64 v25; // [rsp+C0h] [rbp+7h]
  float *v26; // [rsp+C8h] [rbp+Fh]
  __int64 v27; // [rsp+D0h] [rbp+17h]
  int v28; // [rsp+100h] [rbp+47h] BYREF
  int v29; // [rsp+108h] [rbp+4Fh] BYREF
  int v30; // [rsp+110h] [rbp+57h] BYREF

  v30 = a4;
  v29 = a3;
  v28 = a2;
  v9 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                        (__int64)this,
                                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v9 > 5u )
  {
    if ( TlgKeywordOn(v9, 1uLL) )
    {
      v13 = 4LL;
      v12 = &v28;
      v14 = &v29;
      v16 = &v30;
      v18 = &a5;
      v20 = &a6;
      v22 = &a7;
      v24 = &a8;
      v26 = &a9;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      TlgWrite(v10, &unk_1801A1085, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
