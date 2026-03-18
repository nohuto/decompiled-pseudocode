/*
 * XREFs of ?BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0133F24
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0141A34 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Pointer::BufferInDelayZone(const struct CPointerInputFrame *a1)
{
  __int64 v1; // r9
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  __int64 v3; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v5; // [rsp+60h] [rbp+17h]
  __int64 v6; // [rsp+68h] [rbp+1Fh]
  __int64 *v7; // [rsp+70h] [rbp+27h]
  __int64 v8; // [rsp+78h] [rbp+2Fh]
  __int64 v9; // [rsp+80h] [rbp+37h]
  __int64 v10; // [rsp+88h] [rbp+3Fh]

  if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x20uLL) )
    {
      v2 = *(_QWORD *)(v1 + 80);
      v5 = &v2;
      v3 = *(_QWORD *)(v1 + 72);
      v7 = &v3;
      v9 = v1 + 40;
      v6 = 8LL;
      v8 = 8LL;
      v10 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A0A4E, 0LL, 0LL, 5u, &pData);
    }
  }
}
