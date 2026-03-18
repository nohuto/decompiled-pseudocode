/*
 * XREFs of ?GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z @ 0x1C017A968
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C017B000 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::PTP::GestureOutput(
        const struct CPointerInputFrame *a1,
        const struct PTPEngineOutput *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  unsigned __int8 v4; // r11
  bool v5; // zf
  BOOL v6; // [rsp+30h] [rbp-59h] BYREF
  int v7; // [rsp+34h] [rbp-55h] BYREF
  __int64 v8; // [rsp+38h] [rbp-51h] BYREF
  __int64 v9; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-11h]
  __int64 *v13; // [rsp+80h] [rbp-9h]
  __int64 v14; // [rsp+88h] [rbp-1h]
  __int64 v15; // [rsp+90h] [rbp+7h]
  __int64 v16; // [rsp+98h] [rbp+Fh]
  __int64 v17; // [rsp+A0h] [rbp+17h]
  __int64 v18; // [rsp+A8h] [rbp+1Fh]
  BOOL *v19; // [rsp+B0h] [rbp+27h]
  __int64 v20; // [rsp+B8h] [rbp+2Fh]
  int *v21; // [rsp+C0h] [rbp+37h]
  __int64 v22; // [rsp+C8h] [rbp+3Fh]

  if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x80uLL) )
    {
      v5 = *(_DWORD *)(v3 + 8) == 0;
      v8 = *(_QWORD *)(v2 + 104);
      v11 = &v8;
      v9 = *(_QWORD *)(v2 + 72);
      v13 = &v9;
      v15 = v2 + 40;
      v17 = v3 + 16;
      v12 = 8LL;
      v6 = !v5;
      v19 = &v6;
      v7 = v4;
      v21 = &v7;
      v14 = 8LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E7173, 0LL, 0LL, 8u, &pData);
    }
  }
}
