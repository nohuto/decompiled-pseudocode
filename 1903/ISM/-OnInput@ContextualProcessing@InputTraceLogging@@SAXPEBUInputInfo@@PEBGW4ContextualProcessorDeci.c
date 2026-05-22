/*
 * XREFs of ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDecision@@PEBUIInputTarget@@J@Z @ 0x1800FB140
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800FA280 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014C3C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18005319C (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800928B8 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 */

char __fastcall InputTraceLogging::ContextualProcessing::OnInput(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        char a5)
{
  _QWORD *v9; // rax
  int v10; // ecx
  const char *v11; // rax
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  const CHAR *v15; // rdx
  TraceLoggingHProvider v16; // r10
  int v18; // [rsp+30h] [rbp-81h] BYREF
  __int64 v19; // [rsp+38h] [rbp-79h] BYREF
  __int64 v20; // [rsp+40h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-61h] BYREF
  __int64 *v22; // [rsp+70h] [rbp-41h]
  __int64 v23; // [rsp+78h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-31h] BYREF
  int *v25; // [rsp+90h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+A0h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+B0h] [rbp-1h] BYREF
  __int64 *v29; // [rsp+C0h] [rbp+Fh]
  __int64 v30; // [rsp+C8h] [rbp+17h]
  char *v31; // [rsp+D0h] [rbp+1Fh]
  __int64 v32; // [rsp+D8h] [rbp+27h]

  v9 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v9[1] > 4u )
  {
    LOBYTE(v9) = TlgKeywordOn((TraceLoggingHProvider)v9[1], 0x400uLL);
    if ( (_BYTE)v9 )
    {
      v10 = *(_DWORD *)a1;
      v19 = *(_QWORD *)(a1 + 16);
      v22 = &v19;
      v23 = 8LL;
      v11 = InputTraceLogging::InputTypeToString(v10);
      TlgCreateSz(&pDesc, v11);
      v18 = *(_DWORD *)(a1 + 4);
      v25 = &v18;
      v26 = 4LL;
      TlgCreateWsz(&v27, a2);
      if ( a3 )
      {
        v12 = a3 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 == 1 )
                v15 = "Listen";
              else
                v15 = "UNKNOWN";
            }
            else
            {
              v15 = "Drop";
            }
          }
          else
          {
            v15 = "Send";
          }
        }
        else
        {
          v15 = "Buffer";
        }
      }
      else
      {
        v15 = "Ignore";
      }
      TlgCreateSz(&v28, v15);
      v20 = a4;
      v29 = &v20;
      v31 = &a5;
      v30 = 8LL;
      v32 = 4LL;
      LOBYTE(v9) = TlgWrite(v16, &unk_1801A04E3, 0LL, 0LL, 9u, &pData);
    }
  }
  return (char)v9;
}
