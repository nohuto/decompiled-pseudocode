/*
 * XREFs of ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800408D0
 * Callers:
 *     ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x18004066C (-TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Win.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18008DAB0 (--$GetActivationFactory@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1800F2908 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 */

// Hidden C++ exception states: #wind=4
HRESULT __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  UINT32 v7; // esi
  const char *v8; // r9
  unsigned int v9; // eax
  int v10; // eax
  const struct _TlgProvider_t *v11; // rcx
  int v12; // eax
  HRESULT result; // eax
  int cData; // [rsp+28h] [rbp-79h]
  int *cDataa; // [rsp+28h] [rbp-79h]
  HSTRING string; // [rsp+40h] [rbp-61h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-59h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-51h] BYREF
  int v19[2]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v20; // [rsp+60h] [rbp-41h] BYREF
  __int64 v21; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v22[3]; // [rsp+70h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-19h] BYREF
  __int64 *v24; // [rsp+A8h] [rbp+7h]
  __int64 v25; // [rsp+B0h] [rbp+Fh]
  _QWORD *v26; // [rsp+B8h] [rbp+17h]
  __int64 v27; // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v22[1] = -2LL;
  v20 = a2;
  wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeDataFactory>(&v21);
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  *(_QWORD *)v19 = 0LL;
  string = 0LL;
  if ( (unsigned __int64)a3[3] >= 8 )
    a3 = (__int64 *)*a3;
  if ( !a3 )
  {
    v9 = Microsoft::WRL::Wrappers::HString::Set((Microsoft::WRL::Wrappers::HString *)&string, &word_180411F30, 0);
    goto LABEL_10;
  }
  v6 = -1LL;
  do
    ++v6;
  while ( *((_WORD *)a3 + v6) );
  v7 = -1;
  if ( v6 <= 0xFFFFFFFF )
    v7 = v6;
  v8 = v6 > 0xFFFFFFFF ? (const char *)0x80070216LL : 0LL;
  if ( v6 <= 0xFFFFFFFF )
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    v9 = WindowsCreateString((PCNZWCH)a3, v7, &string);
LABEL_10:
    v8 = (const char *)v9;
  }
  if ( (int)v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x76,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      v8,
      cData);
    __debugbreak();
  }
  cDataa = v19;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING, unsigned __int64))(*(_QWORD *)v21 + 48LL))(
          v21,
          v20,
          string,
          v5);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7B,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v10,
      (int)v19);
    __debugbreak();
  }
  SystemTimeAsFileTime = 0LL;
  if ( InitOnceBeginInitialize(
         &`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         (LPVOID *)&SystemTimeAsFileTime)
    && fPending )
  {
    SystemTimeAsFileTime = (struct _FILETIME)qword_18050FA50;
    qword_18050FA50[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050FA68 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050FA50, qword_18050FA68);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_18050FA50);
  }
  v11 = *(const struct _TlgProvider_t **)(*(_QWORD *)&SystemTimeAsFileTime + 8LL);
  if ( *(_DWORD *)v11 > 5u )
  {
    v24 = &v20;
    v25 = 8LL;
    v22[0] = v5;
    v26 = v22;
    v27 = 8LL;
    TlgWrite(v11, &unk_180455336, 0LL, 0LL, 4u, &pData);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 64LL))(
          *(_QWORD *)(a1 + 80),
          *(_QWORD *)v19);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7F,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v12,
      (int)cDataa);
    __debugbreak();
  }
  result = WindowsDeleteString(string);
  string = 0LL;
  if ( *(_QWORD *)v19 )
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v19 + 16LL))(*(_QWORD *)v19);
  if ( v21 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return result;
}
