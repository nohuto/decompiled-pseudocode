/*
 * XREFs of ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C01BADFC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSPISetModernDPIOverrideEvent(__int64 a1, int a2)
{
  int v2; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  int *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]
  int v10; // [rsp+A8h] [rbp+10h] BYREF

  v10 = a2;
  v2 = 0xFFFF;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v6 = 0;
      v9 = 0;
      v4 = &v2;
      v7 = &v10;
      v5 = 4;
      v8 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D4533, 0LL, 0LL, 4u, &pData);
    }
  }
}
