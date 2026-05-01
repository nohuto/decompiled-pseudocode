/*
 * XREFs of ?UnboostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x180016C40
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180013D64 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E800 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PriorityBoostHelper::UnboostPriority(PriorityBoostHelper *this)
{
  int v1; // ebx
  _DWORD *v2; // rsi
  const char *v4; // r9
  int v5; // eax
  int v6; // eax
  __int64 (__fastcall ****v7)(_QWORD, GUID *, __int64 *); // rcx
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  int cData; // [rsp+28h] [rbp-29h]
  __int64 v13; // [rsp+38h] [rbp-19h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-11h] BYREF
  LPVOID Context[2]; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  __int64 *v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  _DWORD *v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  int v22; // [rsp+94h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  Context[1] = (LPVOID)-2LL;
  if ( GetCurrentThreadId() != *((_DWORD *)this + 22) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x68,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v4);
LABEL_18:
    wil::details::in1diag3::_Log_Hr(
      v8,
      (void *)0x72,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      (const char *)(unsigned int)v1,
      cData);
    goto LABEL_6;
  }
  v1 = 0;
  v2 = (_DWORD *)((char *)this + 92);
  v5 = *((_DWORD *)this + 23);
  if ( !v5 )
    goto LABEL_10;
  v6 = v5 - 1;
  *v2 = v6;
  if ( v6 )
    goto LABEL_10;
  v7 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 6) + 24LL);
  if ( !*v7 )
    goto LABEL_10;
  v13 = 0LL;
  v1 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         v7,
         &v13);
  v8 = retaddr;
  if ( v1 < 0 )
    goto LABEL_18;
LABEL_6:
  if ( v1 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13);
    v1 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x75,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
        (const char *)(unsigned int)v9,
        cData);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
LABEL_10:
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`ExperienceHostLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    Context[0] = qword_1805C21D8;
    qword_1805C21D8[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C21F0 = (struct _TlgProvider_t *)&`ExperienceHostLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_85ce8dc69fb31a5df73cef2b402bbb84_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C21D8, qword_1805C21F0);
    InitOnceComplete(&`ExperienceHostLogging::Instance'::`2'::wrapper, 0, qword_1805C21D8);
  }
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v10 > 5u )
  {
    LODWORD(v13) = v1;
    v17 = &v13;
    v18 = 4;
    v19 = 0;
    v20 = v2;
    v21 = 4;
    v22 = 0;
    TlgWrite(v10, &unk_1804EAC29, 0LL, 0LL, 4u, &pData);
  }
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7B,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
    (const char *)(unsigned int)v1,
    cData);
  return (unsigned int)v1;
}
