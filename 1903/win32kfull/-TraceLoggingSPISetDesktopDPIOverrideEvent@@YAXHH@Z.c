/*
 * XREFs of ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C01CF090
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSPISetDesktopDPIOverrideEvent(__int64 a1, int a2)
{
  int v2; // [rsp+30h] [rbp-19h] BYREF
  __int64 v3; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v5; // [rsp+60h] [rbp+17h]
  __int64 v6; // [rsp+68h] [rbp+1Fh]
  int *v7; // [rsp+70h] [rbp+27h]
  __int64 v8; // [rsp+78h] [rbp+2Fh]
  int *v9; // [rsp+80h] [rbp+37h]
  __int64 v10; // [rsp+88h] [rbp+3Fh]
  int v11; // [rsp+B8h] [rbp+6Fh] BYREF

  v11 = a2;
  v2 = 0xFFFF;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v3 = 0x1000000LL;
      v5 = &v3;
      v7 = &v2;
      v9 = &v11;
      v6 = 8LL;
      v8 = 4LL;
      v10 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E6A65, 0LL, 0LL, 5u, &pData);
    }
  }
}
