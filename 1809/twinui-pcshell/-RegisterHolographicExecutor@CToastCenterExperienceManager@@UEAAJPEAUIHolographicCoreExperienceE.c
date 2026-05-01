/*
 * XREFs of ?RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceExecutor@Holographic@Shell@Internal@Windows@@@Z @ 0x18015CA30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18015872C (--0-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ??1EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180158F18 (--1EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEA.c)
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015AD40 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015E224 (-StartActivity@EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015E77C (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::RegisterHolographicExecutor(
        CToastCenterExperienceManager *this,
        struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *a2)
{
  struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *v4; // rax
  HRESULT v5; // eax
  unsigned int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  LPVOID v9; // rdi
  int v10; // eax
  CToastCenterExperienceManager *v11; // rsi
  int v12; // eax
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v13; // rdx
  LPVOID ppv; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v17[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v16[1] = -2LL;
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"EM_RegisterHolographicExecutor");
  v17[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor *)v17);
  v4 = (struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *)*((_QWORD *)this + 76);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *)*((_QWORD *)this + 76);
    }
    v16[0] = (__int64)v4;
    *((_QWORD *)this + 76) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
  }
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v5 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = ppv;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 78);
    v10 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, char *))(*(_QWORD *)v9 + 24LL))(
            v9,
            &GUID_f33ef83f_9d1b_4603_914d_abc4895248b5,
            &GUID_f33ef83f_9d1b_4603_914d_abc4895248b5,
            (char *)this + 624);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v11 = (CToastCenterExperienceManager *)((char *)this - 56);
      v12 = RtlSubscribeWnfStateChangeNotification(
              (char *)v11 + 384,
              WNF_HOLO_USER_DISPLAY_CONTEXT,
              0LL,
              CToastCenterExperienceManager::DisplayContextChangedCallback);
      v6 = v12 | 0x10000000;
      if ( v12 >= 0 )
      {
        CToastCenterExperienceManager::OnDisplayContextChanged(v11, v13);
        wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
        v6 = 0;
        goto LABEL_13;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)v6);
      v7 = v6;
      v8 = 1483LL;
    }
    else
    {
      v7 = (unsigned int)v10;
      v8 = 1481LL;
    }
  }
  else
  {
    v7 = (unsigned int)v5;
    v8 = 1480LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)v7);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor::~EM_RegisterHolographicExecutor((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor *)v17);
  return v6;
}
