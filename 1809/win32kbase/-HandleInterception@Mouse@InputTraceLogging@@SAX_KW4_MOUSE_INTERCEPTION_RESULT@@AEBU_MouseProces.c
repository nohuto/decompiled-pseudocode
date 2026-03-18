/*
 * XREFs of ?HandleInterception@Mouse@InputTraceLogging@@SAX_KW4_MOUSE_INTERCEPTION_RESULT@@AEBU_MouseProcessorData@@@Z @ 0x1C01581D8
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0158370 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 */

void InputTraceLogging::Mouse::HandleInterception()
{
  int v0; // r9d
  __int64 v1; // r10
  int v2; // r9d
  const CHAR *v3; // rdx
  __int64 v4; // r11
  int v5; // r9d
  int v6; // [rsp+30h] [rbp-19h] BYREF
  __int64 v7; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+27h] BYREF
  int *v13; // [rsp+80h] [rbp+37h]
  int v14; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+8Ch] [rbp+43h]

  if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x40uLL) )
  {
    v11 = 0;
    v7 = v1;
    v9 = &v7;
    v10 = 8;
    if ( v0 )
    {
      v2 = v0 - 1;
      if ( v2 )
      {
        if ( v2 == 1 )
          v3 = "RequestProcessing";
        else
          v3 = "UNKNOWN";
      }
      else
      {
        v3 = "ProcessedByInterceptor";
      }
    }
    else
    {
      v3 = "No-op";
    }
    TlgCreateSz(&pDesc, v3);
    v5 = *(_DWORD *)(v4 + 20);
    v15 = 0;
    v13 = &v6;
    v6 = v5;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A18DA, 0LL, 0LL, 5u, &pData);
  }
}
