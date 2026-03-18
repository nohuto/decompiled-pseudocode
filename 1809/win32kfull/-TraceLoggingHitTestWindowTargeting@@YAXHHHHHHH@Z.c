/*
 * XREFs of ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C01B9A5C
 * Callers:
 *     TouchTargetChildTree @ 0x1C01EFC18 (TouchTargetChildTree.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingHitTestWindowTargeting(int a1, int a2, int a3, int a4, char a5, char a6, char a7)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-61h] BYREF
  int *v8; // [rsp+58h] [rbp-41h]
  __int64 v9; // [rsp+60h] [rbp-39h]
  int *v10; // [rsp+68h] [rbp-31h]
  __int64 v11; // [rsp+70h] [rbp-29h]
  int *v12; // [rsp+78h] [rbp-21h]
  __int64 v13; // [rsp+80h] [rbp-19h]
  int *v14; // [rsp+88h] [rbp-11h]
  __int64 v15; // [rsp+90h] [rbp-9h]
  char *v16; // [rsp+98h] [rbp-1h]
  __int64 v17; // [rsp+A0h] [rbp+7h]
  char *v18; // [rsp+A8h] [rbp+Fh]
  __int64 v19; // [rsp+B0h] [rbp+17h]
  char *v20; // [rsp+B8h] [rbp+1Fh]
  __int64 v21; // [rsp+C0h] [rbp+27h]
  int v22; // [rsp+E8h] [rbp+4Fh] BYREF
  int v23; // [rsp+F0h] [rbp+57h] BYREF
  int v24; // [rsp+F8h] [rbp+5Fh] BYREF
  int v25; // [rsp+100h] [rbp+67h] BYREF

  v25 = a4;
  v24 = a3;
  v23 = a2;
  v22 = a1;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v9 = 4LL;
      v8 = &v22;
      v10 = &v23;
      v12 = &v24;
      v14 = &v25;
      v16 = &a5;
      v18 = &a6;
      v20 = &a7;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D3BEB, 0LL, 0LL, 9u, &pData);
    }
  }
}
