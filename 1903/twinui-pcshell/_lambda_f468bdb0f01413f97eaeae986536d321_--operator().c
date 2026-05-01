/*
 * XREFs of _lambda_f468bdb0f01413f97eaeae986536d321_::operator() @ 0x18029FF98
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f468bdb0f01413f97eaeae986536d321___::Run @ 0x1802A1320 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f468bdb0f01413f97eaeae986536d321___--.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801085CC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@AEBQEAVWindowManagerBridge@@P84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIInspectable@@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVWindowManagerBridge@@$$QEAP84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z@Z @ 0x18029DBB4 (--$MakeAgileCallback@U-$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@I.c)
 *     ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@Windows@@AEBQEAVWindowManagerBridge@@P84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIWindowChangedEventArgs@6783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVWindowManagerBridge@@$$QEAP84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@6789@@Z@Z @ 0x18029DC6C (--$MakeAgileCallback@U-$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@Appli_ea_18029DC6C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_f468bdb0f01413f97eaeae986536d321_::operator()(__int64 *a1)
{
  __int64 (*v2)(void); // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const char *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19[3]; // [rsp+28h] [rbp-50h] BYREF
  __int128 v20[3]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v22; // [rsp+80h] [rbp+8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+18h] BYREF
  __int64 v25; // [rsp+98h] [rbp+20h] BYREF

  v19[1] = -2LL;
  v2 = *(__int64 (**)(void))(**(_QWORD **)(*a1 + 184) + 112LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)(*a1 + 192));
  try
  {
    v3 = v2();
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        555LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(*a1 + 192) + 208LL))(*(_QWORD *)(*a1 + 192), &v22);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        556LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
    if ( (unsigned int)(v22 - 1) <= 1 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        560LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)0x8000FFFFLL);
      __debugbreak();
    }
    *(_QWORD *)&v20[0] = WindowManagerBridge::OnWindowEnumerationCompleted;
    DWORD2(v20[0]) = 0;
    wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,IInspectable *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *)>(
      v19,
      a1,
      v20);
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*a1 + 192) + 48LL))(
           *(_QWORD *)(*a1 + 192),
           v19[0],
           *a1 + 208);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        564LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v5);
    *(_QWORD *)&v20[0] = WindowManagerBridge::OnWindowWatcherStopped;
    DWORD2(v20[0]) = 0;
    wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,IInspectable *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *)>(
      &v18,
      a1,
      v20);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*a1 + 192) + 64LL))(
           *(_QWORD *)(*a1 + 192),
           v18,
           *a1 + 216);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        567LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    *(_QWORD *)&v20[0] = WindowManagerBridge::OnWindowAdded;
    DWORD2(v20[0]) = 0;
    wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *)>(
      &v25,
      a1,
      v20);
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*a1 + 192) + 80LL))(
           *(_QWORD *)(*a1 + 192),
           v25,
           *a1 + 224);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        570LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v7);
    *(_QWORD *)&v20[0] = WindowManagerBridge::OnWindowRemoved;
    DWORD2(v20[0]) = 0;
    wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *)>(
      &v24,
      a1,
      v20);
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*a1 + 192) + 96LL))(
           *(_QWORD *)(*a1 + 192),
           v24,
           *a1 + 232);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        573LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    *(_QWORD *)&v20[0] = CToastCenterExperienceManager::OnVisibilityRevokedChanged;
    DWORD2(v20[0]) = 0;
    wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *)>(
      &v23,
      a1,
      v20);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*a1 + 192) + 160LL))(
           *(_QWORD *)(*a1 + 192),
           v23,
           *a1 + 240);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        576LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    *(_BYTE *)(*a1 + 200) = 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 192) + 216LL))(*(_QWORD *)(*a1 + 192));
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        579LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v10);
    v12 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = v19[0];
    if ( v19[0] )
    {
      v19[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x245,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v11);
  }
  return 0LL;
}
