/*
 * XREFs of ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A52AC
 * Callers:
 *     ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A60DC (-OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A6948 (-OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180045F20 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004632C (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180046470 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C678 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801281C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1801A4074 (--1EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?LaunchedApplication@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A54AC (-LaunchedApplication@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?NoOp_ActionCenterVisible@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A5704 (-NoOp_ActionCenterVisible@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITele.c)
 *     ?NoOp_DeviceLockdown@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A58F4 (-NoOp_DeviceLockdown@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?NoOp_ShellNotReady@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A59EC (-NoOp_ShellNotReady@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?NoOp_ShutdownInProgress@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A5AE4 (-NoOp_ShutdownInProgress@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelem.c)
 *     ?StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A954C (-StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA.c)
 *     ?TurnedScreenOn_SoundSentry@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801AC6E4 (-TurnedScreenOn_SoundSentry@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Launch(PTP_TIMER *pv)
{
  HWND WindowW; // rax
  PTP_TIMER *v3; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C8h]
  int pvParam; // [rsp+48h] [rbp-C0h] BYREF
  char v12; // [rsp+4Ch] [rbp-BCh]
  _QWORD v13[40]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v10 = -2LL;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v13,
    (__int64)"EM_LaunchActivity");
  v13[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v13);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !*((_BYTE *)pv + 417) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::NoOp_ShellNotReady((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v13);
LABEL_16:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13, 0);
    v6 = 0;
    goto LABEL_17;
  }
  if ( GetPropW(WindowW, L"IsExplorerShuttingDown") )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::NoOp_ShutdownInProgress((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v13);
    goto LABEL_16;
  }
  if ( *((_BYTE *)pv + 418) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::NoOp_ActionCenterVisible((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v13);
    goto LABEL_16;
  }
  if ( *((_BYTE *)pv + 419) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::NoOp_DeviceLockdown((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v13);
    goto LABEL_16;
  }
  v3 = pv + 79;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_d65b95255a9e4943d1141964e99c1740_::_lambda_invoker_cdecl_,
                      pv,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    pv + 79,
    ThreadpoolTimer);
  pvParam = 56;
  if ( SystemParametersInfoW(0x40u, 0x38u, &pvParam, 0)
    && (v12 & 1) != 0
    && (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::TurnedScreenOn_SoundSentry((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v13),
        v5 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0),
        v5 < 0) )
  {
    v6 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x2C8,
           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
           (const char *)(unsigned int)v5);
  }
  else
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::LaunchedApplication((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v13);
    v7 = CSingleViewShellExperience::Launch((CSingleViewShellExperience *)(pv + 13));
    v6 = v7;
    if ( v7 >= 0 )
    {
      pftDueTime = (struct _FILETIME)-600000000LL;
      SetThreadpoolTimer(*v3, &pftDueTime, 0, 0);
      goto LABEL_16;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  }
LABEL_17:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::~EM_LaunchActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v13);
  return v6;
}
