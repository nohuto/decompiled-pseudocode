/*
 * XREFs of ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A6AC0
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801A6D88 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18019604C (-ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 *     ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801A2F38 (--$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIInspectable@@@WRL@M.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A3988 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIBaseExperie.c)
 *     ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A55A4 (-LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801AC49C (-SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801AC50C (-SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CToastCenterExperienceManager::OnShellReady(CToastCenterExperienceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, void *, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, _QWORD); // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // r14
  int Instance; // eax
  __int64 v16; // rdx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v19[3]; // [rsp+38h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v19[1] = -2LL;
  *((_BYTE *)this + 417) = 1;
  v2 = *((_QWORD *)this + 47);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)this + 47) = 0LL;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::ReadyToLaunch();
  v19[0] = 0LL;
  v3 = *((_QWORD *)this + 75);
  v4 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  v5 = v4(v3, &unk_180512D08, &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5, v19);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v18 = 0LL;
    v7 = v19[0];
    v8 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19[0] + 48LL);
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.ActionCenter",
      0x2Eu,
      0x2Du);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v9 = v8(v7, v21, &v18);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 541LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      goto LABEL_27;
    }
    v9 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Internal::Shell::Experience::IBaseExperienceManager>(
           &v18,
           (__int64 *)this + 81);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 543LL;
      goto LABEL_9;
    }
    v11 = 0LL;
    v12 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    v14 = 0LL;
    if ( v12 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>>((__int64)v12);
      v13[2] = this;
      *v13 = off_18045A7E0;
      v11 = (__int64)v13;
      v14 = v13;
    }
    v19[2] = v11;
    Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(**((_QWORD **)this + 81) + 64LL))(
                 *((_QWORD *)this + 81),
                 v14,
                 (char *)this + 656);
    v6 = Instance;
    if ( Instance >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 56);
      Instance = CoCreateInstance(
                   &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
                   0LL,
                   0x17u,
                   &GUID_443b1739_3779_4aba_953b_9e4ff84dd4b6,
                   (LPVOID *)this + 56);
      v6 = Instance;
      if ( Instance >= 0 )
      {
        Instance = CToastCenterExperienceManager::SubscribeToNewNotificationWnf(this);
        v6 = Instance;
        if ( Instance >= 0 )
        {
          Instance = CToastCenterExperienceManager::SubscribeToCriticalNotificationWnf(this);
          v6 = Instance;
          if ( Instance >= 0 )
          {
            Instance = CToastCenterExperienceManager::LookupToastQueue(this);
            v6 = Instance;
            if ( Instance >= 0 )
            {
              v6 = 0;
LABEL_24:
              if ( v14 )
                (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
              goto LABEL_26;
            }
            v16 = 569LL;
          }
          else
          {
            v16 = 567LL;
          }
        }
        else
        {
          v16 = 564LL;
        }
      }
      else
      {
        v16 = 561LL;
      }
    }
    else
    {
      v16 = 555LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x219,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  return v6;
}
