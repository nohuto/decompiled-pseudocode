/*
 * XREFs of ?TraceLoggingHotkey@@YAXIIHHK@Z @ 0x1C010E674
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingHotkey(int a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  char v5; // r9
  char v6; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v7; // [rsp+3Ch] [rbp-6Dh] BYREF
  unsigned int v8; // [rsp+40h] [rbp-69h] BYREF
  __int64 v9; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-51h] BYREF
  __int64 *v11; // [rsp+78h] [rbp-31h]
  __int64 v12; // [rsp+80h] [rbp-29h]
  int *v13; // [rsp+88h] [rbp-21h]
  __int64 v14; // [rsp+90h] [rbp-19h]
  char *v15; // [rsp+98h] [rbp-11h]
  __int64 v16; // [rsp+A0h] [rbp-9h]
  int *v17; // [rsp+A8h] [rbp-1h]
  __int64 v18; // [rsp+B0h] [rbp+7h]
  int *v19; // [rsp+B8h] [rbp+Fh]
  __int64 v20; // [rsp+C0h] [rbp+17h]
  unsigned int *v21; // [rsp+C8h] [rbp+1Fh]
  __int64 v22; // [rsp+D0h] [rbp+27h]
  unsigned int *v23; // [rsp+D8h] [rbp+2Fh]
  __int64 v24; // [rsp+E0h] [rbp+37h]
  int v25; // [rsp+108h] [rbp+5Fh] BYREF
  int v26; // [rsp+118h] [rbp+6Fh] BYREF
  int v27; // [rsp+120h] [rbp+77h] BYREF

  v27 = a4;
  v26 = a3;
  v25 = a1;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v9 = 0x2000000LL;
      v11 = &v9;
      v12 = 8LL;
      v13 = &v25;
      v15 = &v6;
      v17 = &v26;
      v19 = &v27;
      v7 = a5;
      v8 = a5;
      v23 = &v8;
      v14 = 4LL;
      v6 = v5;
      v16 = 1LL;
      v18 = 4LL;
      v20 = 4LL;
      v21 = &v7;
      v22 = 4LL;
      v24 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E571D, 0LL, 0LL, 9u, &pData);
    }
  }
}
