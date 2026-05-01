/*
 * XREFs of ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801A85B0
 * Callers:
 *     ??$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801A334C (--$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@De.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18019520C (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@Z @ 0x1801A36C4 (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastC.c)
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x1801A46B0 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801AC57C (-SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18042FF64 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180430EE8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1804325A4 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CToastCenterExperienceManager::RuntimeClassInitialize(
        CToastCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // r12
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v8; // eax
  __int64 v9; // rdx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, char *); // rsi
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v21; // rdi
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int ready; // eax
  __int64 v24; // rdx
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v25; // r8
  HSTRING_HEADER *v26; // rax
  __int64 v27; // rcx
  __int64 v29; // [rsp+38h] [rbp-39h] BYREF
  __int64 v30[2]; // [rsp+40h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-21h] BYREF
  HSTRING v32; // [rsp+68h] [rbp-9h]
  HSTRING_HEADER v33; // [rsp+70h] [rbp-1h] BYREF
  HSTRING v34; // [rsp+88h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v30[1] = -2LL;
  v32 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ToastCenter",
    0x2Du,
    0x2Cu);
  v34 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v33,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CToastCenterExperienceManager *)((char *)this + 104),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v34,
         v32);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x119,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  hstringHeader.Reserved.Reserved1 = this;
  v6 = 1;
  hstringHeader.Reserved.Reserved2[8] = 1;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 53);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveSessionIdleDetector,
         &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
         (char *)this + 424);
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = 288LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_41;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 53) + 32LL))(
         *((_QWORD *)this + 53),
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
         (char *)this + 432);
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = 289LL;
    goto LABEL_17;
  }
  v10 = a2->lpVtbl->QueryService;
  v11 = (__int64 *)((char *)this + 440);
  v12 = *((_QWORD *)this + 55);
  if ( v12 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v10)(
         a2,
         &SID_InputHostLayout,
         &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
         (char *)this + 440);
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = 291LL;
    goto LABEL_17;
  }
  v8 = SmartCookie::Register<IInputHostLayout,long (IInputHostLayout::*)(IInputHostLayoutChanges *,unsigned long *),long (IInputHostLayout::*)(unsigned long),CToastCenterExperienceManager *>(
         (__int64)this + 456,
         *v11,
         v13);
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = 293LL;
    goto LABEL_17;
  }
  v14 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 77);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v14)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         (char *)this + 616);
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = 295LL;
    goto LABEL_17;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 77) + 24LL))(
         *((_QWORD *)this + 77),
         ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
         (char *)this + 592);
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = 296LL;
    goto LABEL_17;
  }
  v29 = 0LL;
  v15 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v15)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          &v29);
  v5 = v16;
  if ( v16 >= 0 )
  {
    v18 = v29;
    v19 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v29 + 64LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 78);
    v16 = v19(v18, (char *)this + 624);
    v5 = v16;
    if ( v16 < 0 )
    {
      v17 = 302LL;
      goto LABEL_28;
    }
    v20 = a2->lpVtbl->QueryService;
    v21 = (_QWORD *)((char *)this + 608);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 76);
    v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v20)(
            a2,
            &IID_IImmersiveWindowMessageService,
            &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
            (char *)this + 608);
    v5 = v16;
    if ( v16 < 0 )
    {
      v17 = 306LL;
      goto LABEL_28;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v21 + 24LL))(
            *v21,
            0LL,
            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
            (char *)this + 584);
    v5 = v16;
    if ( v16 < 0 )
    {
      v17 = 308LL;
      goto LABEL_28;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v21 + 24LL))(
            *v21,
            26LL,
            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
            (char *)this + 588);
    v5 = v16;
    if ( v16 < 0 )
    {
      v17 = 309LL;
      goto LABEL_28;
    }
    v30[0] = 0LL;
    v22 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 80);
    ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v22)(
              a2,
              &IID_IRealmActivationHistory,
              &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
              (char *)this + 640);
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
                  v25);
        v5 = ready;
        if ( ready >= 0 )
        {
          v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, (const WCHAR **)off_180487AA8);
          ready = CSingleViewShellExperience::AddTestAumid(
                    (CToastCenterExperienceManager *)((char *)this + 104),
                    (HSTRING)v26[1].Reserved.Reserved1);
          v5 = ready;
          if ( ready >= 0 )
          {
            Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 75, (__int64)a2);
            *((_BYTE *)this + 419) = IsShellLauncherEnabledForCurrentUser(v27);
            v6 = 0;
            v5 = 0;
            goto LABEL_39;
          }
          v24 = 318LL;
        }
        else
        {
          v24 = 316LL;
        }
      }
      else
      {
        v24 = 314LL;
      }
    }
    else
    {
      v24 = 312LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)ready);
LABEL_39:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v30);
    goto LABEL_40;
  }
  v17 = 301LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v16);
LABEL_40:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
LABEL_41:
  if ( v6 )
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
  return v5;
}
