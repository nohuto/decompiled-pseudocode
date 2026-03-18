/*
 * XREFs of ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C01CF5A0
 * Callers:
 *     NtUserInitializeTouchInjection @ 0x1C022FFB0 (NtUserInitializeTouchInjection.c)
 *     NtUserInjectTouchInput @ 0x1C0230380 (NtUserInjectTouchInput.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingTouchInjection(int a1, int a2, int a3)
{
  int v3; // r9d
  int v4; // r9d
  int v5; // [rsp+30h] [rbp-39h] BYREF
  __int64 v6; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-9h]
  __int64 v9; // [rsp+68h] [rbp-1h]
  const char *v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  int *v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  int *v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  int *v16; // [rsp+A0h] [rbp+37h]
  __int64 v17; // [rsp+A8h] [rbp+3Fh]
  int v18; // [rsp+D8h] [rbp+6Fh] BYREF
  int v19; // [rsp+E0h] [rbp+77h] BYREF

  v19 = a3;
  v18 = a2;
  if ( a1 == 1 )
  {
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
      {
        v6 = 0x1000000LL;
        v8 = &v6;
        v14 = &v19;
        v10 = "InjectTouchInput";
        v9 = 8LL;
        v12 = &v18;
        v11 = 17LL;
        v13 = 4LL;
        v15 = 4LL;
        v5 = v3;
        v16 = &v5;
        v17 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E5518, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  else if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
  {
    v6 = 0x1000000LL;
    v8 = &v6;
    v14 = &v19;
    v10 = "InitializeTouchInjection";
    v9 = 8LL;
    v12 = &v18;
    v11 = 25LL;
    v13 = 4LL;
    v15 = 4LL;
    v5 = v4;
    v16 = &v5;
    v17 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E5518, 0LL, 0LL, 7u, &pData);
  }
}
