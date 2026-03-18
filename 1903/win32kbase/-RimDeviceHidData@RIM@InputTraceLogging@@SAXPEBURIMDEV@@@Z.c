/*
 * XREFs of ?RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0134C14
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C006C9DC (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::RimDeviceHidData(const struct RIMDEV *a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  __int64 v3; // rdx
  int v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  __int64 v6; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v3 = *(_QWORD *)(v1 + 472);
      v8 = &v6;
      v6 = v1;
      v9 = 8LL;
      v4 = *(unsigned __int16 *)(v3 + 16);
      v10 = &v4;
      v11 = v2;
      v5 = *(unsigned __int16 *)(v3 + 18);
      v12 = &v5;
      v13 = v2;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E457B, 0LL, 0LL, 5u, &pData);
    }
  }
}
