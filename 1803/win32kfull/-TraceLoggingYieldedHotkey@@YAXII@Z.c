/*
 * XREFs of ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C019A320
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00E9CA0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C00BC8A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingYieldedHotkey(__int64 a1, int a2)
{
  _QWORD *v2; // r9
  const CHAR *ProcessImageFileName; // rax
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  int *v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+5Ch] [rbp+23h]
  int *v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+37h] BYREF
  int v14; // [rsp+A0h] [rbp+67h] BYREF
  int v15; // [rsp+A8h] [rbp+6Fh] BYREF

  v15 = a2;
  v14 = a1;
  PsGetCurrentProcessWin32Process(a1);
  if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    v9 = 0;
    v12 = 0;
    v7 = &v14;
    v10 = &v15;
    v8 = 4;
    v11 = 4;
    if ( v2 )
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*v2);
    else
      ProcessImageFileName = (const CHAR *)&unk_1C02D7540;
    TlgCreateSz(&pDesc, ProcessImageFileName);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E1DD1, v4, v5, 5u, &pData);
  }
}
