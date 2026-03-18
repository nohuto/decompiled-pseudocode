/*
 * XREFs of NtGdiSelectPen @ 0x1C0293670
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

HPEN __fastcall NtGdiSelectPen(HDC a1, HPEN a2)
{
  HPEN v3; // rbx
  int v4; // r9d
  int v6; // [rsp+30h] [rbp-69h] BYREF
  int v7; // [rsp+34h] [rbp-65h] BYREF
  int v8; // [rsp+38h] [rbp-61h] BYREF
  __int64 v9; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v10[7]; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-19h] BYREF
  int *v12; // [rsp+A0h] [rbp+7h]
  __int64 v13; // [rsp+A8h] [rbp+Fh]
  __int64 *v14; // [rsp+B0h] [rbp+17h]
  __int64 v15; // [rsp+B8h] [rbp+1Fh]
  int *v16; // [rsp+C0h] [rbp+27h]
  __int64 v17; // [rsp+C8h] [rbp+2Fh]
  int *v18; // [rsp+D0h] [rbp+37h]
  __int64 v19; // [rsp+D8h] [rbp+3Fh]

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( RFONTOBJ::bValid((RFONTOBJ *)v10) )
  {
    if ( *(_WORD *)(v10[0] + 12LL) == 1 )
    {
      v3 = GreSelectPenInternal((struct XDCOBJ *)v10, a2, 0);
    }
    else if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v6 = 80231;
      v12 = &v6;
      v14 = &v9;
      v16 = &v7;
      v18 = &v8;
      v13 = 4LL;
      v9 = 0x1000000LL;
      v15 = 8LL;
      v7 = v4;
      v17 = 4LL;
      v8 = 0;
      v19 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D707D, 0LL, 0LL, 6u, &pData);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v3;
}
