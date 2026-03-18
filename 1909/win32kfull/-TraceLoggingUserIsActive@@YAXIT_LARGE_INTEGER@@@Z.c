/*
 * XREFs of ?TraceLoggingUserIsActive@@YAXIT_LARGE_INTEGER@@@Z @ 0x1C0114230
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingUserIsActive(int a1, union _LARGE_INTEGER a2)
{
  int v2; // [rsp+30h] [rbp-49h] BYREF
  int v3; // [rsp+34h] [rbp-45h] BYREF
  __int64 v4; // [rsp+38h] [rbp-41h] BYREF
  union _LARGE_INTEGER v5; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v7; // [rsp+70h] [rbp-9h]
  __int64 v8; // [rsp+78h] [rbp-1h]
  union _LARGE_INTEGER *v9; // [rsp+80h] [rbp+7h]
  __int64 v10; // [rsp+88h] [rbp+Fh]
  int *v11; // [rsp+90h] [rbp+17h]
  __int64 v12; // [rsp+98h] [rbp+1Fh]
  int *v13; // [rsp+A0h] [rbp+27h]
  __int64 v14; // [rsp+A8h] [rbp+2Fh]
  int *v15; // [rsp+B0h] [rbp+37h]
  __int64 v16; // [rsp+B8h] [rbp+3Fh]
  int v17; // [rsp+E0h] [rbp+67h] BYREF

  v17 = a1;
  v5 = a2;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v4 = 50331648LL;
      v7 = &v4;
      v9 = &v5;
      v11 = &v17;
      v13 = &v2;
      v8 = 8LL;
      v10 = 8LL;
      v12 = 4LL;
      v2 = 12;
      v14 = 4LL;
      v15 = &v3;
      v3 = gSessionId;
      v16 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E54B4, 0LL, 0LL, 7u, &pData);
    }
  }
}
