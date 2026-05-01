/*
 * XREFs of ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18019DA2C
 * Callers:
 *     ??$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18019A61C (--$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180410924 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180411878 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@PEAPEAUIExperienceManagerPriorityManipulator@3456@@Z @ 0x180412FD4 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFact.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CJumpViewExperienceManager::RuntimeClassInitialize(
        CJumpViewExperienceManager *this,
        struct IServiceProvider *a2)
{
  CSingleViewShellExperience *v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  HSTRING Reserved1; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v15)(_QWORD, GUID *, char *); // rdi
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int HostExperiencePriorityManipulator; // eax
  __int64 v20; // rdx
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v21; // r8
  ExperienceManagerUtils *v22; // [rsp+38h] [rbp-29h] BYREF
  __int64 v23[2]; // [rsp+40h] [rbp-21h] BYREF
  HSTRING_HEADER v24; // [rsp+50h] [rbp-11h] BYREF
  HSTRING v25; // [rsp+68h] [rbp+7h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING v27; // [rsp+88h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v23[1] = -2LL;
  v4 = (CJumpViewExperienceManager *)((char *)this + 152);
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.JumpView",
    0x2Au,
    0x29u);
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v24,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v5 = CSingleViewShellExperience::RuntimeClassInitialize(
         v4,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v25,
         v27);
  if ( v5 < 0 )
  {
    v6 = 199LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, (const WCHAR **)off_180467988)[1].Reserved.Reserved1;
  v5 = CSingleViewShellExperience::AddTestAumid(v4, Reserved1);
  if ( v5 < 0 )
  {
    v6 = 200LL;
    goto LABEL_3;
  }
  *((_DWORD *)this + 53) = *((_DWORD *)this + 122);
  v23[0] = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
          a2,
          &IID_IActiveZBandNotificationForMonitorService,
          &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
          v23);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v23[0] + 24LL))(
            v23[0],
            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
            (char *)this + 400);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 205LL;
      goto LABEL_22;
    }
    v13 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 46);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v13)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            (char *)this + 368);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 207LL;
      goto LABEL_22;
    }
    v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 46);
    v15 = **v14;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
    v10 = v15(v14, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, (char *)this + 376);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 208LL;
      goto LABEL_22;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 47) + 24LL))(
            *((_QWORD *)this + 47),
            ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
            (char *)this + 392);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 209LL;
      goto LABEL_22;
    }
    v16 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 48);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
            a2,
            &IID_IImmersiveWindowMessageService,
            &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
            (char *)this + 384);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 211LL;
      goto LABEL_22;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(**((_QWORD **)this + 48) + 24LL))(
            *((_QWORD *)this + 48),
            0LL,
            ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
            (char *)this + 396);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 212LL;
      goto LABEL_22;
    }
    v17 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v17)(
            a2,
            &IID_IRealmActivationHistory,
            &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
            (char *)this + 360);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 214LL;
      goto LABEL_22;
    }
    v22 = 0LL;
    v18 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    HostExperiencePriorityManipulator = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, ExperienceManagerUtils **))v18)(
                                          a2,
                                          &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                                          &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                                          &v22);
    v11 = HostExperiencePriorityManipulator;
    if ( HostExperiencePriorityManipulator >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
      HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                            v22,
                                            (CJumpViewExperienceManager *)((char *)this + 144),
                                            v21);
      v11 = HostExperiencePriorityManipulator;
      if ( HostExperiencePriorityManipulator >= 0 )
      {
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 44, (__int64)a2);
        v11 = 0;
        goto LABEL_29;
      }
      v20 = 219LL;
    }
    else
    {
      v20 = 217LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)HostExperiencePriorityManipulator);
LABEL_29:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    goto LABEL_30;
  }
  v12 = 204LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
  return v11;
}
