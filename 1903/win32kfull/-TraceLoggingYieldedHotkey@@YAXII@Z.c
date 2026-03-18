/*
 * XREFs of ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C01CF984
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C010F258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingYieldedHotkey(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r9
  const CHAR *ProcessImageFileName; // rax
  __int64 v4; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v6; // [rsp+60h] [rbp+7h]
  __int64 v7; // [rsp+68h] [rbp+Fh]
  int *v8; // [rsp+70h] [rbp+17h]
  __int64 v9; // [rsp+78h] [rbp+1Fh]
  int *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+37h] BYREF
  int v13; // [rsp+C0h] [rbp+67h] BYREF
  int v14; // [rsp+C8h] [rbp+6Fh] BYREF

  v14 = a2;
  v13 = a1;
  PsGetCurrentProcessWin32Process(a1, a2);
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    v4 = 0x2000000LL;
    v6 = &v4;
    v8 = &v13;
    v10 = &v14;
    v7 = 8LL;
    v9 = 4LL;
    v11 = 4LL;
    if ( v2 )
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*v2);
    else
      ProcessImageFileName = (const CHAR *)&unk_1C02DC591;
    TlgCreateSz(&pDesc, ProcessImageFileName);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E57D2, 0LL, 0LL, 6u, &pData);
  }
}
