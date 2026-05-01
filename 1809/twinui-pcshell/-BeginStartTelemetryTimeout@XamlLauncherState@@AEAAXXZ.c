/*
 * XREFs of ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180014138
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180012230 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001432C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x180071F38 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1800729A4 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801435E0 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall XamlLauncherState::BeginStartTelemetryTimeout(struct _TP_TIMER **pv)
{
  struct _TP_TIMER **v1; // rdi
  PTP_TIMER ThreadpoolTimer; // rax
  const char *v4; // r9
  struct _TP_TIMER *v5; // rcx
  struct _TP_TIMER **v6; // rdi
  PTP_TIMER v7; // rax
  const char *v8; // r9
  struct _TP_TIMER *v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // cl
  struct _TP_TIMER **v12; // rdi
  PTP_TIMER v13; // rax
  const char *v14; // r9
  struct _TP_TIMER *v15; // rcx
  struct _TP_TIMER **v16; // rdi
  PTP_TIMER v17; // rax
  const char *v18; // r9
  struct _TP_TIMER *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v1 = pv + 114;
  if ( !pv[114] )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_73e76d8d16808ac10322fbdb9b07c67c_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      ThreadpoolTimer);
    v5 = *v1;
    if ( *v1
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x41F,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v4),
          (v5 = *v1) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)-20000000LL;
      SetThreadpoolTimer(v5, &pftDueTime, 0, 0x3E8u);
    }
  }
  v6 = pv + 115;
  if ( !pv[115] )
  {
    v7 = CreateThreadpoolTimer(lambda_b5008ceb20ea0aaab8abc16420ca4d79_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      pv + 115,
      v7);
    v9 = *v6;
    if ( *v6
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x434,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v8),
          (v9 = *v6) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)(-10000000LL * *((unsigned int *)pv + 17));
      SetThreadpoolTimer(v9, &pftDueTime, 0, 0x3E8u);
      if ( StartWindowTelemetry::IsEnabled(v11, v10) )
        XamlLauncherState::StartTrackingCpuUsageOfCriticalProcesses((XamlLauncherState *)pv);
    }
  }
  v12 = pv + 116;
  if ( !pv[116] )
  {
    v13 = CreateThreadpoolTimer(lambda_0ecf0782f9870a2c1275b8518c08daa4_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      pv + 116,
      v13);
    v15 = *v12;
    if ( *v12
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x44F,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v14),
          (v15 = *v12) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)-100000000LL;
      SetThreadpoolTimer(v15, &pftDueTime, 0, 0x3E8u);
    }
  }
  v16 = pv + 117;
  if ( !pv[117] )
  {
    v17 = CreateThreadpoolTimer(lambda_6993ad0a1190e378d2297439533de25a_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      pv + 117,
      v17);
    v19 = *v16;
    if ( *v16
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x464,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v18),
          (v19 = *v16) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)-300000000LL;
      SetThreadpoolTimer(v19, &pftDueTime, 0, 0x3E8u);
    }
  }
}
