/*
 * XREFs of ?GenerateFrameMessages@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0139B30
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Pointer::GenerateFrameMessages(const struct CPointerInputFrame *a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  __int64 v3; // [rsp+30h] [rbp-29h] BYREF
  __int64 v4; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v6; // [rsp+60h] [rbp+7h]
  __int64 v7; // [rsp+68h] [rbp+Fh]
  __int64 *v8; // [rsp+70h] [rbp+17h]
  __int64 v9; // [rsp+78h] [rbp+1Fh]
  __int64 v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  __int64 v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh]

  if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x20uLL) )
    {
      v3 = *(_QWORD *)(v1 + 80);
      v6 = &v3;
      v4 = *(_QWORD *)(v1 + 72);
      v8 = &v4;
      v10 = v1 + 40;
      v12 = v1 + 48;
      v7 = 8LL;
      v9 = 8LL;
      v11 = v2;
      v13 = v2;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A06B4, 0LL, 0LL, 6u, &pData);
    }
  }
}
