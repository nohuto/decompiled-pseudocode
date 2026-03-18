/*
 * XREFs of ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C011AC28
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSPISetMenuDropAlignmentEvent()
{
  char v0; // r9
  char v1; // r10
  char v2; // [rsp+30h] [rbp-19h] BYREF
  char v3; // [rsp+31h] [rbp-18h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  char *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  char *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v4 = 0x1000000LL;
      v6 = &v4;
      v8 = &v2;
      v10 = &v3;
      v7 = 8LL;
      v2 = v1;
      v9 = 1LL;
      v3 = v0;
      v11 = 1LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E56AD, 0LL, 0LL, 5u, &pData);
    }
  }
}
