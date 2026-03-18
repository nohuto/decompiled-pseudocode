/*
 * XREFs of ?DequeuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x180236BB0
 * Callers:
 *     ?OnInput@CGlobalManipulationManager@@AEAAXXZ @ 0x180237660 (-OnInput@CGlobalManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x1800A9A74 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::DequeuePointerFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // [rsp+38h] [rbp-29h] BYREF
  __int64 v10; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+7h]
  __int64 v13; // [rsp+70h] [rbp+Fh]
  __int64 *v14; // [rsp+78h] [rbp+17h]
  __int64 v15; // [rsp+80h] [rbp+1Fh]
  int *v16; // [rsp+88h] [rbp+27h]
  __int64 v17; // [rsp+90h] [rbp+2Fh]
  int *v18; // [rsp+98h] [rbp+37h]
  __int64 v19; // [rsp+A0h] [rbp+3Fh]
  int v20; // [rsp+D8h] [rbp+77h] BYREF
  int v21; // [rsp+E0h] [rbp+7Fh] BYREF

  v21 = a4;
  v20 = a3;
  v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<InputTraceLogging>::get(
                                        a1,
                                        (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 4u )
  {
    if ( TlgKeywordOn(v6, 0x800uLL) )
    {
      v9 = a1;
      v12 = &v9;
      v14 = &v10;
      v16 = &v20;
      v18 = &v21;
      v13 = 8LL;
      v10 = a2;
      v15 = 8LL;
      v17 = v8;
      v19 = v8;
      TlgWrite(v7, &unk_1802DE554, 0LL, 0LL, 6u, &pData);
    }
  }
}
