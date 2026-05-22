/*
 * XREFs of ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800BE4E4
 * Callers:
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAUInputContext@@@Z@std@@V?$function@$$A6AXPEAUInputInfo@@@Z@4@@Z @ 0x1800BC3D0 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAUInputCon.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014BAC (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x180092698 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 */

void __fastcall InputTraceLogging::ContextualProcessing::ReceiveInput(const struct InputInfo *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  int v4; // ecx
  const char *v5; // rax
  int v6; // r9d
  TraceLoggingHProvider v7; // r10
  int v8; // [rsp+30h] [rbp-19h] BYREF
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+27h] BYREF
  int *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v2[1] > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v2[1], 0x400uLL) )
    {
      v3 = *((_QWORD *)a1 + 2);
      v4 = *(_DWORD *)a1;
      v13 = 0;
      v9 = v3;
      v11 = &v9;
      v12 = 8;
      v5 = InputTraceLogging::InputTypeToString(v4);
      TlgCreateSz(&pDesc, v5);
      v6 = *((_DWORD *)a1 + 1);
      v17 = 0;
      v15 = &v8;
      v8 = v6;
      v16 = 4;
      TlgWrite(v7, &unk_18019D9BB, 0LL, 0LL, 5u, &pData);
    }
  }
}
