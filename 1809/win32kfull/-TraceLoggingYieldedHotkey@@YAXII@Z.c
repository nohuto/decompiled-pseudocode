/*
 * XREFs of ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C01BB52C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingYieldedHotkey(__int64 a1, int a2)
{
  _QWORD *v2; // r9
  const CHAR *ProcessImageFileName; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  int *v5; // [rsp+50h] [rbp+17h]
  int v6; // [rsp+58h] [rbp+1Fh]
  int v7; // [rsp+5Ch] [rbp+23h]
  int *v8; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+37h] BYREF
  int v12; // [rsp+A0h] [rbp+67h] BYREF
  int v13; // [rsp+A8h] [rbp+6Fh] BYREF

  v13 = a2;
  v12 = a1;
  PsGetCurrentProcessWin32Process(a1);
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    v7 = 0;
    v10 = 0;
    v5 = &v12;
    v8 = &v13;
    v6 = 4;
    v9 = 4;
    if ( v2 )
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*v2);
    else
      ProcessImageFileName = (const CHAR *)&unk_1C02C8DB1;
    TlgCreateSz(&pDesc, ProcessImageFileName);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D34CB, 0LL, 0LL, 5u, &pData);
  }
}
