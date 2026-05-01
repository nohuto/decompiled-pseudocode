/*
 * XREFs of ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180026DC4
 * Callers:
 *     ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x180027064 (-TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Win.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??$GetActivationFactory@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800877F0 (--$GetActivationFactory@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windo.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180136BA4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 */

// Hidden C++ exception states: #wind=4
HRESULT __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  HRESULT v7; // eax
  int v8; // eax
  const struct _TlgProvider_t *v9; // rcx
  int v10; // eax
  HRESULT result; // eax
  int cData; // [rsp+28h] [rbp-79h]
  int *cDataa; // [rsp+28h] [rbp-79h]
  HSTRING string; // [rsp+40h] [rbp-61h] BYREF
  _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-59h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-51h] BYREF
  int v17[2]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v18; // [rsp+60h] [rbp-41h] BYREF
  __int64 v19; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v20[3]; // [rsp+70h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-19h] BYREF
  __int64 *v22; // [rsp+A8h] [rbp+7h]
  __int64 v23; // [rsp+B0h] [rbp+Fh]
  _QWORD *v24; // [rsp+B8h] [rbp+17h]
  __int64 v25; // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v20[1] = -2LL;
  v18 = a2;
  wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeDataFactory>(&v19);
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  *(_QWORD *)v17 = 0LL;
  string = 0LL;
  if ( (unsigned __int64)a3[3] >= 8 )
    a3 = (__int64 *)*a3;
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *((_WORD *)a3 + v6) );
    if ( v6 > 0xFFFFFFFF )
    {
      v7 = -2147024362;
    }
    else
    {
      WindowsDeleteString(0LL);
      string = 0LL;
      v7 = WindowsCreateString((PCNZWCH)a3, v6, &string);
    }
  }
  else
  {
    v7 = Microsoft::WRL::Wrappers::HString::Set((Microsoft::WRL::Wrappers::HString *)&string, &szAgent, 0);
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x76,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v7,
      cData);
    __debugbreak();
  }
  cDataa = v17;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING, unsigned __int64))(*(_QWORD *)v19 + 48LL))(
         v19,
         v18,
         string,
         v5);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7B,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v8,
      (int)v17);
    JUMPOUT(0x18002705DLL);
  }
  SystemTimeAsFileTime = 0LL;
  if ( InitOnceBeginInitialize(
         &`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         (LPVOID *)&SystemTimeAsFileTime)
    && fPending )
  {
    SystemTimeAsFileTime = (_FILETIME)qword_1805C2260;
    qword_1805C2260[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2278 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2260, qword_1805C2278);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_1805C2260);
  }
  v9 = *(const struct _TlgProvider_t **)(*(_QWORD *)&SystemTimeAsFileTime + 8LL);
  if ( *(_DWORD *)v9 > 5u )
  {
    v22 = &v18;
    v23 = 8LL;
    v20[0] = v5;
    v24 = v20;
    v25 = 8LL;
    TlgWrite(v9, &unk_1804EF2F8, 0LL, 0LL, 4u, &pData);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 64LL))(
          *(_QWORD *)(a1 + 80),
          *(_QWORD *)v17);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7F,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v10,
      (int)cDataa);
    __debugbreak();
  }
  result = WindowsDeleteString(string);
  string = 0LL;
  if ( *(_QWORD *)v17 )
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v17 + 16LL))(*(_QWORD *)v17);
  if ( v19 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return result;
}
