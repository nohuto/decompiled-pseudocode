/*
 * XREFs of TraceChildWindowDpiTelemetry @ 0x1C00069CC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01B022C (xxxForceUpdateProcessDpiAwarenessContext.c)
 * Callees:
 *     GetProcessImageFilename @ 0x1C0006AB4 (GetProcessImageFilename.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00BD824 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  const WCHAR *v15; // [rsp+30h] [rbp-39h] BYREF
  LPCWSTR pwsz; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const WCHAR **v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+68h] [rbp-1h]
  int v20; // [rsp+6Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+80h] [rbp+17h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = &::pwsz;
  pwsz = &::pwsz;
  v15 = &::pwsz;
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
      ProcessImageFilename = GetProcessImageFilename(v11, &v15);
      v4 = v15;
      v7 = ProcessImageFilename;
    }
  }
  if ( hProvider > 5u )
  {
    LOBYTE(ProcessImageFilename) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL);
    if ( (_BYTE)ProcessImageFilename )
    {
      v20 = 0;
      v18 = &v15;
      LODWORD(v15) = a3;
      v19 = 4;
      TlgCreateWsz(&pDesc, pwsz);
      TlgCreateWsz(&v22, v4);
      LOBYTE(ProcessImageFilename) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E31BF, v12, v13, 5u, &pData);
    }
  }
  if ( v10 )
    LOBYTE(ProcessImageFilename) = FreeTmpBuffer(v10);
  if ( v7 )
    LOBYTE(ProcessImageFilename) = FreeTmpBuffer(v7);
  return ProcessImageFilename;
}
