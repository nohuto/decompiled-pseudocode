/*
 * XREFs of ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1C01CD8A8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingCreateWindowFailed(int a1, __int64 a2)
{
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v4; // [rsp+60h] [rbp+17h]
  __int64 v5; // [rsp+68h] [rbp+1Fh]
  int *v6; // [rsp+70h] [rbp+27h]
  __int64 v7; // [rsp+78h] [rbp+2Fh]
  __int64 *v8; // [rsp+80h] [rbp+37h]
  __int64 v9; // [rsp+88h] [rbp+3Fh]
  int v10; // [rsp+B0h] [rbp+67h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+6Fh] BYREF

  v11 = a2;
  v10 = a1;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v2 = 0x1000000LL;
      v4 = &v2;
      v6 = &v10;
      v8 = &v11;
      v5 = 8LL;
      v7 = 4LL;
      v9 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E5681, 0LL, 0LL, 5u, &pData);
    }
  }
}
