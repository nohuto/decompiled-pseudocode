/*
 * XREFs of ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@K@Z @ 0x1C016FC64
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0164A90 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Pointer::SendFrameToUserMode(const struct CPointerInputFrame *a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // [rsp+30h] [rbp-29h] BYREF
  __int64 v5; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v7; // [rsp+60h] [rbp+7h]
  __int64 v8; // [rsp+68h] [rbp+Fh]
  __int64 *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  __int64 v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  int *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+C8h] [rbp+6Fh] BYREF

  v15 = a2;
  if ( dword_1C020CB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x20uLL) )
    {
      v4 = *(_QWORD *)(v2 + 104);
      v7 = &v4;
      v5 = *(_QWORD *)(v2 + 72);
      v9 = &v5;
      v11 = v2 + 40;
      v13 = &v15;
      v8 = 8LL;
      v10 = 8LL;
      v12 = v3;
      v14 = v3;
      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E4C0A, 0LL, 0LL, 6u, &pData);
    }
  }
}
