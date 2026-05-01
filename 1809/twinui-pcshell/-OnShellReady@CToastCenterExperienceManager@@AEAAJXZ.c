/*
 * XREFs of ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015B630
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18015B8C0 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___lambda_e0b591fa9b495d746cf92a737792b3af___ @ 0x18008D3EC (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--Exper.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18014A78C (-ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 *     ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180157E34 (--$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIInspectable@@@WRL@M.c)
 *     ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015A234 (-LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x180160B38 (-SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x180160BA8 (-SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CToastCenterExperienceManager::OnShellReady(CToastCenterExperienceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 **v9; // rbx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  int Instance; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  CToastCenterExperienceManager *v18; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19[2]; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v19[1] = -2LL;
  *((_BYTE *)this + 417) = 1;
  v2 = *((_QWORD *)this + 47);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)this + 47) = 0LL;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::ReadyToLaunch();
  v17 = 0LL;
  v3 = *((_QWORD *)this + 74);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v4 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
         v3,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         &v17);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v16 = 0LL;
    v6 = v17;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.ActionCenter",
      0x2Eu,
      0x2Du);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, v21, &v16);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 529LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      goto LABEL_25;
    }
    v9 = (__int64 **)((char *)this + 640);
    v7 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Internal::Shell::Experience::IBaseExperienceManager>(
           &v16,
           (__int64 *)this + 80);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 531LL;
      goto LABEL_9;
    }
    v18 = this;
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___lambda_e0b591fa9b495d746cf92a737792b3af___(
      v19,
      (__int64)&v18);
    v10 = *v9;
    v11 = **v9;
    v12 = v19[0];
    Instance = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v11 + 64))(v10, v19[0], (char *)this + 648);
    v5 = Instance;
    if ( Instance >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 56);
      Instance = CoCreateInstance(
                   &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
                   0LL,
                   0x17u,
                   &GUID_443b1739_3779_4aba_953b_9e4ff84dd4b6,
                   (LPVOID *)this + 56);
      v5 = Instance;
      if ( Instance >= 0 )
      {
        Instance = CToastCenterExperienceManager::SubscribeToNewNotificationWnf(this);
        v5 = Instance;
        if ( Instance >= 0 )
        {
          Instance = CToastCenterExperienceManager::SubscribeToCriticalNotificationWnf(this);
          v5 = Instance;
          if ( Instance >= 0 )
          {
            Instance = CToastCenterExperienceManager::LookupToastQueue(this);
            v5 = Instance;
            if ( Instance >= 0 )
            {
              v5 = 0;
LABEL_22:
              if ( v12 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
              goto LABEL_24;
            }
            v14 = 557LL;
          }
          else
          {
            v14 = 555LL;
          }
        }
        else
        {
          v14 = 552LL;
        }
      }
      else
      {
        v14 = 549LL;
      }
    }
    else
    {
      v14 = 543LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20D,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_25:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return v5;
}
