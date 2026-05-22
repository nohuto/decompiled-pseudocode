/*
 * XREFs of ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x180054E2C
 * Callers:
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800549E8 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180054098 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void ISMTracing::MPCInputRouter_IsTargetHolographic_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        __int64 a4,
        ...)
{
  __int64 v5; // rcx
  _QWORD *v6; // rax
  const struct _TlgProvider_t *v7; // rbx
  int v8; // edx
  int PIDOfTarget; // [rsp+30h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-31h] BYREF
  va_list v11; // [rsp+60h] [rbp-11h]
  int v12; // [rsp+68h] [rbp-9h]
  int v13; // [rsp+6Ch] [rbp-5h]
  int *v14; // [rsp+70h] [rbp-1h]
  int v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+7Ch] [rbp+Bh]
  __int64 *v17; // [rsp+80h] [rbp+Fh]
  int v18; // [rsp+88h] [rbp+17h]
  int v19; // [rsp+8Ch] [rbp+1Bh]
  int *p_PIDOfTarget; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+9Ch] [rbp+2Bh]
  int v23; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v24; // [rsp+E8h] [rbp+77h] BYREF
  va_list va; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v24 = a4;
  v23 = a3;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v6 = wil::details::static_lazy<ISMTracing>::get(
           v5,
           lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v7 = (const struct _TlgProvider_t *)v6[1];
    if ( *(_DWORD *)v7 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)v6[1], 1uLL) )
      {
        v13 = 0;
        v16 = 0;
        v19 = 0;
        va_copy(v11, va);
        v14 = &v23;
        v17 = &v24;
        v12 = v8;
        v15 = 4;
        v18 = 8;
        v22 = 0;
        PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
        p_PIDOfTarget = &PIDOfTarget;
        v21 = 4;
        TlgWrite(v7, &unk_18019A850, 0LL, 0LL, 6u, &pData);
      }
    }
  }
}
