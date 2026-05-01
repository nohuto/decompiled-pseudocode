/*
 * XREFs of ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18016EB14
 * Callers:
 *     ??$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18016BC3C (--$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1803AE670 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1803AF554 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@PEAPEAUIExperienceManagerPriorityManipulator@3456@@Z @ 0x1803B0B54 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFact.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CJumpViewExperienceManager::RuntimeClassInitialize(
        CJumpViewExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  HSTRING Reserved1; // rdx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  int HostExperiencePriorityManipulator; // eax
  __int64 v12; // rdx
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v13; // r8
  ExperienceManagerUtils *v14; // [rsp+38h] [rbp-29h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-21h] BYREF
  HSTRING_HEADER v16; // [rsp+50h] [rbp-11h] BYREF
  HSTRING v17; // [rsp+68h] [rbp+7h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING v19; // [rsp+88h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v15[1] = -2LL;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.JumpView",
    0x2Au,
    0x29u);
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v16,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CJumpViewExperienceManager *)((char *)this + 152),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v17,
         v19);
  if ( v4 < 0 )
  {
    v5 = 188LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                         &v16,
                         (const WCHAR **)&off_180400130)[1].Reserved.Reserved1;
  v4 = CSingleViewShellExperience::AddTestAumid((CJumpViewExperienceManager *)((char *)this + 152), Reserved1);
  if ( v4 < 0 )
  {
    v5 = 189LL;
    goto LABEL_3;
  }
  *((_DWORD *)this + 53) = *((_DWORD *)this + 122);
  v15[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &IID_IActiveZBandNotificationForMonitorService,
         &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
         v15);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v15[0] + 24LL))(
           v15[0],
           -(__int64)(this != 0LL) & ((unsigned __int64)this + 32),
           (char *)this + 400);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 194LL;
      goto LABEL_22;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 46);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           (char *)this + 368);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 196LL;
      goto LABEL_22;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
    v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 46))(
           *((_QWORD *)this + 46),
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           (char *)this + 376);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 197LL;
      goto LABEL_22;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 47) + 24LL))(
           *((_QWORD *)this + 47),
           -(__int64)(this != 0LL) & ((unsigned __int64)this + 16),
           (char *)this + 392);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 198LL;
      goto LABEL_22;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 48);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IImmersiveWindowMessageService,
           &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
           (char *)this + 384);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 200LL;
      goto LABEL_22;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(**((_QWORD **)this + 48) + 24LL))(
           *((_QWORD *)this + 48),
           0LL,
           ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
           (char *)this + 396);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 201LL;
      goto LABEL_22;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IRealmActivationHistory,
           &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
           (char *)this + 360);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 203LL;
      goto LABEL_22;
    }
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    HostExperiencePriorityManipulator = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, ExperienceManagerUtils **))a2->lpVtbl->QueryService)(
                                          a2,
                                          &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                                          &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                                          &v14);
    v9 = HostExperiencePriorityManipulator;
    if ( HostExperiencePriorityManipulator >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
      HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                            v14,
                                            (CJumpViewExperienceManager *)((char *)this + 144),
                                            v13);
      v9 = HostExperiencePriorityManipulator;
      if ( HostExperiencePriorityManipulator >= 0 )
      {
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 44, (__int64)a2);
        v9 = 0;
        goto LABEL_29;
      }
      v12 = 208LL;
    }
    else
    {
      v12 = 206LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)HostExperiencePriorityManipulator);
LABEL_29:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    goto LABEL_30;
  }
  v10 = 193LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  return v9;
}
