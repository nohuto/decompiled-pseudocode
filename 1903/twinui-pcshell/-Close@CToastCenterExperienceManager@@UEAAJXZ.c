/*
 * XREFs of ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180185610
 * Callers:
 *     wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___ @ 0x180184C40 (wil--details--ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___--_ScopeExitFn__lambda_39f8.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801894E0 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180109598 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall CToastCenterExperienceManager::Close(CToastCenterExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 47);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 40LL))(v2, *((unsigned int *)this + 96));
    if ( v3 >= 0 )
      *((_DWORD *)this + 96) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  v4 = *((_QWORD *)this + 70);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *((unsigned int *)this + 134));
    if ( v5 >= 0 )
      *((_DWORD *)this + 134) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x156,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 70) + 32LL))(
           *((_QWORD *)this + 70),
           *((unsigned int *)this + 135));
    if ( v6 >= 0 )
      *((_DWORD *)this + 134) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x15B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = *((_QWORD *)this + 71);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, *((unsigned int *)this + 136));
    if ( v8 >= 0 )
      *((_DWORD *)this + 136) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x163,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
  }
  if ( *((_DWORD *)this + 132) )
  {
    v9 = SmartCookie::Unregister((CToastCenterExperienceManager *)((char *)this + 408));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x16B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
  }
  v10 = *((_QWORD *)this + 41);
  if ( v10 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v10);
    *((_QWORD *)this + 41) = 0LL;
  }
  v11 = *((_QWORD *)this + 39);
  if ( v11 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v11);
    *((_QWORD *)this + 39) = 0LL;
  }
  v12 = *((_QWORD *)this + 40);
  if ( v12 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v12);
    *((_QWORD *)this + 40) = 0LL;
  }
  v13 = *((_QWORD *)this + 75);
  if ( v13 && *((_QWORD *)this + 76) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 72LL))(v13, *((_QWORD *)this + 76));
    *((_QWORD *)this + 76) = 0LL;
  }
  return 0LL;
}
