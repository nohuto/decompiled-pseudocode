/*
 * XREFs of TraceChildWindowDpiTelemetry @ 0x1C000995C
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7C40 (xxxForceUpdateProcessDpiAwarenessContext.c)
 * Callees:
 *     GetProcessImageFilename @ 0x1C0009A4C (GetProcessImageFilename.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00B830C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

char __fastcall TraceChildWindowDpiTelemetry(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  const WCHAR *v4; // rdi
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 ProcessImageFilename; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  const WCHAR *v13; // [rsp+30h] [rbp-39h] BYREF
  LPCWSTR pwsz; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const WCHAR **v16; // [rsp+60h] [rbp-9h]
  int v17; // [rsp+68h] [rbp-1h]
  int v18; // [rsp+6Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+80h] [rbp+17h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = &word_1C02DAB68;
  pwsz = &word_1C02DAB68;
  v13 = &word_1C02DAB68;
  v7 = 0LL;
  v8 = *(_QWORD *)(v3 + 416);
  ProcessImageFilename = GetProcessImageFilename(v8, &pwsz);
  v10 = ProcessImageFilename;
  if ( a2 )
  {
    ProcessImageFilename = *(_QWORD *)(a2 + 16);
    v11 = *(_QWORD *)(ProcessImageFilename + 416);
    if ( v8 == v11 )
    {
      v4 = pwsz;
    }
    else
    {
      ProcessImageFilename = GetProcessImageFilename(v11, &v13);
      v4 = v13;
      v7 = ProcessImageFilename;
    }
  }
  if ( hProvider > 5u )
  {
    LOBYTE(ProcessImageFilename) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL);
    if ( (_BYTE)ProcessImageFilename )
    {
      v18 = 0;
      v16 = &v13;
      LODWORD(v13) = a3;
      v17 = 4;
      TlgCreateWsz(&pDesc, pwsz);
      TlgCreateWsz(&v20, v4);
      LOBYTE(ProcessImageFilename) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E8062, 0LL, 0LL, 5u, &pData);
    }
  }
  if ( v10 )
    LOBYTE(ProcessImageFilename) = FreeTmpBuffer(v10);
  if ( v7 )
    LOBYTE(ProcessImageFilename) = FreeTmpBuffer(v7);
  return ProcessImageFilename;
}
