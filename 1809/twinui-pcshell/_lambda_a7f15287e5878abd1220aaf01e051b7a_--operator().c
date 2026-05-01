/*
 * XREFs of _lambda_a7f15287e5878abd1220aaf01e051b7a_::operator() @ 0x1800199F0
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180017C5C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___ @ 0x1803AE35C (wil--details--ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___--_ScopeExitFn__lambda_a7f1.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180019AE0 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_a7f15287e5878abd1220aaf01e051b7a_::operator()(CSingleViewShellExperience **a1)
{
  CSingleViewShellExperience *v1; // rbx
  _BYTE *v3; // rsi
  __int64 v4; // rcx
  int v5; // eax
  const WCHAR *StringRawBuffer; // r14
  PCWSTR v7; // rax
  const WCHAR *v8; // r15
  TraceLoggingHProvider v9; // r10
  UINT32 cData; // [rsp+20h] [rbp-89h]
  WINBOOL fPending; // [rsp+30h] [rbp-79h] BYREF
  int v12; // [rsp+34h] [rbp-75h] BYREF
  int v13; // [rsp+38h] [rbp-71h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+80h] [rbp-29h] BYREF
  int *v18; // [rsp+90h] [rbp-19h]
  int v19; // [rsp+98h] [rbp-11h]
  int v20; // [rsp+9Ch] [rbp-Dh]
  char *v21; // [rsp+A0h] [rbp-9h]
  int v22; // [rsp+A8h] [rbp-1h]
  int v23; // [rsp+ACh] [rbp+3h]
  int *v24; // [rsp+B0h] [rbp+7h]
  int v25; // [rsp+B8h] [rbp+Fh]
  int v26; // [rsp+BCh] [rbp+13h]
  _BYTE *v27; // [rsp+C0h] [rbp+17h]
  int v28; // [rsp+C8h] [rbp+1Fh]
  int v29; // [rsp+CCh] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v1 = *a1;
  v3 = (char *)*a1 + 140;
  if ( *v3 )
  {
    v4 = *((_QWORD *)v1 + 11);
    *v3 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, CSingleViewShellExperience *))(*(_QWORD *)v4 + 128LL))(v4, v1);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x480,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v5,
        cData);
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v1 + 2), 0LL);
  v7 = WindowsGetStringRawBuffer(*((HSTRING *)v1 + 1), 0LL);
  Context = 0LL;
  v8 = v7;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
  {
    TlgCreateWsz(&pDesc, v8);
    TlgCreateWsz(&v17, StringRawBuffer);
    v20 = 0;
    v23 = 0;
    v13 = 0;
    v26 = 0;
    v29 = 0;
    v18 = &v12;
    v12 = 1;
    v21 = (char *)v1 + 141;
    v24 = &v13;
    v19 = 4;
    v22 = 1;
    v25 = 4;
    v27 = v3;
    v28 = 1;
    TlgWrite(v9, &unk_18046A82B, 0LL, 0LL, 8u, &pData);
  }
  CSingleViewShellExperience::UnboostDiskIo(*a1);
}
