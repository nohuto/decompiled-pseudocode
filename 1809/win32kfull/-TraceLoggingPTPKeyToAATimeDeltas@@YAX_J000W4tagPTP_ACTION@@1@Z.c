/*
 * XREFs of ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z @ 0x1C01BA28C
 * Callers:
 *     TraceLoggingPTPAAPKeyPress @ 0x1C01BB620 (TraceLoggingPTPAAPKeyPress.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPKeyToAATimeDeltas(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  int v10; // [rsp+30h] [rbp-69h] BYREF
  int v11; // [rsp+34h] [rbp-65h] BYREF
  int v12; // [rsp+38h] [rbp-61h] BYREF
  int v13; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v14; // [rsp+40h] [rbp-59h] BYREF
  int v15; // [rsp+44h] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  int *v17; // [rsp+70h] [rbp-29h]
  __int64 v18; // [rsp+78h] [rbp-21h]
  int *v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+88h] [rbp-11h]
  int *v21; // [rsp+90h] [rbp-9h]
  __int64 v22; // [rsp+98h] [rbp-1h]
  int *v23; // [rsp+A0h] [rbp+7h]
  __int64 v24; // [rsp+A8h] [rbp+Fh]
  int *v25; // [rsp+B0h] [rbp+17h]
  __int64 v26; // [rsp+B8h] [rbp+1Fh]
  int *v27; // [rsp+C0h] [rbp+27h]
  __int64 v28; // [rsp+C8h] [rbp+2Fh]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v10 = a1;
      v17 = &v10;
      v19 = &v11;
      v21 = &v12;
      v23 = &v13;
      v14 = a5;
      v25 = &v14;
      v15 = a6;
      v27 = &v15;
      v18 = 4LL;
      v11 = v9;
      v20 = 4LL;
      v12 = v8;
      v22 = 4LL;
      v13 = v7;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D3DB4, 0LL, 0LL, 8u, &pData);
    }
  }
}
