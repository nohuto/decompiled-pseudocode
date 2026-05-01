/*
 * XREFs of ?ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015CE3C
 * Callers:
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18015ADB0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180013C94 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180015858 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1800756E8 (--1EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180075714 (-StartActivity@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?ReturnedToActiveApp@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1800757FC (-ReturnedToActiveApp@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITele.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReturnedToLock@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015D02C (-ReturnedToLock@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::ReturnFocus(ExperienceManagerUtils **this)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v2; // rdx
  HWND v3; // rdi
  ExperienceManagerUtils *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  int v9; // edx
  __int64 v11[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v12[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  v11[1] = -2LL;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v12,
    (__int64)"EM_ReturnFocusActivity");
  v12[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)v12);
  v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(this[16], v2);
  if ( !this[16] || !this[78] || GetForegroundWindow() != v3 )
  {
    v9 = -2147418113;
    goto LABEL_16;
  }
  if ( !*((_BYTE *)this + 416) )
  {
    v8 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, __int64))(*(_QWORD *)this[78] + 24LL))(this[78], 0xFFFFLL);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x316,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_17;
    }
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::ReturnedToActiveApp((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)v12);
LABEL_14:
    v9 = 0;
LABEL_16:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12, v9);
    v6 = 0;
    goto LABEL_17;
  }
  v11[0] = 0LL;
  v4 = this[74];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  v5 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, GUID *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
         v4,
         &IID_ILockScreenViewManager,
         &GUID_053bf212_5a22_4a75_87eb_dfca4ea90e02,
         v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11[0] + 80LL))(v11[0]);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 785LL;
      goto LABEL_9;
    }
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::ReturnedToLock((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
    goto LABEL_14;
  }
  v7 = 784LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
LABEL_17:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::~EM_ReturnFocusActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)v12);
  return v6;
}
