/*
 * XREFs of ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C01BB32C
 * Callers:
 *     NtUserInitializeTouchInjection @ 0x1C0218860 (NtUserInitializeTouchInjection.c)
 *     NtUserInjectTouchInput @ 0x1C0218BE0 (NtUserInjectTouchInput.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingTouchInjection(int a1, int a2, int a3)
{
  int v3; // r9d
  int v4; // r9d
  _DWORD v5[4]; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v7; // [rsp+60h] [rbp+7h]
  __int64 v8; // [rsp+68h] [rbp+Fh]
  int *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  int *v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  _DWORD *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+C8h] [rbp+6Fh] BYREF
  int v16; // [rsp+D0h] [rbp+77h] BYREF

  v16 = a3;
  v15 = a2;
  if ( a1 == 1 )
  {
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
      {
        v8 = 17LL;
        v7 = "InjectTouchInput";
        v11 = &v16;
        v9 = &v15;
        v13 = v5;
        v10 = 4LL;
        v12 = 4LL;
        v5[0] = v3;
        v14 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D3B91, 0LL, 0LL, 6u, &pData);
      }
    }
  }
  else if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
  {
    v8 = 25LL;
    v7 = "InitializeTouchInjection";
    v11 = &v16;
    v9 = &v15;
    v13 = v5;
    v10 = 4LL;
    v12 = 4LL;
    v5[0] = v4;
    v14 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D3B91, 0LL, 0LL, 6u, &pData);
  }
}
