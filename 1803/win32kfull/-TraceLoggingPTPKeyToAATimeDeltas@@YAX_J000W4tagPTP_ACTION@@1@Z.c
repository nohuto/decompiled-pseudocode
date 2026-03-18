/*
 * XREFs of ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z @ 0x1C0199194
 * Callers:
 *     TraceLoggingPTPAAPKeyPress @ 0x1C019A400 (TraceLoggingPTPAAPKeyPress.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPKeyToAATimeDeltas(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // r10d
  int v10; // r11d
  int v11; // [rsp+30h] [rbp-69h] BYREF
  int v12; // [rsp+34h] [rbp-65h] BYREF
  int v13; // [rsp+38h] [rbp-61h] BYREF
  int v14; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v15; // [rsp+40h] [rbp-59h] BYREF
  int v16; // [rsp+44h] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  int *v18; // [rsp+70h] [rbp-29h]
  __int64 v19; // [rsp+78h] [rbp-21h]
  int *v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+88h] [rbp-11h]
  int *v22; // [rsp+90h] [rbp-9h]
  __int64 v23; // [rsp+98h] [rbp-1h]
  int *v24; // [rsp+A0h] [rbp+7h]
  __int64 v25; // [rsp+A8h] [rbp+Fh]
  int *v26; // [rsp+B0h] [rbp+17h]
  __int64 v27; // [rsp+B8h] [rbp+1Fh]
  int *v28; // [rsp+C0h] [rbp+27h]
  __int64 v29; // [rsp+C8h] [rbp+2Fh]

  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v11 = a1;
      v18 = &v11;
      v20 = &v12;
      v22 = &v13;
      v24 = &v14;
      v15 = a5;
      v26 = &v15;
      v16 = a6;
      v28 = &v16;
      v19 = 4LL;
      v12 = v10;
      v21 = 4LL;
      v13 = v9;
      v23 = 4LL;
      v14 = (int)v8;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E26BA, v7, v8, 8u, &pData);
    }
  }
}
