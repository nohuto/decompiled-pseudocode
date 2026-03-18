/*
 * XREFs of ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C01CDB84
 * Callers:
 *     TouchTargetChildTree @ 0x1C0206038 (TouchTargetChildTree.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingHitTestWindowTargeting(int a1, int a2, int a3, int a4, char a5, char a6, char a7)
{
  __int64 v7; // [rsp+38h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-71h] BYREF
  __int64 *v9; // [rsp+68h] [rbp-51h]
  __int64 v10; // [rsp+70h] [rbp-49h]
  int *v11; // [rsp+78h] [rbp-41h]
  __int64 v12; // [rsp+80h] [rbp-39h]
  int *v13; // [rsp+88h] [rbp-31h]
  __int64 v14; // [rsp+90h] [rbp-29h]
  int *v15; // [rsp+98h] [rbp-21h]
  __int64 v16; // [rsp+A0h] [rbp-19h]
  int *v17; // [rsp+A8h] [rbp-11h]
  __int64 v18; // [rsp+B0h] [rbp-9h]
  char *v19; // [rsp+B8h] [rbp-1h]
  __int64 v20; // [rsp+C0h] [rbp+7h]
  char *v21; // [rsp+C8h] [rbp+Fh]
  __int64 v22; // [rsp+D0h] [rbp+17h]
  char *v23; // [rsp+D8h] [rbp+1Fh]
  __int64 v24; // [rsp+E0h] [rbp+27h]
  int v25; // [rsp+108h] [rbp+4Fh] BYREF
  int v26; // [rsp+110h] [rbp+57h] BYREF
  int v27; // [rsp+118h] [rbp+5Fh] BYREF
  int v28; // [rsp+120h] [rbp+67h] BYREF

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v25 = a1;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v7 = 0x1000000LL;
      v9 = &v7;
      v11 = &v25;
      v13 = &v26;
      v15 = &v27;
      v17 = &v28;
      v19 = &a5;
      v21 = &a6;
      v23 = &a7;
      v10 = 8LL;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E5FC2, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
