/*
 * XREFs of ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x1800F950C
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800F961C (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014C3C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18005319C (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800928B8 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     ?ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z @ 0x1800F9928 (-ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z.c)
 */

char __fastcall InputTraceLogging::ContextualProcessing::OnHitTest(__int64 a1, const WCHAR *a2, unsigned int a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  const char *v9; // rax
  int v10; // r9d
  const CHAR *v11; // rax
  TraceLoggingHProvider v12; // r10
  int v14; // [rsp+30h] [rbp-49h] BYREF
  __int64 v15; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  __int64 *v17; // [rsp+60h] [rbp-19h]
  int v18; // [rsp+68h] [rbp-11h]
  int v19; // [rsp+6Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  int *v21; // [rsp+80h] [rbp+7h]
  int v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+8Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+90h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+A0h] [rbp+27h] BYREF

  v6 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v6[1] > 4u )
  {
    LOBYTE(v6) = TlgKeywordOn((TraceLoggingHProvider)v6[1], 0x400uLL);
    if ( (_BYTE)v6 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      v8 = *(_DWORD *)a1;
      v19 = 0;
      v15 = v7;
      v17 = &v15;
      v18 = 8;
      v9 = InputTraceLogging::InputTypeToString(v8);
      TlgCreateSz(&pDesc, v9);
      v10 = *(_DWORD *)(a1 + 4);
      v23 = 0;
      v21 = &v14;
      v14 = v10;
      v22 = 4;
      TlgCreateWsz(&v24, a2);
      v11 = (const CHAR *)InputTraceLogging::ProcessorStateToString(a3);
      TlgCreateSz(&v25, v11);
      LOBYTE(v6) = TlgWrite(v12, &unk_1801A03CB, 0LL, 0LL, 7u, &pData);
    }
  }
  return (char)v6;
}
