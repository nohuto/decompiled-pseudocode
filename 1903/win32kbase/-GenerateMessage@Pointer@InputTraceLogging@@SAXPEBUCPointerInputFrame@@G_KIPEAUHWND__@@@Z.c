/*
 * XREFs of ?GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z @ 0x1C0167EF8
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0167B6C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Pointer::GenerateMessage(
        const struct CPointerInputFrame *a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        HWND a5)
{
  int v5; // r9d
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // [rsp+30h] [rbp-81h] BYREF
  __int64 v9; // [rsp+38h] [rbp-79h] BYREF
  __int64 v10; // [rsp+40h] [rbp-71h] BYREF
  __int64 v11; // [rsp+48h] [rbp-69h] BYREF
  HWND v12; // [rsp+50h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-51h] BYREF
  __int64 *v14; // [rsp+80h] [rbp-31h]
  __int64 v15; // [rsp+88h] [rbp-29h]
  __int64 *v16; // [rsp+90h] [rbp-21h]
  __int64 v17; // [rsp+98h] [rbp-19h]
  __int64 v18; // [rsp+A0h] [rbp-11h]
  __int64 v19; // [rsp+A8h] [rbp-9h]
  __int16 *v20; // [rsp+B0h] [rbp-1h]
  __int64 v21; // [rsp+B8h] [rbp+7h]
  __int64 *v22; // [rsp+C0h] [rbp+Fh]
  __int64 v23; // [rsp+C8h] [rbp+17h]
  int *v24; // [rsp+D0h] [rbp+1Fh]
  __int64 v25; // [rsp+D8h] [rbp+27h]
  HWND *v26; // [rsp+E0h] [rbp+2Fh]
  __int64 v27; // [rsp+E8h] [rbp+37h]
  __int16 v28; // [rsp+118h] [rbp+67h] BYREF

  v28 = a2;
  if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x20uLL) )
    {
      v9 = *(_QWORD *)(v6 + 104);
      v14 = &v9;
      v10 = *(_QWORD *)(v6 + 72);
      v16 = &v10;
      v18 = v6 + 40;
      v20 = &v28;
      v22 = &v11;
      v24 = &v8;
      v12 = a5;
      v26 = &v12;
      v15 = 8LL;
      v17 = 8LL;
      v19 = 4LL;
      v21 = 2LL;
      v11 = v7;
      v23 = 8LL;
      v8 = v5;
      v25 = 4LL;
      v27 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E635A, 0LL, 0LL, 9u, &pData);
    }
  }
}
