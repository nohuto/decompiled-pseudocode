/*
 * XREFs of ?TraceLoggingUserIsActive@@YAXIT_LARGE_INTEGER@@@Z @ 0x1C00DC260
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingUserIsActive(int a1, union _LARGE_INTEGER a2)
{
  int v2; // [rsp+30h] [rbp-29h] BYREF
  int v3; // [rsp+34h] [rbp-25h] BYREF
  union _LARGE_INTEGER v4; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  union _LARGE_INTEGER *v6; // [rsp+60h] [rbp+7h]
  __int64 v7; // [rsp+68h] [rbp+Fh]
  int *v8; // [rsp+70h] [rbp+17h]
  __int64 v9; // [rsp+78h] [rbp+1Fh]
  int *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  int *v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh]
  int v14; // [rsp+C0h] [rbp+67h] BYREF

  v14 = a1;
  v4 = a2;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v7 = 8LL;
      v6 = &v4;
      v8 = &v14;
      v10 = &v2;
      v9 = 4LL;
      v2 = 12;
      v11 = 4LL;
      v12 = &v3;
      v3 = gSessionId;
      v13 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D3B3D, 0LL, 0LL, 6u, &pData);
    }
  }
}
