/*
 * XREFs of ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x18024AD44
 * Callers:
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x180222674 (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800DF4A0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800E26D8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x1800FB2D4 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 *     ?StartWindowWatcher@WindowManagerBridge@@AEAAJXZ @ 0x18024B1E8 (-StartWindowWatcher@WindowManagerBridge@@AEAAJXZ.c)
 *     ?WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18024B844 (-WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall WindowManagerBridge::RuntimeClassInitialize(
        WindowManagerBridge *this,
        struct IWindowEventDispatcherInternal *a2)
{
  __int64 v3; // rdx
  wil::details *v4; // rcx
  wil::details *Event; // rdi
  __int64 v6; // r8
  const char *v7; // r9
  signed int LastErrorFailHr; // eax
  __int64 v9; // rdx
  wil::details *v10; // rcx
  wil::details *v11; // rdi
  __int64 v12; // r8
  const char *v13; // r9
  signed int v14; // eax
  __int64 v15; // rcx
  int ActivationFactory; // eax
  __int64 v17; // rcx
  int v18; // eax
  int started; // eax
  __int64 v21; // rbx
  CCriticalFailureHandler *v22; // rcx
  const char *v23; // r9
  char v24; // al
  unsigned __int64 *v25; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v28[2]; // [rsp+30h] [rbp-48h] BYREF
  wil::ResultException *v29; // [rsp+40h] [rbp-38h] BYREF
  HSTRING string; // [rsp+48h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v28[1] = -2LL;
  v28[0] = this;
  wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((__int64 *)this + 36, (__int64)a2);
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 34,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v4, v3, v6, v7);
  }
  try
  {
    if ( LastErrorFailHr < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        52LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)LastErrorFailHr);
    v11 = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( v11 )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        (wil::details **)this + 35,
        v11);
      v14 = 0;
    }
    else
    {
      v14 = wil::details::GetLastErrorFailHr(v10, v9, v12, v13);
    }
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        54LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v14);
    v15 = *((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( WindowsCreateStringReference(
           L"Windows.Internal.ApplicationModel.WindowManagement.Window",
           0x39u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    ActivationFactory = RoGetActivationFactory(string, &GUID_5e75aba7_c424_4076_9d47_409a1eda087f, (char *)this + 192);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        57LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)ActivationFactory);
    v17 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( WindowsCreateStringReference(
           L"Windows.Internal.ApplicationModel.WindowManagement.AppView",
           0x3Au,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v18 = RoGetActivationFactory(string, &GUID_882d9981_e3b3_4275_a857_00c3910fb5c3, (char *)this + 48);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        58LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v18);
    started = WindowManagerBridge::StartWindowWatcher(this);
    if ( started < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        62LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)started);
  }
  catch ( wil::ResultException *v29 )
  {
    v21 = v28[0];
    *(_DWORD *)(v28[0] + 296LL) = *((_DWORD *)v29 + 7);
    wil::details::SetEvent(*(wil::details **)(v21 + 272), &v27);
    v23 = (const char *)*(unsigned int *)(v21 + 296);
    LODWORD(v28[0]) = *(_DWORD *)(v21 + 296);
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v22, (int *)v28);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v23 = (const char *)LODWORD(v28[0]);
    }
    if ( (int)v23 >= 0 )
      goto LABEL_34;
    if ( (_DWORD)v23 != -2147024882 && (_DWORD)v23 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v22,
        (int *)v28,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        0x48u,
        v25,
        v26);
      v23 = (const char *)LODWORD(v28[0]);
    }
    if ( (int)v23 >= 0 )
LABEL_34:
      v24 = 1;
    else
      v24 = 0;
    if ( !v24 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        72LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        v23);
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_ConnectedToWindowManager();
  return 0LL;
}
