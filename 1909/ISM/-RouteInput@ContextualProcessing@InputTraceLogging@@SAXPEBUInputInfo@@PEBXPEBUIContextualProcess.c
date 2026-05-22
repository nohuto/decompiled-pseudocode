/*
 * XREFs of ?RouteInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBXPEBUIContextualProcessor@@_N33@Z @ 0x1800FB08C
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800FA050 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014BAC (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x180092698 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 */

void __fastcall InputTraceLogging::ContextualProcessing::RouteInput(
        const struct InputInfo *a1,
        const void *a2,
        const struct IContextualProcessor *a3,
        char a4,
        bool a5,
        bool a6)
{
  const WCHAR *v10; // r14
  const CHAR *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  const char *v15; // rax
  int v16; // ecx
  TraceLoggingHProvider v17; // r10
  int v18; // [rsp+30h] [rbp-69h] BYREF
  __int64 v19; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  __int64 *v21; // [rsp+60h] [rbp-39h]
  int v22; // [rsp+68h] [rbp-31h]
  int v23; // [rsp+6Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-29h] BYREF
  int *v25; // [rsp+80h] [rbp-19h]
  int v26; // [rsp+88h] [rbp-11h]
  int v27; // [rsp+8Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+90h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+A0h] [rbp+7h] BYREF

  if ( a3 )
    v10 = (const WCHAR *)(*(__int64 (__fastcall **)(const struct IContextualProcessor *))(*(_QWORD *)a3 + 48LL))(a3);
  else
    v10 = (const unsigned __int16 *)((char *)&word_180182F5B + 1);
  if ( a5 )
  {
    v11 = "Buffer";
  }
  else if ( a4 )
  {
    v11 = "Drop";
  }
  else if ( a2 )
  {
    v11 = "SendCustom";
  }
  else if ( a3 )
  {
    v11 = "Send";
  }
  else
  {
    v11 = "Listen";
    if ( !a6 )
      v11 = "Ignore";
  }
  v12 = wil::details::static_lazy<InputTraceLogging>::get(
          (__int64)a1,
          lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v12[1] > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v12[1], 0x400uLL) )
    {
      v13 = *((_QWORD *)a1 + 2);
      v14 = *(_DWORD *)a1;
      v23 = 0;
      v19 = v13;
      v21 = &v19;
      v22 = 8;
      v15 = InputTraceLogging::InputTypeToString(v14);
      TlgCreateSz(&pDesc, v15);
      v16 = *((_DWORD *)a1 + 1);
      v27 = 0;
      v18 = v16;
      v25 = &v18;
      v26 = 4;
      TlgCreateSz(&v28, v11);
      TlgCreateWsz(&v29, v10);
      TlgWrite(v17, &unk_1801A048F, 0LL, 0LL, 7u, &pData);
    }
  }
}
