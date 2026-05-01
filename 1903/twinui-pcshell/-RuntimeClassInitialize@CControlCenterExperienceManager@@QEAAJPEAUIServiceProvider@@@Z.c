/*
 * XREFs of ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18017B34C
 * Callers:
 *     ??$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180179388 (--$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x180179AC0 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x18017B7C4 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180410924 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180411878 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x180412F24 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CControlCenterExperienceManager::RuntimeClassInitialize(
        CControlCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // r15
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int ready; // eax
  __int64 v9; // rdx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v12; // r14
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v13; // r8
  HSTRING_HEADER *v14; // rax
  HSTRING_HEADER v16; // [rsp+38h] [rbp-70h] BYREF
  HSTRING v17; // [rsp+50h] [rbp-58h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-50h] BYREF
  HSTRING v19; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v16,
    L"Windows.Internal.ShellExperience.ControlCenter",
    0x2Fu,
    0x2Eu);
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CControlCenterExperienceManager *)((char *)this + 104),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v19,
         v17);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v16.Reserved.Reserved1 = this;
  v6 = 1;
  v16.Reserved.Reserved2[8] = 1;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 51);
  ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
            a2,
            &IID_IImmersiveSessionIdleDetector,
            &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
            (char *)this + 408);
  v5 = ready;
  if ( ready < 0 )
  {
    v9 = 186LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)ready);
    goto LABEL_25;
  }
  ready = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 51) + 32LL))(
            *((_QWORD *)this + 51),
            ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
            (char *)this + 416);
  v5 = ready;
  if ( ready < 0 )
  {
    v9 = 187LL;
    goto LABEL_23;
  }
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 56);
  ready = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v10)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            (char *)this + 448);
  v5 = ready;
  if ( ready < 0 )
  {
    v9 = 189LL;
    goto LABEL_23;
  }
  ready = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 56) + 24LL))(
            *((_QWORD *)this + 56),
            ((unsigned __int64)this + 56) & -(__int64)(this != 0LL),
            (char *)this + 432);
  v5 = ready;
  if ( ready < 0 )
  {
    v9 = 190LL;
    goto LABEL_23;
  }
  v11 = a2->lpVtbl->QueryService;
  v12 = (_QWORD *)((char *)this + 440);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 55);
  ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
            a2,
            &IID_IImmersiveWindowMessageService,
            &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
            (char *)this + 440);
  v5 = ready;
  if ( ready < 0 )
  {
    v9 = 194LL;
    goto LABEL_23;
  }
  ready = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v12 + 24LL))(
            *v12,
            0LL,
            ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
            (char *)this + 424);
  v5 = ready;
  if ( ready < 0 )
  {
    v9 = 196LL;
    goto LABEL_23;
  }
  ready = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v12 + 24LL))(
            *v12,
            26LL,
            ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
            (char *)this + 428);
  v5 = ready;
  if ( ready < 0 )
  {
    v9 = 197LL;
    goto LABEL_23;
  }
  ready = CControlCenterExperienceManager::SubscribeToShellReadyWnf(this);
  v5 = ready;
  if ( ready < 0 )
  {
    v9 = 199LL;
    goto LABEL_23;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  ready = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
            (ExperienceManagerUtils *)a2,
            (struct IServiceProvider *)this + 12,
            v13);
  v5 = ready;
  if ( ready < 0 )
  {
    v9 = 200LL;
    goto LABEL_23;
  }
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_1804677C0);
  ready = CSingleViewShellExperience::AddTestAumid(
            (CControlCenterExperienceManager *)((char *)this + 104),
            (HSTRING)v14[1].Reserved.Reserved1);
  v5 = ready;
  if ( ready < 0 )
  {
    v9 = 201LL;
    goto LABEL_23;
  }
  v6 = 0;
  v5 = 0;
LABEL_25:
  if ( v6 )
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
  return v5;
}
