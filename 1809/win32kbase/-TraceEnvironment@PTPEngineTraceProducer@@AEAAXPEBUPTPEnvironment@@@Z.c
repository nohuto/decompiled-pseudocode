/*
 * XREFs of ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C0160894
 * Callers:
 *     _lambda_6734545a6e0e853b7ddbd29772882ff2_::_lambda_invoker_cdecl_ @ 0x1C014A2F0 (_lambda_6734545a6e0e853b7ddbd29772882ff2_--_lambda_invoker_cdecl_.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C01607F0 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall PTPEngineTraceProducer::TraceEnvironment(PTPEngineTraceProducer *this, const struct PTPEnvironment *a2)
{
  char *v4; // rbx
  unsigned int v5; // r9d
  unsigned int v6; // r9d
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  _DWORD v9[4]; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  char *v11; // [rsp+68h] [rbp-19h]
  __int64 v12; // [rsp+70h] [rbp-11h]
  _DWORD *v13; // [rsp+78h] [rbp-9h]
  __int64 v14; // [rsp+80h] [rbp-1h]
  __int64 *v15; // [rsp+88h] [rbp+7h]
  __int64 v16; // [rsp+90h] [rbp+Fh]
  const struct PTPEnvironment *v17; // [rsp+98h] [rbp+17h]
  __int64 v18; // [rsp+A0h] [rbp+1Fh] BYREF

  if ( dword_1C01C7A38 > 5u )
  {
    v4 = (char *)this + 576;
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 3uLL) )
    {
      v11 = v4;
      v13 = v9;
      v15 = &v18;
      v17 = (const struct PTPEnvironment *)((char *)a2 + 440);
      v12 = 8LL;
      v9[0] = 1;
      v14 = 4LL;
      v16 = 2LL;
      v18 = 96LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C01A1F12, 0LL, 0LL, 6u, &pData);
      v5 = dword_1C01C7A38;
    }
    if ( v5 > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 3uLL) )
      {
        v11 = v4;
        v13 = v9;
        v15 = &v18;
        v17 = (const struct PTPEnvironment *)((char *)a2 + 412);
        v12 = 8LL;
        v9[0] = 1;
        v14 = 4LL;
        v16 = 2LL;
        v18 = 28LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C01A1E0C, 0LL, 0LL, 6u, &pData);
        v6 = dword_1C01C7A38;
      }
      else
      {
        v4 = (char *)this + 576;
      }
      if ( v6 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 3uLL) )
        {
          v11 = v4;
          v13 = v9;
          v15 = &v18;
          v12 = 8LL;
          v9[0] = 1;
          v14 = 4LL;
          v16 = 2LL;
          v17 = a2;
          v18 = 92LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C01A1D04, 0LL, 0LL, 6u, &pData);
          v7 = dword_1C01C7A38;
        }
        else
        {
          v4 = (char *)this + 576;
        }
        if ( v7 > 5 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 3uLL) )
          {
            v11 = v4;
            v13 = v9;
            v15 = &v18;
            v17 = (const struct PTPEnvironment *)((char *)a2 + 388);
            v12 = 8LL;
            v9[0] = 1;
            v14 = 4LL;
            v16 = 2LL;
            v18 = 24LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C01A1D46, 0LL, 0LL, 6u, &pData);
            v8 = dword_1C01C7A38;
          }
          else
          {
            v4 = (char *)this + 576;
          }
          if ( v8 > 5 )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 3uLL) )
            {
              v11 = v4;
              v13 = v9;
              v15 = &v18;
              v17 = (const struct PTPEnvironment *)((char *)a2 + 92);
              v12 = 8LL;
              v9[0] = 9;
              v14 = 4LL;
              v16 = 2LL;
              v18 = 296LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C01A1DC8, 0LL, 0LL, 6u, &pData);
            }
          }
        }
      }
    }
  }
}
