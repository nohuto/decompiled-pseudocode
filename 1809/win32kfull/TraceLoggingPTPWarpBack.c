/*
 * XREFs of TraceLoggingPTPWarpBack @ 0x1C01BB7D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPWarpBack(int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d
  int v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  int v12; // [rsp+3Ch] [rbp-2Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  int *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  int *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  int *v20; // [rsp+90h] [rbp+27h]
  __int64 v21; // [rsp+98h] [rbp+2Fh]

  v3 = HIDWORD(a2);
  v4 = HIDWORD(a3);
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v15 = 4LL;
      v14 = &v9;
      v9 = v7 - v8;
      v16 = &v10;
      v10 = v4 - v3;
      v18 = &v11;
      v20 = &v12;
      v17 = 4LL;
      v11 = v6;
      v19 = 4LL;
      v12 = a1;
      v21 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D3D47, 0LL, 0LL, 6u, &pData);
    }
  }
}
