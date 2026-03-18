/*
 * XREFs of ?DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z @ 0x1C0142A04
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C014312C (RIMDeliverConfigRequest.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::DeliverConfigRequest(const struct RIMDEV *a1, __int16 a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  __int16 *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  int *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]
  __int16 v12; // [rsp+B8h] [rbp+6Fh] BYREF
  int v13; // [rsp+C0h] [rbp+77h] BYREF

  v13 = a3;
  v12 = a2;
  if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v4 = v3;
      v6 = &v4;
      v8 = &v12;
      v10 = &v13;
      v7 = 8LL;
      v9 = 2LL;
      v11 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E4BE0, 0LL, 0LL, 5u, &pData);
    }
  }
}
