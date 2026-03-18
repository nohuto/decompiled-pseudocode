/*
 * XREFs of ?ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z @ 0x1C0159504
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::ProcessWheel(
        __int64 a1,
        const struct tagPOINT *a2,
        __int64 a3,
        __int16 a4,
        unsigned int a5,
        HWND a6,
        bool a7)
{
  int *v7; // r9
  int v8; // r10d
  __int64 v9; // r11
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  BOOL v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  HWND v16; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  int *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  int *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  __int16 *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  unsigned int *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  HWND *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  BOOL *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  __int16 v34; // [rsp+138h] [rbp+38h] BYREF

  v34 = a4;
  if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x40uLL) )
    {
      v15 = v9;
      v18 = &v15;
      v10 = *v7;
      v20 = &v10;
      v11 = v7[1];
      v22 = &v11;
      v24 = &v12;
      v26 = &v34;
      v13 = a5;
      v28 = &v13;
      v16 = a6;
      v30 = &v16;
      v14 = a7;
      v32 = &v14;
      v19 = 8LL;
      v21 = 4LL;
      v23 = 4LL;
      v12 = v8;
      v25 = 4LL;
      v27 = 2LL;
      v29 = 4LL;
      v31 = 8LL;
      v33 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A19CE, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
