/*
 * XREFs of ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x1802390EC
 * Callers:
 *     ?RouteFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180238D5C (-RouteFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x1800A9A74 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::RoutePointer(__int64 a1, __int64 a2, int a3, int a4, void *a5)
{
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // [rsp+38h] [rbp-41h] BYREF
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v13; // [rsp+68h] [rbp-11h]
  __int64 v14; // [rsp+70h] [rbp-9h]
  __int64 *v15; // [rsp+78h] [rbp-1h]
  __int64 v16; // [rsp+80h] [rbp+7h]
  int *v17; // [rsp+88h] [rbp+Fh]
  __int64 v18; // [rsp+90h] [rbp+17h]
  int *v19; // [rsp+98h] [rbp+1Fh]
  __int64 v20; // [rsp+A0h] [rbp+27h]
  void **v21; // [rsp+A8h] [rbp+2Fh]
  __int64 v22; // [rsp+B0h] [rbp+37h]
  int v23; // [rsp+E8h] [rbp+6Fh] BYREF
  int v24; // [rsp+F0h] [rbp+77h] BYREF

  v24 = a4;
  v23 = a3;
  v7 = (const struct _TlgProvider_t *)wil::details::static_lazy<InputTraceLogging>::get(
                                        a1,
                                        (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 4u )
  {
    if ( TlgKeywordOn(v7, 0x800uLL) )
    {
      v10 = a1;
      v13 = &v10;
      v15 = &v11;
      v17 = &v23;
      v19 = &v24;
      v21 = &a5;
      v14 = 8LL;
      v11 = a2;
      v16 = 8LL;
      v18 = v9;
      v20 = v9;
      v22 = 8LL;
      TlgWrite(v8, &unk_1802DE6B0, 0LL, 0LL, 7u, &pData);
    }
  }
}
