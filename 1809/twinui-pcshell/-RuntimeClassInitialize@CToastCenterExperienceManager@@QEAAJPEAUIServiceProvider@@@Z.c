/*
 * XREFs of ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18015D124
 * Callers:
 *     ??$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18015819C (--$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@De.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18008D1F0 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@Z @ 0x1801584B8 (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastC.c)
 *     wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___ @ 0x180158AD0 (wil--details--ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___--_ScopeExitFn__lambda_39f8.c)
 *     ?SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x180160C18 (-SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1803AE670 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1803AF554 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1803B0AA4 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CToastCenterExperienceManager::RuntimeClassInitialize(
        CToastCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // r14
  int ready; // eax
  __int64 v13; // rdx
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v14; // r8
  HSTRING_HEADER *v15; // rax
  __int64 v16; // rcx
  __int64 v18[2]; // [rsp+38h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-19h] BYREF
  HSTRING v20; // [rsp+60h] [rbp-1h]
  HSTRING_HEADER v21; // [rsp+68h] [rbp+7h] BYREF
  HSTRING v22; // [rsp+80h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v18[1] = -2LL;
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ToastCenter",
    0x2Du,
    0x2Cu);
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v21,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CToastCenterExperienceManager *)((char *)this + 104),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v22,
         v20);
  v5 = v4;
  if ( v4 >= 0 )
  {
    hstringHeader.Reserved.Reserved1 = this;
    hstringHeader.Reserved.Reserved2[8] = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 53);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           (char *)this + 424);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 287LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_35:
      wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___(&hstringHeader);
      return v5;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 53) + 32LL))(
           *((_QWORD *)this + 53),
           -(__int64)(this != 0LL) & ((unsigned __int64)this + 24),
           (char *)this + 432);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 288LL;
      goto LABEL_23;
    }
    v8 = (__int64 *)((char *)this + 440);
    v9 = *((_QWORD *)this + 55);
    if ( v9 )
    {
      *v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &SID_InputHostLayout,
           &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
           (char *)this + 440);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 290LL;
      goto LABEL_23;
    }
    v6 = SmartCookie::Register<IInputHostLayout,long (IInputHostLayout::*)(IInputHostLayoutChanges *,unsigned long *),long (IInputHostLayout::*)(unsigned long),CToastCenterExperienceManager *>(
           (__int64)this + 456,
           *v8,
           v10);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 292LL;
      goto LABEL_23;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 76);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           (char *)this + 608);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 294LL;
      goto LABEL_23;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 76) + 24LL))(
           *((_QWORD *)this + 76),
           -(__int64)(this != 0LL) & ((unsigned __int64)this + 40),
           (char *)this + 584);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 295LL;
      goto LABEL_23;
    }
    v11 = (_QWORD *)((char *)this + 600);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 75);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IImmersiveWindowMessageService,
           &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
           (char *)this + 600);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 299LL;
      goto LABEL_23;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v11 + 24LL))(
           *v11,
           0LL,
           ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
           (char *)this + 576);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 301LL;
      goto LABEL_23;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v11 + 24LL))(
           *v11,
           26LL,
           ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
           (char *)this + 580);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 302LL;
      goto LABEL_23;
    }
    v18[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 78);
    ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
              a2,
              &IID_IRealmActivationHistory,
              &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
              (char *)this + 624);
    v5 = ready;
    if ( ready >= 0 )
    {
      ready = CToastCenterExperienceManager::SubscribeToShellReadyWnf(this);
      v5 = ready;
      if ( ready >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
        ready = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                  (ExperienceManagerUtils *)a2,
                  (struct IServiceProvider *)this + 12,
                  v14);
        v5 = ready;
        if ( ready >= 0 )
        {
          v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, (const WCHAR **)off_1803CCE90);
          ready = CSingleViewShellExperience::AddTestAumid(
                    (CToastCenterExperienceManager *)((char *)this + 104),
                    (HSTRING)v15[1].Reserved.Reserved1);
          v5 = ready;
          if ( ready >= 0 )
          {
            Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 74, (__int64)a2);
            *((_BYTE *)this + 419) = IsShellLauncherEnabledForCurrentUser(v16);
            hstringHeader.Reserved.Reserved2[8] = 0;
            v5 = 0;
            goto LABEL_34;
          }
          v13 = 311LL;
        }
        else
        {
          v13 = 309LL;
        }
      }
      else
      {
        v13 = 307LL;
      }
    }
    else
    {
      v13 = 305LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)ready);
LABEL_34:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(v18);
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x118,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
