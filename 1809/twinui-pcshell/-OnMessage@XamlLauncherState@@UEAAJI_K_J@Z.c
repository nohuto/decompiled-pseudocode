/*
 * XREFs of ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1802A45C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180012230 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001432C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x180071F38 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnSessionBecameActive@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1802A0FC0 (--$OnSessionBecameActive@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SA.c)
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x1802A3EB8 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x1802A4738 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1802A5AB8 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 */

__int64 __fastcall XamlLauncherState::OnMessage(struct _TP_TIMER **this, int a2, XamlLauncherState *a3, int a4)
{
  struct _TP_TIMER **v4; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  __int128 v8; // xmm0
  struct _TP_TIMER **v9; // rcx
  char v10; // cl
  bool v11; // zf
  int v12; // r8d
  unsigned int v13; // edx
  int started; // eax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 )
    return 0LL;
  v4 = this - 5;
  if ( a3 != (XamlLauncherState *)(this - 5) )
    return 0LL;
  if ( !a4 )
  {
    v5 = XamlLauncherState::OnCortanaCutoffTimerFired(this - 5);
    if ( v5 >= 0 )
      return (unsigned int)v5;
    v6 = 295LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( a4 == 1 )
  {
    v5 = XamlLauncherState::OnSessionBecameIdle((XamlLauncherState *)(this - 5));
    if ( v5 >= 0 )
      return (unsigned int)v5;
    v6 = 299LL;
    goto LABEL_6;
  }
  if ( a4 == 6 )
  {
    *((_QWORD *)&v15 + 1) = this - 5;
    LODWORD(v15) = *((_DWORD *)v4 + 16);
    v8 = v15;
    *((_BYTE *)v4 + 968) = 0;
    v16 = 0;
    v15 = v8;
    StartWindowTelemetry::OnSessionBecameActive<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      (int *)&v15,
      (int *)v4 + 16);
  }
  else
  {
    if ( a4 == 7 )
    {
      v9 = this + 109;
    }
    else
    {
      if ( a4 == 2 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
          this + 110,
          0LL);
        if ( StartWindowTelemetry::IsEnabled(v10) )
          XamlLauncherState::StopTrackingCpuUsageOfCriticalProcesses((XamlLauncherState *)v4);
        return 0LL;
      }
      if ( a4 == 8 )
      {
        v9 = this + 111;
      }
      else if ( a4 == 3 )
      {
        v9 = this + 112;
      }
      else
      {
        if ( a4 != 4 )
        {
          if ( a4 == 5 )
          {
            v11 = *((_BYTE *)this + 976) == 0;
            *((_BYTE *)this + 926) = 1;
            if ( !v11 )
            {
              v12 = *((_DWORD *)this + 243);
              v13 = *((_DWORD *)this + 242);
              *((_BYTE *)this + 976) = 0;
              started = XamlLauncherState::ShowStartView((__int64)(this - 2), v13, v12);
              if ( started < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  337LL,
                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                  (const char *)(unsigned int)started);
            }
          }
          return 0LL;
        }
        v9 = this + 114;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v9,
      0LL);
  }
  return 0LL;
}
