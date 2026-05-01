/*
 * XREFs of ?OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801A7010
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004632C (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180046470 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180194274 (--1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180196878 (-StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A4F94 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A55A4 (-LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnViewDestroyed(
        CToastCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  CToastCenterExperienceManager *v6; // rdi
  CToastCenterExperienceManager *v7; // rdx
  int v8; // ecx
  bool v9; // zf
  unsigned int v10; // eax
  DWORD pcbData; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pvData; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD pdwType[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h]
  _QWORD v16[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v15 = -2LL;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v16,
    (__int64)"EM_ViewDestroyedActivity");
  v16[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v16);
  if ( !*((_QWORD *)this + 73)
    || (v3 = CToastCenterExperienceManager::HideInHolographic((CToastCenterExperienceManager *)((char *)this - 88)),
        v4 = v3,
        v3 >= 0) )
  {
    pdwType[0] = 0;
    pcbData = 4;
    v6 = (CToastCenterExperienceManager *)((char *)this - 88);
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
            L"AllowAutoAppRestartOnCrash",
            0x10000012u,
            pdwType,
            &pvData,
            &pcbData) )
    {
      if ( pdwType[0] == 4 )
      {
        v7 = (CToastCenterExperienceManager *)((char *)this - 88);
        if ( pvData <= 1 )
        {
          v8 = 0;
          v9 = pvData == 1;
          goto LABEL_12;
        }
      }
      else if ( pcbData == 4 )
      {
        v7 = (CToastCenterExperienceManager *)((char *)this - 88);
        if ( (_WORD)pvData == 48 || (_WORD)pvData == 49 )
        {
          v8 = 0;
          v9 = (_WORD)pvData == 49;
LABEL_12:
          v6 = v7;
          LOBYTE(v8) = v9;
          if ( !v8 )
            goto LABEL_17;
        }
      }
    }
    v10 = *((_DWORD *)this + 127);
    if ( v10 < 5 )
    {
      *((_DWORD *)this + 127) = v10 + 1;
      pcbData = 0;
      pvData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
        L"AllowAutoAppRestartOnCrash",
        0x10000012u,
        &pcbData,
        pdwType,
        &pvData);
      v3 = CToastCenterExperienceManager::LookupToastQueue(v6);
      v4 = v3;
      if ( v3 < 0 )
      {
        v5 = 1113LL;
        goto LABEL_16;
      }
    }
LABEL_17:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v16, 0);
    v4 = 0;
    goto LABEL_18;
  }
  v5 = 1100LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_18:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::~EM_ViewDestroyedActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v16);
  return v4;
}
