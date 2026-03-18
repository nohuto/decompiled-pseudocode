/*
 * XREFs of ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C019A134
 * Callers:
 *     NtUserInitializeTouchInjection @ 0x1C01F1490 (NtUserInitializeTouchInjection.c)
 *     NtUserInjectTouchInput @ 0x1C01F17E0 (NtUserInjectTouchInput.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingTouchInjection(int a1, int a2, int a3)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  const GUID *v5; // r8
  const GUID *v6; // r9
  _DWORD v7[4]; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v9; // [rsp+60h] [rbp+7h]
  __int64 v10; // [rsp+68h] [rbp+Fh]
  int *v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  int *v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]
  _DWORD *v15; // [rsp+90h] [rbp+37h]
  __int64 v16; // [rsp+98h] [rbp+3Fh]
  int v17; // [rsp+C8h] [rbp+6Fh] BYREF
  int v18; // [rsp+D0h] [rbp+77h] BYREF

  v18 = a3;
  v17 = a2;
  if ( a1 == 1 )
  {
    if ( (unsigned int)hProvider > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
      {
        v10 = 17LL;
        v9 = "InjectTouchInput";
        v13 = &v18;
        v11 = &v17;
        v15 = v7;
        v12 = 4LL;
        v14 = 4LL;
        v7[0] = (_DWORD)v4;
        v16 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E2497, v3, v4, 6u, &pData);
      }
    }
  }
  else if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
  {
    v10 = 25LL;
    v9 = "InitializeTouchInjection";
    v13 = &v18;
    v11 = &v17;
    v15 = v7;
    v12 = 4LL;
    v14 = 4LL;
    v7[0] = (_DWORD)v6;
    v16 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E2497, v5, v6, 6u, &pData);
  }
}
