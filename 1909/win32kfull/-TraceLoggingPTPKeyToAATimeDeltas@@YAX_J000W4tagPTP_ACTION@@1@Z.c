/*
 * XREFs of ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z @ 0x1C01CE2B4
 * Callers:
 *     TraceLoggingPTPAAPKeyPress @ 0x1C01CF900 (TraceLoggingPTPAAPKeyPress.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPKeyToAATimeDeltas(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  int v10; // [rsp+30h] [rbp-79h] BYREF
  int v11; // [rsp+34h] [rbp-75h] BYREF
  int v12; // [rsp+38h] [rbp-71h] BYREF
  int v13; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v14; // [rsp+40h] [rbp-69h] BYREF
  int v15; // [rsp+44h] [rbp-65h] BYREF
  __int64 v16; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  __int64 *v18; // [rsp+70h] [rbp-39h]
  __int64 v19; // [rsp+78h] [rbp-31h]
  int *v20; // [rsp+80h] [rbp-29h]
  __int64 v21; // [rsp+88h] [rbp-21h]
  int *v22; // [rsp+90h] [rbp-19h]
  __int64 v23; // [rsp+98h] [rbp-11h]
  int *v24; // [rsp+A0h] [rbp-9h]
  __int64 v25; // [rsp+A8h] [rbp-1h]
  int *v26; // [rsp+B0h] [rbp+7h]
  __int64 v27; // [rsp+B8h] [rbp+Fh]
  int *v28; // [rsp+C0h] [rbp+17h]
  __int64 v29; // [rsp+C8h] [rbp+1Fh]
  int *v30; // [rsp+D0h] [rbp+27h]
  __int64 v31; // [rsp+D8h] [rbp+2Fh]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v16 = 0x1000000LL;
      v18 = &v16;
      v20 = &v10;
      v22 = &v11;
      v24 = &v12;
      v26 = &v13;
      v14 = a5;
      v28 = &v14;
      v15 = a6;
      v30 = &v15;
      v19 = 8LL;
      v10 = a1;
      v21 = 4LL;
      v11 = v9;
      v23 = 4LL;
      v12 = v8;
      v25 = 4LL;
      v13 = v7;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E57AB, 0LL, 0LL, 9u, &pData);
    }
  }
}
