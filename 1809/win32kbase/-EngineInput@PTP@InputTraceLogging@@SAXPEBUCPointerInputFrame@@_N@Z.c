/*
 * XREFs of ?EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z @ 0x1C014A90C
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C014B724 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::PTP::EngineInput(const struct CPointerInputFrame *a1)
{
  __int64 v1; // r9
  unsigned __int8 v2; // r10
  __int64 v3; // r11
  int v4; // [rsp+30h] [rbp-49h] BYREF
  __int64 v5; // [rsp+38h] [rbp-41h] BYREF
  __int64 v6; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v8; // [rsp+70h] [rbp-9h]
  __int64 v9; // [rsp+78h] [rbp-1h]
  __int64 *v10; // [rsp+80h] [rbp+7h]
  __int64 v11; // [rsp+88h] [rbp+Fh]
  __int64 v12; // [rsp+90h] [rbp+17h]
  __int64 v13; // [rsp+98h] [rbp+1Fh]
  __int64 v14; // [rsp+A0h] [rbp+27h]
  __int64 v15; // [rsp+A8h] [rbp+2Fh]
  int *v16; // [rsp+B0h] [rbp+37h]
  __int64 v17; // [rsp+B8h] [rbp+3Fh]

  if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x80uLL) )
    {
      v5 = *(_QWORD *)(v1 + 80);
      v8 = &v5;
      v6 = *(_QWORD *)(v1 + 72);
      v10 = &v6;
      v12 = v1 + 40;
      v14 = v1 + 48;
      v4 = v2;
      v16 = &v4;
      v9 = 8LL;
      v11 = 8LL;
      v13 = v3;
      v15 = v3;
      v17 = v3;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A0D45, 0LL, 0LL, 7u, &pData);
    }
  }
}
