/*
 * XREFs of ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C0198818
 * Callers:
 *     _lambda_6734545a6e0e853b7ddbd29772882ff2_::_lambda_invoker_cdecl_ @ 0x1C0177B10 (_lambda_6734545a6e0e853b7ddbd29772882ff2_--_lambda_invoker_cdecl_.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C0198740 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall PTPEngineTraceProducer::TraceEnvironment(PTPEngineTraceProducer *this, const struct PTPEnvironment *a2)
{
  char *v3; // rbx
  unsigned int v4; // r9d
  unsigned int v5; // r9d
  unsigned int v6; // r9d
  _DWORD v7[4]; // [rsp+38h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  char *v9; // [rsp+68h] [rbp-9h]
  __int64 v10; // [rsp+70h] [rbp-1h]
  _DWORD *v11; // [rsp+78h] [rbp+7h]
  __int64 v12; // [rsp+80h] [rbp+Fh]
  __int64 *v13; // [rsp+88h] [rbp+17h]
  __int64 v14; // [rsp+90h] [rbp+1Fh]
  const struct PTPEnvironment *v15; // [rsp+98h] [rbp+27h]
  __int64 v16; // [rsp+A0h] [rbp+2Fh] BYREF

  if ( dword_1C020C490 > 5u )
  {
    v3 = (char *)this + 552;
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 3uLL) )
    {
      v9 = v3;
      v11 = v7;
      v13 = &v16;
      v15 = (const struct PTPEnvironment *)((char *)a2 + 412);
      v10 = 8LL;
      v7[0] = 1;
      v12 = 4LL;
      v14 = 2LL;
      v16 = 96LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E6C72, 0LL, 0LL, 6u, &pData);
      v4 = dword_1C020C490;
    }
    if ( v4 > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 3uLL) )
      {
        v9 = v3;
        v11 = v7;
        v13 = &v16;
        v10 = 8LL;
        v7[0] = 2;
        v12 = 4LL;
        v14 = 2LL;
        v15 = a2;
        v16 = 92LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E6B72, 0LL, 0LL, 6u, &pData);
        v5 = dword_1C020C490;
      }
      if ( v5 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 3uLL) )
        {
          v9 = v3;
          v11 = v7;
          v13 = &v16;
          v15 = (const struct PTPEnvironment *)((char *)a2 + 388);
          v10 = 8LL;
          v7[0] = 1;
          v12 = 4LL;
          v14 = 2LL;
          v16 = 24LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E6AAC, 0LL, 0LL, 6u, &pData);
          v6 = dword_1C020C490;
        }
        if ( v6 > 5 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 3uLL) )
          {
            v9 = v3;
            v11 = v7;
            v13 = &v16;
            v15 = (const struct PTPEnvironment *)((char *)a2 + 92);
            v10 = 8LL;
            v7[0] = 10;
            v12 = 4LL;
            v14 = 2LL;
            v16 = 296LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E6AF0, 0LL, 0LL, 6u, &pData);
          }
        }
      }
    }
  }
}
