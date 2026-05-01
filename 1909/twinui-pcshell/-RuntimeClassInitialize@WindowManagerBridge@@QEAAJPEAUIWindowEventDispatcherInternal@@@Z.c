/*
 * XREFs of ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x1802C08A8
 * Callers:
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x18029719C (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008F8E8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4Rep.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801207DC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180123D90 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180140724 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??$?0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z @ 0x1802BC76C (--$-0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z.c)
 *     ??$?0$0DL@@StringReference@Internal@Windows@@QEAA@AEAY0DL@$$CBG@Z @ 0x1802BC7B8 (--$-0$0DL@@StringReference@Internal@Windows@@QEAA@AEAY0DL@$$CBG@Z.c)
 *     ?StartWindowWatcher@WindowManagerBridge@@AEAAJXZ @ 0x1802C0D20 (-StartWindowWatcher@WindowManagerBridge@@AEAAJXZ.c)
 *     ?WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802C1398 (-WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  signed int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  const unsigned __int16 (*v18)[58]; // rdx
  HSTRING *v19; // rsi
  __int64 v20; // rdx
  int ActivationFactory; // eax
  const unsigned __int16 *v22; // rdx
  HSTRING *v23; // rsi
  __int64 v24; // rdx
  int v25; // eax
  int started; // eax
  __int64 v28; // rbx
  CCriticalFailureHandler *v29; // rcx
  const char *v30; // r9
  char v31; // al
  unsigned __int64 *v32; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v33; // [rsp+28h] [rbp-50h]
  __int64 v34; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v35[2]; // [rsp+30h] [rbp-48h] BYREF
  wil::ResultException *v36; // [rsp+40h] [rbp-38h] BYREF
  HSTRING string[4]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v35[1] = -2LL;
  v35[0] = this;
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
    (__int64 *)this + 35,
    (__int64)a2);
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 33,
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
        54LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)LastErrorFailHr);
    v11 = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( v11 )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (wil::details **)this + 34,
        v11);
      v16 = 0;
    }
    else
    {
      v16 = wil::details::GetLastErrorFailHr(v10, v9, v12, v13);
    }
    v17 = retaddr;
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        56LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v16);
    wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsageToService((__int64)v17, v14, v15);
    v19 = Windows::Internal::StringReference::StringReference(string, v18);
    v20 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    ActivationFactory = RoGetActivationFactory(*v19, &GUID_5e75aba7_c424_4076_9d47_409a1eda087f, (char *)this + 184);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        79LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)ActivationFactory);
    v23 = Windows::Internal::StringReference::StringReference(string, (const unsigned __int16 (*)[59])v22);
    v24 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    v25 = RoGetActivationFactory(*v23, &GUID_882d9981_e3b3_4275_a857_00c3910fb5c3, (char *)this + 48);
    if ( v25 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        80LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v25);
    started = WindowManagerBridge::StartWindowWatcher(this);
    if ( started < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        84LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)started);
  }
  catch ( wil::ResultException *v36 )
  {
    v28 = v35[0];
    *(_DWORD *)(v35[0] + 288LL) = *((_DWORD *)v36 + 7);
    wil::details::SetEvent(*(wil::details **)(v28 + 264), &v34);
    v30 = (const char *)*(unsigned int *)(v28 + 288);
    LODWORD(v35[0]) = *(_DWORD *)(v28 + 288);
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v29, (int *)v35);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v30 = (const char *)LODWORD(v35[0]);
    }
    if ( (int)v30 >= 0 )
      goto LABEL_30;
    if ( (_DWORD)v30 != -2147024882 && (_DWORD)v30 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v29,
        (int *)v35,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        0x5Fu,
        v32,
        v33);
      v30 = (const char *)LODWORD(v35[0]);
    }
    if ( (int)v30 >= 0 )
LABEL_30:
      v31 = 1;
    else
      v31 = 0;
    if ( !v31 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        95LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        v30);
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_ConnectedToWindowManager();
  return 0LL;
}
