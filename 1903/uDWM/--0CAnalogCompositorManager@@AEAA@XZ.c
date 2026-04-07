/*
 * XREFs of ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180041870
 * Callers:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002F538 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 * Callees:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x1800419D4 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x180041FFC (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x180042538 (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800425FC (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007A4D8 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

CAnalogCompositorManager *__fastcall CAnalogCompositorManager::CAnalogCompositorManager(CAnalogCompositorManager *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v6[13]; // [rsp+28h] [rbp-21h] BYREF
  _QWORD *v7; // [rsp+90h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  CAnalogCompositorManager *v9; // [rsp+B0h] [rbp+67h] BYREF

  v9 = this;
  qword_1800DEB20 = 0LL;
  Windows::Mirage::HolographicDriverDetectedWatcher::HolographicDriverDetectedWatcher((Windows::Mirage::HolographicDriverDetectedWatcher *)&qword_1800DEB28);
  qword_1800DEB58 = 0LL;
  LODWORD(v9) = 0;
  xmmword_1800DEB60 = 0LL;
  byte_1800DEB70 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, CAnalogCompositorManager **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                      + 8)
                                                                                   + 8LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
         L"DisableHologramCompositor",
         &v9) < 0
    || !(_DWORD)v9 )
  {
    v1 = Windows::Mirage::HolographicDriverDetectedWatcher::RegisterForCMNotifications((Windows::Mirage::HolographicDriverDetectedWatcher *)&qword_1800DEB28);
    if ( v1 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x21,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v1,
        v5);
      __debugbreak();
    }
    v6[0] = off_1800BC9E0;
    v7 = v6;
    if ( qword_1800DEB38 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x32,
        (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        (const char *)0x8000000ELL,
        v5);
      __debugbreak();
    }
    v2 = wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
           &qword_1800DEB38,
           qword_1800DEB28,
           &v5);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x36,
        (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        (const char *)(unsigned int)v2,
        v5);
      __debugbreak();
    }
    wistd::function<void (int const &)>::~function<void (int const &)>(&v5);
    v6[0] = off_1800BC9B8;
    v7 = v6;
    if ( qword_1800DEB40 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x3D,
        (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        (const char *)0x8000000ELL,
        v5);
      __debugbreak();
    }
    v3 = wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
           &qword_1800DEB40,
           qword_1800DEB30,
           &v5);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x41,
        (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        (const char *)(unsigned int)v3,
        v5);
      __debugbreak();
    }
    wistd::function<void (int const &)>::~function<void (int const &)>(&v5);
  }
  return (CAnalogCompositorManager *)&qword_1800DEB20;
}
