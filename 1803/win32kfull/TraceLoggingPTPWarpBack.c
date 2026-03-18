/*
 * XREFs of TraceLoggingPTPWarpBack @ 0x1C019A5B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPWarpBack(int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v8; // r10d
  int v9; // r11d
  int v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+34h] [rbp-35h] BYREF
  int v12; // [rsp+38h] [rbp-31h] BYREF
  int v13; // [rsp+3Ch] [rbp-2Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v15; // [rsp+60h] [rbp-9h]
  __int64 v16; // [rsp+68h] [rbp-1h]
  int *v17; // [rsp+70h] [rbp+7h]
  __int64 v18; // [rsp+78h] [rbp+Fh]
  int *v19; // [rsp+80h] [rbp+17h]
  __int64 v20; // [rsp+88h] [rbp+1Fh]
  int *v21; // [rsp+90h] [rbp+27h]
  __int64 v22; // [rsp+98h] [rbp+2Fh]

  v3 = HIDWORD(a2);
  v4 = HIDWORD(a3);
  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v16 = 4LL;
      v15 = &v10;
      v10 = v8 - v9;
      v17 = &v11;
      v11 = v4 - v3;
      v19 = &v12;
      v21 = &v13;
      v18 = 4LL;
      v12 = (int)v7;
      v20 = 4LL;
      v13 = a1;
      v22 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E264D, v6, v7, 6u, &pData);
    }
  }
}
