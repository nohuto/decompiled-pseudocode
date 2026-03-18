/*
 * XREFs of TraceLoggingPTPWarpBack @ 0x1C01CFC40
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPWarpBack(int a1)
{
  int v2; // r9d
  __int64 v3; // r10
  __int64 v4; // r11
  int v5; // [rsp+30h] [rbp-49h] BYREF
  int v6; // [rsp+34h] [rbp-45h] BYREF
  int v7; // [rsp+38h] [rbp-41h] BYREF
  int v8; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v9; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v11; // [rsp+70h] [rbp-9h]
  __int64 v12; // [rsp+78h] [rbp-1h]
  int *v13; // [rsp+80h] [rbp+7h]
  __int64 v14; // [rsp+88h] [rbp+Fh]
  int *v15; // [rsp+90h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  int *v17; // [rsp+A0h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+2Fh]
  int *v19; // [rsp+B0h] [rbp+37h]
  __int64 v20; // [rsp+B8h] [rbp+3Fh]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v9 = 0x1000000LL;
      v11 = &v9;
      v5 = v3 - v4;
      v13 = &v5;
      v15 = &v6;
      v17 = &v7;
      v12 = 8LL;
      v19 = &v8;
      v14 = 4LL;
      v6 = HIDWORD(v3) - HIDWORD(v4);
      v16 = 4LL;
      v7 = v2;
      v18 = 4LL;
      v8 = a1;
      v20 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E616E, 0LL, 0LL, 7u, &pData);
    }
  }
}
