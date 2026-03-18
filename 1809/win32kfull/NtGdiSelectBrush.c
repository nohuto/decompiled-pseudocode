/*
 * XREFs of NtGdiSelectBrush @ 0x1C0293520
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0057D8C (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

HBRUSH __fastcall NtGdiSelectBrush(HDC a1, HBRUSH a2)
{
  HBRUSH v3; // rbx
  int v5; // [rsp+30h] [rbp-69h] BYREF
  int v6; // [rsp+34h] [rbp-65h] BYREF
  int v7; // [rsp+38h] [rbp-61h] BYREF
  __int64 v8; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v9[7]; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-19h] BYREF
  int *v11; // [rsp+A0h] [rbp+7h]
  __int64 v12; // [rsp+A8h] [rbp+Fh]
  __int64 *v13; // [rsp+B0h] [rbp+17h]
  __int64 v14; // [rsp+B8h] [rbp+1Fh]
  int *v15; // [rsp+C0h] [rbp+27h]
  __int64 v16; // [rsp+C8h] [rbp+2Fh]
  int *v17; // [rsp+D0h] [rbp+37h]
  __int64 v18; // [rsp+D8h] [rbp+3Fh]

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( RFONTOBJ::bValid((RFONTOBJ *)v9) )
  {
    if ( *(_WORD *)(v9[0] + 12LL) == 1 )
    {
      v3 = GreSelectBrushInternal((struct XDCOBJ *)v9, a2, 0);
    }
    else if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v5 = 80231;
      v11 = &v5;
      v13 = &v8;
      v15 = &v6;
      v17 = &v7;
      v12 = 4LL;
      v8 = 0x1000000LL;
      v14 = 8LL;
      v6 = 0;
      v16 = 4LL;
      v7 = 0;
      v18 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D707D, 0LL, 0LL, 6u, &pData);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v3;
}
