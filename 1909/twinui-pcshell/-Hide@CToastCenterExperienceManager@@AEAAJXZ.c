/*
 * XREFs of ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x18007D360
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_341c8b0b8a22e4992787ff2c01c01817___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::Invoke @ 0x18007D2E0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18007D2E0.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801A6250 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801A6D88 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180013A18 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004632C (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180046470 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18007D410 (--1EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18007D43C (-StartActivity@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXX.c)
 *     ?NoOp_AlreadyHidden@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18007D4DC (-NoOp_AlreadyHidden@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A4F94 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?HidingInHolographic@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A50B0 (-HidingInHolographic@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Hide(CToastCenterExperienceManager *this)
{
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // rdx
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v6,
    (__int64)"EM_HideActivity");
  v6[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity *)v6);
  if ( *((_DWORD *)this + 36) == 2 )
  {
    if ( *((_QWORD *)this + 84)
      && (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::HidingInHolographic((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity *)v6),
          v4 = CToastCenterExperienceManager::HideInHolographic(this),
          v2 = v4,
          v4 < 0) )
    {
      v5 = 770LL;
    }
    else
    {
      v4 = CSingleViewShellExperience::Hide((__int64)this + 104, 0LL);
      v2 = v4;
      if ( v4 >= 0 )
        goto LABEL_3;
      v5 = 773LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_4;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::NoOp_AlreadyHidden((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity *)v6);
LABEL_3:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6, 0);
  v2 = 0;
LABEL_4:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::~EM_HideActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity *)v6);
  return v2;
}
