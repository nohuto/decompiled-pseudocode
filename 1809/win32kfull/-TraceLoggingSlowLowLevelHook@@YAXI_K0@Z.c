/*
 * XREFs of ?TraceLoggingSlowLowLevelHook@@YAXI_K0@Z @ 0x1C01BB134
 * Callers:
 *     ??1CCheckLLHookTime@@QEAA@XZ @ 0x1C022AC40 (--1CCheckLLHookTime@@QEAA@XZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSlowLowLevelHook(int a1, __int64 a2, __int64 a3)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  int *v4; // [rsp+58h] [rbp+17h]
  __int64 v5; // [rsp+60h] [rbp+1Fh]
  __int64 *v6; // [rsp+68h] [rbp+27h]
  __int64 v7; // [rsp+70h] [rbp+2Fh]
  __int64 *v8; // [rsp+78h] [rbp+37h]
  __int64 v9; // [rsp+80h] [rbp+3Fh]
  int v10; // [rsp+A8h] [rbp+67h] BYREF
  __int64 v11; // [rsp+B0h] [rbp+6Fh] BYREF
  __int64 v12; // [rsp+B8h] [rbp+77h] BYREF

  v12 = a3;
  v11 = a2;
  v10 = a1;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v5 = 4LL;
      v4 = &v10;
      v6 = &v11;
      v8 = &v12;
      v7 = 8LL;
      v9 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D3487, 0LL, 0LL, 5u, &pData);
    }
  }
}
