/*
 * XREFs of ??0CAnalogCompositorManager@@AEAA@XZ @ 0x18003ECF4
 * Callers:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002CCC4 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x18003D9F0 (-_Tidy@-$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ.c)
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x18003EE70 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x18003FA10 (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18003FAD4 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073BB0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

CAnalogCompositorManager *__fastcall CAnalogCompositorManager::CAnalogCompositorManager(CAnalogCompositorManager *this)
{
  int v1; // eax
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v9[26]; // [rsp+20h] [rbp-19h] BYREF
  int *v10; // [rsp+88h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]
  CAnalogCompositorManager *v12; // [rsp+A0h] [rbp+67h] BYREF

  v12 = this;
  qword_1800D7B10 = 0LL;
  Windows::Mirage::HolographicDriverDetectedWatcher::HolographicDriverDetectedWatcher((Windows::Mirage::HolographicDriverDetectedWatcher *)&qword_1800D7B18);
  qword_1800D7B48 = 0LL;
  qword_1800D7B50 = 0LL;
  LODWORD(v12) = 0;
  byte_1800D7B58 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, CAnalogCompositorManager **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                      + 8)
                                                                                   + 8LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
         L"DisableHologramCompositor",
         &v12) < 0
    || !(_DWORD)v12 )
  {
    v1 = Windows::Mirage::HolographicDriverDetectedWatcher::RegisterForCMNotifications((Windows::Mirage::HolographicDriverDetectedWatcher *)&qword_1800D7B18);
    if ( v1 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x20,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v1,
        v9[0]);
      __debugbreak();
    }
    *(_QWORD *)v9 = off_1800B6D28;
    v10 = v9;
    if ( qword_1800D7B28 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x32,
        (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        (const char *)0x8000000ELL,
        v9[0]);
      __debugbreak();
    }
    v2 = wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
           &qword_1800D7B28,
           qword_1800D7B18,
           v9);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x36,
        (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        (const char *)(unsigned int)v2,
        v9[0]);
      __debugbreak();
    }
    wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
      (__int64)v9,
      v3);
    wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
      (__int64)v9,
      v4);
    *(_QWORD *)v9 = off_1800B6CF8;
    v10 = v9;
    if ( qword_1800D7B30 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x3D,
        (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        (const char *)0x8000000ELL,
        v9[0]);
      __debugbreak();
    }
    v5 = wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
           &qword_1800D7B30,
           qword_1800D7B20,
           v9);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x41,
        (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        (const char *)(unsigned int)v5,
        v9[0]);
      __debugbreak();
    }
    wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
      (__int64)v9,
      v6);
    wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
      (__int64)v9,
      v7);
  }
  return (CAnalogCompositorManager *)&qword_1800D7B10;
}
