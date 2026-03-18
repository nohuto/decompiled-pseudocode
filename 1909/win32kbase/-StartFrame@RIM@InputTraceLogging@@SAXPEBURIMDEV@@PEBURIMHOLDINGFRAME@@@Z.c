/*
 * XREFs of ?StartFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@@Z @ 0x1C014C678
 * Callers:
 *     RIMStartPointerDeviceFrame @ 0x1C014D3B0 (RIMStartPointerDeviceFrame.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::StartFrame(const struct RIMDEV *a1, const struct RIMHOLDINGFRAME *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // rdx
  int v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  __int64 v8; // [rsp+38h] [rbp-31h] BYREF
  __int64 v9; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  __int64 *v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  int *v15; // [rsp+90h] [rbp+27h]
  __int64 v16; // [rsp+98h] [rbp+2Fh]
  int *v17; // [rsp+A0h] [rbp+37h]
  __int64 v18; // [rsp+A8h] [rbp+3Fh]

  if ( dword_1C020CB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL) )
    {
      v5 = *(_QWORD *)(v2 + 472);
      v11 = &v8;
      v9 = *(_QWORD *)(v3 + 32);
      v13 = &v9;
      v8 = v2;
      v12 = 8LL;
      v14 = 8LL;
      v6 = *(unsigned __int16 *)(v5 + 16);
      v15 = &v6;
      v16 = v4;
      v7 = *(unsigned __int16 *)(v5 + 18);
      v17 = &v7;
      v18 = v4;
      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E307E, 0LL, 0LL, 6u, &pData);
    }
  }
}
