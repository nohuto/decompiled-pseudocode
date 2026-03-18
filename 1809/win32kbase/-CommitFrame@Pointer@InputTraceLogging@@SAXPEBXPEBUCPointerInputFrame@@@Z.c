/*
 * XREFs of ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBXPEBUCPointerInputFrame@@@Z @ 0x1C01359E8
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C014A750 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Pointer::CommitFrame(const void *a1, const struct CPointerInputFrame *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // [rsp+30h] [rbp-39h] BYREF
  __int64 v5; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const void **v7; // [rsp+60h] [rbp-9h]
  __int64 v8; // [rsp+68h] [rbp-1h]
  __int64 *v9; // [rsp+70h] [rbp+7h]
  __int64 v10; // [rsp+78h] [rbp+Fh]
  __int64 *v11; // [rsp+80h] [rbp+17h]
  __int64 v12; // [rsp+88h] [rbp+1Fh]
  __int64 v13; // [rsp+90h] [rbp+27h]
  __int64 v14; // [rsp+98h] [rbp+2Fh]
  __int64 v15; // [rsp+A0h] [rbp+37h]
  __int64 v16; // [rsp+A8h] [rbp+3Fh]
  const void *v17; // [rsp+D0h] [rbp+67h] BYREF

  v17 = a1;
  if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x20uLL) )
    {
      v8 = 8LL;
      v7 = &v17;
      v4 = *(_QWORD *)(v2 + 80);
      v9 = &v4;
      v5 = *(_QWORD *)(v2 + 72);
      v11 = &v5;
      v13 = v2 + 40;
      v15 = v2 + 48;
      v10 = 8LL;
      v12 = 8LL;
      v14 = v3;
      v16 = v3;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A0540, 0LL, 0LL, 7u, &pData);
    }
  }
}
