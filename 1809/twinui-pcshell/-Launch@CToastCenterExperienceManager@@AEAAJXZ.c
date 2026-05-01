/*
 * XREFs of ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180159F3C
 * Callers:
 *     ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015AC3C (-OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015B4B8 (-OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180013C94 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001432C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180015858 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180061B90 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?NoOp_DeviceLockdown@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18008D6FC (-NoOp_DeviceLockdown@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800E7154 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180158EC0 (--1EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?LaunchedApplication@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015A13C (-LaunchedApplication@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?NoOp_ActionCenterVisible@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015A394 (-NoOp_ActionCenterVisible@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITele.c)
 *     ?NoOp_ShellNotReady@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015A584 (-NoOp_ShellNotReady@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?NoOp_ShutdownInProgress@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015A67C (-NoOp_ShutdownInProgress@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelem.c)
 *     ?StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015DFAC (-StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA.c)
 *     ?TurnedScreenOn_SoundSentry@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180160D80 (-TurnedScreenOn_SoundSentry@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITe.c)
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
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v13,
    (__int64)"EM_LaunchActivity");
  v13[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v13);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !*((_BYTE *)pv + 417) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::NoOp_ShellNotReady((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v13);
LABEL_16:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13, 0);
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
  v3 = pv + 77;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_59e6d63266d339afe1c6e49928c16f3c_::_lambda_invoker_cdecl_,
                      pv,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    pv + 77,
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
           (void *)0x2BC,
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
      (void *)0x2C1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  }
LABEL_17:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::~EM_LaunchActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v13);
  return v6;
}
