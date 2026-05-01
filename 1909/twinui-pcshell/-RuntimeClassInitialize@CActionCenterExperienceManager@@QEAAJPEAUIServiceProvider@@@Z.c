/*
 * XREFs of ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180196180
 * Callers:
 *     ??$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180193810 (--$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x180194AC0 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18019520C (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180195AE8 (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801979BC (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18042FF64 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180430EE8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1804325A4 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CActionCenterExperienceManager::RuntimeClassInitialize(
        CActionCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // r12
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, HSTRING, _QWORD); // rdi
  int ready; // eax
  __int64 v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v14)(_QWORD, GUID *, char *); // rsi
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v18; // rdi
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v20; // r8
  HSTRING_HEADER *v21; // rax
  __int64 v22; // rcx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, char *); // [rsp+38h] [rbp-39h] BYREF
  __int64 v25[2]; // [rsp+40h] [rbp-31h] BYREF
  HSTRING_HEADER v26; // [rsp+50h] [rbp-21h] BYREF
  HSTRING v27; // [rsp+68h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING v29; // [rsp+88h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v25[1] = -2LL;
  v29 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ActionCenter",
    0x2Eu,
    0x2Du);
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v26,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CActionCenterExperienceManager *)((char *)this + 120),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v27,
         v29);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  hstringHeader.Reserved.Reserved1 = this;
  v6 = 1;
  hstringHeader.Reserved.Reserved2[8] = 1;
  v25[0] = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, __int64 *))QueryService)(
         a2,
         &unk_180511D90,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         v25);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_36;
  }
  v24 = 0LL;
  v9 = v25[0];
  v10 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v25[0] + 48LL);
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v26,
    L"Windows.Internal.ShellExperience.ToastCenter",
    0x2Du,
    0x2Cu);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  ready = v10(v9, v27, &v24);
  v5 = ready;
  if ( ready >= 0 )
  {
    v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
    v14 = **v24;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 66);
    ready = v14(v13, &GUID_8b6ebc6f_30f2_401b_a050_9f0b7f35f35d, (char *)this + 528);
    v5 = ready;
    if ( ready >= 0 )
    {
      v15 = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 54);
      ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
                a2,
                &IID_IImmersiveSessionIdleDetector,
                &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                (char *)this + 432);
      v5 = ready;
      if ( ready >= 0 )
      {
        ready = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 54) + 32LL))(
                  *((_QWORD *)this + 54),
                  ((unsigned __int64)this + 56) & -(__int64)(this != 0LL),
                  (char *)this + 440);
        v5 = ready;
        if ( ready >= 0 )
        {
          v16 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 61);
          ready = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v16)(
                    a2,
                    &SID_IImmersiveMonitorService,
                    &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                    (char *)this + 488);
          v5 = ready;
          if ( ready >= 0 )
          {
            ready = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 61) + 24LL))(
                      *((_QWORD *)this + 61),
                      ((unsigned __int64)this + 72) & -(__int64)(this != 0LL),
                      (char *)this + 476);
            v5 = ready;
            if ( ready >= 0 )
            {
              v17 = a2->lpVtbl->QueryService;
              v18 = (_QWORD *)((char *)this + 480);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 60);
              ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v17)(
                        a2,
                        &IID_IImmersiveWindowMessageService,
                        &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                        (char *)this + 480);
              v5 = ready;
              if ( ready >= 0 )
              {
                ready = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v18 + 24LL))(
                          *v18,
                          0LL,
                          ((unsigned __int64)this + 64) & -(__int64)(this != 0LL),
                          (char *)this + 468);
                v5 = ready;
                if ( ready >= 0 )
                {
                  ready = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v18 + 24LL))(
                            *v18,
                            26LL,
                            ((unsigned __int64)this + 64) & -(__int64)(this != 0LL),
                            (char *)this + 472);
                  v5 = ready;
                  if ( ready >= 0 )
                  {
                    v19 = a2->lpVtbl->QueryService;
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 62);
                    ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v19)(
                              a2,
                              &IID_IRealmActivationHistory,
                              &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
                              (char *)this + 496);
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
                                  v20);
                        v5 = ready;
                        if ( ready >= 0 )
                        {
                          ready = CActionCenterExperienceManager::OnDpiOrHighContrastChanged(this);
                          v5 = ready;
                          if ( ready >= 0 )
                          {
                            v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                    &v26,
                                    (const WCHAR **)off_180487A40);
                            ready = CSingleViewShellExperience::AddTestAumid(
                                      (CActionCenterExperienceManager *)((char *)this + 120),
                                      (HSTRING)v21[1].Reserved.Reserved1);
                            v5 = ready;
                            if ( ready >= 0 )
                            {
                              *((_BYTE *)this + 536) = IsShellLauncherEnabledForCurrentUser(v22);
                              v6 = 0;
                              v5 = 0;
                              goto LABEL_35;
                            }
                            v12 = 259LL;
                          }
                          else
                          {
                            v12 = 258LL;
                          }
                        }
                        else
                        {
                          v12 = 257LL;
                        }
                      }
                      else
                      {
                        v12 = 256LL;
                      }
                    }
                    else
                    {
                      v12 = 254LL;
                    }
                  }
                  else
                  {
                    v12 = 252LL;
                  }
                }
                else
                {
                  v12 = 251LL;
                }
              }
              else
              {
                v12 = 249LL;
              }
            }
            else
            {
              v12 = 245LL;
            }
          }
          else
          {
            v12 = 244LL;
          }
        }
        else
        {
          v12 = 242LL;
        }
      }
      else
      {
        v12 = 241LL;
      }
    }
    else
    {
      v12 = 239LL;
    }
  }
  else
  {
    v12 = 237LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)ready);
LABEL_35:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
LABEL_36:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
  if ( v6 )
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
  return v5;
}
