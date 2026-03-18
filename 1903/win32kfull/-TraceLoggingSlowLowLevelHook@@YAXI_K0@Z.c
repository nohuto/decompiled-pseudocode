/*
 * XREFs of ?TraceLoggingSlowLowLevelHook@@YAXI_K0@Z @ 0x1C01CF4E8
 * Callers:
 *     ??1CCheckLLHookTime@@QEAA@XZ @ 0x1C0243C68 (--1CCheckLLHookTime@@QEAA@XZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSlowLowLevelHook(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v5; // [rsp+68h] [rbp+7h]
  __int64 v6; // [rsp+70h] [rbp+Fh]
  int *v7; // [rsp+78h] [rbp+17h]
  __int64 v8; // [rsp+80h] [rbp+1Fh]
  __int64 *v9; // [rsp+88h] [rbp+27h]
  __int64 v10; // [rsp+90h] [rbp+2Fh]
  __int64 *v11; // [rsp+98h] [rbp+37h]
  __int64 v12; // [rsp+A0h] [rbp+3Fh]
  int v13; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v14; // [rsp+D0h] [rbp+6Fh] BYREF
  __int64 v15; // [rsp+D8h] [rbp+77h] BYREF

  v15 = a3;
  v14 = a2;
  v13 = a1;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v3 = 0x1000000LL;
      v5 = &v3;
      v7 = &v13;
      v9 = &v14;
      v11 = &v15;
      v6 = 8LL;
      v8 = 4LL;
      v10 = 8LL;
      v12 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E56C9, 0LL, 0LL, 6u, &pData);
    }
  }
}
