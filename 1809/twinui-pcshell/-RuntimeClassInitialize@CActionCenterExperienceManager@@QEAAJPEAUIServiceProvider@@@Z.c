/*
 * XREFs of ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18014A884
 * Callers:
 *     ??$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180148650 (--$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18008D1F0 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     wil::details::ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___::_ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___ @ 0x180148BD4 (wil--details--ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___--_ScopeExitFn__lambda_d721.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x18014A230 (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x18014BED8 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1803AE670 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1803AF554 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1803B0AA4 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CActionCenterExperienceManager::RuntimeClassInitialize(
        CActionCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rbx
  int ready; // eax
  __int64 v9; // rdx
  _QWORD *v10; // r14
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v11; // r8
  HSTRING_HEADER *v12; // rax
  __int64 v13; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, char *); // [rsp+38h] [rbp-29h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-11h] BYREF
  HSTRING v18; // [rsp+68h] [rbp+7h]
  HSTRING_HEADER v19; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING v20; // [rsp+88h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v16[1] = -2LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ActionCenter",
    0x2Eu,
    0x2Du);
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v19,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CActionCenterExperienceManager *)((char *)this + 120),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v20,
         v18);
  v5 = v4;
  if ( v4 >= 0 )
  {
    hstringHeader.Reserved.Reserved1 = this;
    hstringHeader.Reserved.Reserved2[8] = 1;
    v16[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
           &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
           v16);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE6,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_36:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(v16);
      wil::details::ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___::_ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___(&hstringHeader);
      return v5;
    }
    v15 = 0LL;
    v7 = v16[0];
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v19,
      L"Windows.Internal.ShellExperience.ToastCenter",
      0x2Du,
      0x2Cu);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    ready = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, v20, &v15);
    v5 = ready;
    if ( ready >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 65);
      ready = (**v15)(v15, &GUID_8b6ebc6f_30f2_401b_a050_9f0b7f35f35d, (char *)this + 520);
      v5 = ready;
      if ( ready >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 53);
        ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                  a2,
                  &IID_IImmersiveSessionIdleDetector,
                  &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                  (char *)this + 424);
        v5 = ready;
        if ( ready >= 0 )
        {
          ready = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 53) + 32LL))(
                    *((_QWORD *)this + 53),
                    ((unsigned __int64)this + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
                    (char *)this + 432);
          v5 = ready;
          if ( ready >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 60);
            ready = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                      a2,
                      &SID_IImmersiveMonitorService,
                      &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                      (char *)this + 480);
            v5 = ready;
            if ( ready >= 0 )
            {
              ready = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 60) + 24LL))(
                        *((_QWORD *)this + 60),
                        ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
                        (char *)this + 464);
              v5 = ready;
              if ( ready >= 0 )
              {
                v10 = (_QWORD *)((char *)this + 472);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 59);
                ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                          a2,
                          &IID_IImmersiveWindowMessageService,
                          &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                          (char *)this + 472);
                v5 = ready;
                if ( ready >= 0 )
                {
                  ready = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v10 + 24LL))(
                            *v10,
                            0LL,
                            ((unsigned __int64)this + 64) & -(__int64)(this != 0LL),
                            (char *)this + 456);
                  v5 = ready;
                  if ( ready >= 0 )
                  {
                    ready = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v10 + 24LL))(
                              *v10,
                              26LL,
                              ((unsigned __int64)this + 64) & -(__int64)(this != 0LL),
                              (char *)this + 460);
                    v5 = ready;
                    if ( ready >= 0 )
                    {
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 61);
                      ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                                a2,
                                &IID_IRealmActivationHistory,
                                &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
                                (char *)this + 488);
                      v5 = ready;
                      if ( ready >= 0 )
                      {
                        ready = CActionCenterExperienceManager::SubscribeToShellReadyWnf(this);
                        v5 = ready;
                        if ( ready >= 0 )
                        {
                          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
                          ready = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                    (ExperienceManagerUtils *)a2,
                                    (struct IServiceProvider *)this + 14,
                                    v11);
                          v5 = ready;
                          if ( ready >= 0 )
                          {
                            ready = CActionCenterExperienceManager::OnDpiOrHighContrastChanged(this);
                            v5 = ready;
                            if ( ready >= 0 )
                            {
                              v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                      &v19,
                                      (const WCHAR **)off_1803CCE50);
                              ready = CSingleViewShellExperience::AddTestAumid(
                                        (CActionCenterExperienceManager *)((char *)this + 120),
                                        (HSTRING)v12[1].Reserved.Reserved1);
                              v5 = ready;
                              if ( ready >= 0 )
                              {
                                *((_BYTE *)this + 528) = IsShellLauncherEnabledForCurrentUser(v13);
                                hstringHeader.Reserved.Reserved2[8] = 0;
                                v5 = 0;
                                goto LABEL_35;
                              }
                              v9 = 256LL;
                            }
                            else
                            {
                              v9 = 255LL;
                            }
                          }
                          else
                          {
                            v9 = 254LL;
                          }
                        }
                        else
                        {
                          v9 = 253LL;
                        }
                      }
                      else
                      {
                        v9 = 251LL;
                      }
                    }
                    else
                    {
                      v9 = 249LL;
                    }
                  }
                  else
                  {
                    v9 = 248LL;
                  }
                }
                else
                {
                  v9 = 246LL;
                }
              }
              else
              {
                v9 = 242LL;
              }
            }
            else
            {
              v9 = 241LL;
            }
          }
          else
          {
            v9 = 239LL;
          }
        }
        else
        {
          v9 = 238LL;
        }
      }
      else
      {
        v9 = 236LL;
      }
    }
    else
    {
      v9 = 234LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)ready);
LABEL_35:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v15);
    goto LABEL_36;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDE,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
