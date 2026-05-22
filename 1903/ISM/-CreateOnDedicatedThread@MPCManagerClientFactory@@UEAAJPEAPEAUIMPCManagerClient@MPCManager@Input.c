/*
 * XREFs of ?CreateOnDedicatedThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x180110880
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18001F94C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180022274 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180059CF0 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetActivationFactory@UIDispatcherQueueControllerStatics@System@Windows@@@wil@@YA?AV?$com_ptr_t@UIDispatcherQueueControllerStatics@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18010EEF0 (--$GetActivationFactory@UIDispatcherQueueControllerStatics@System@Windows@@@wil@@YA-AV-$com_ptr_.c)
 *     wil::MakeAgileCallback_Windows::System::IDispatcherQueueHandler__lambda_d40cbd92f902ffb664072dbc4c9f7174___ @ 0x18010F494 (wil--MakeAgileCallback_Windows--System--IDispatcherQueueHandler__lambda_d40cbd92f902ffb664072dbc.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall MPCManagerClientFactory::CreateOnDedicatedThread(
        MPCManagerClientFactory *this,
        struct Windows::Internal::Input::MPCManager::IMPCManagerClient **a2)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 (__fastcall *v5)(_QWORD, __int64 *); // rdi
  int v6; // eax
  void *v7; // rdx
  HANDLE Event; // rsi
  __int64 v9; // r8
  const char *v10; // r9
  wil::details *v11; // rdi
  DWORD LastError; // ebx
  void *v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, char *); // rdi
  __int64 *v16; // rax
  int v17; // eax
  const char *v18; // r9
  __int64 v19; // rcx
  DWORD v20; // eax
  void *v21; // rdx
  const char *v22; // r9
  struct Windows::Internal::Input::MPCManager::IMPCManagerClient *v23; // rax
  __int64 v25; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v26[2]; // [rsp+28h] [rbp-28h] BYREF
  struct Windows::Internal::Input::MPCManager::IMPCManagerClient *v27; // [rsp+38h] [rbp-18h] BYREF
  __int64 v28[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v30; // [rsp+80h] [rbp+30h] BYREF
  HANDLE hHandle; // [rsp+88h] [rbp+38h] BYREF

  v28[1] = -2LL;
  v25 = 0LL;
  wil::GetActivationFactory<Windows::System::IDispatcherQueueControllerStatics>((const WCHAR *)v28);
  v26[0] = 0LL;
  v3 = *(_QWORD *)v28[0];
  v26[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v3 + 48))(v28[0], v26);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      442LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = *(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v26[0] + 48LL);
  v25 = 0LL;
  v6 = v5(v26[0], &v25);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      443LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v6);
  if ( v26[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
  if ( v28[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
  v27 = 0LL;
  hHandle = 0LL;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
    wil::details::in1diag3::Throw_GetLastError(retaddr, v7, v9, v10);
    __debugbreak();
  }
  GetLastError();
  v11 = (wil::details *)hHandle;
  if ( hHandle )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v11, v13);
    SetLastError(LastError);
  }
  hHandle = Event;
  v14 = v25;
  v15 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v25 + 56LL);
  v26[0] = &v27;
  v26[1] = &hHandle;
  v16 = wil::MakeAgileCallback_Windows::System::IDispatcherQueueHandler__lambda_d40cbd92f902ffb664072dbc4c9f7174___(
          v28,
          (__int64)v26);
  v17 = v15(v14, *v16, &v30);
  if ( v17 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      457LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v17);
  v19 = v28[0];
  if ( v28[0] )
  {
    v28[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( !v30 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      458LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v18);
    __debugbreak();
  }
  v20 = WaitForSingleObjectEx(hHandle, 0xFFFFFFFF, 0);
  if ( v20 != 258 && v20 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      2512LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v22);
    __debugbreak();
  }
  v23 = v27;
  v27 = 0LL;
  *a2 = v23;
  if ( hHandle )
    wil::details::CloseHandle((wil::details *)hHandle, v21);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v27);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return 0LL;
}
