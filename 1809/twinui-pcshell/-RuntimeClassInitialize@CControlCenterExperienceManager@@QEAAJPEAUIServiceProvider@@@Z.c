/*
 * XREFs of ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18014E87C
 * Callers:
 *     ??$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18014C924 (--$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x18014D040 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x18014ECD4 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1803AE670 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1803AF554 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1803B0AA4 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CControlCenterExperienceManager::RuntimeClassInitialize(
        CControlCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // r15
  int ready; // eax
  __int64 v8; // rdx
  _QWORD *v9; // r14
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v10; // r8
  HSTRING_HEADER *v11; // rax
  HSTRING_HEADER v13; // [rsp+38h] [rbp-70h] BYREF
  HSTRING v14; // [rsp+50h] [rbp-58h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-50h] BYREF
  HSTRING v16; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v14 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v13,
    L"Windows.Internal.ShellExperience.ControlCenter",
    0x2Fu,
    0x2Eu);
  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CControlCenterExperienceManager *)((char *)this + 104),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v16,
         v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB2,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v13.Reserved.Reserved1 = this;
  v6 = 1;
  v13.Reserved.Reserved2[8] = 1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 51);
  ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IImmersiveSessionIdleDetector,
            &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
            (char *)this + 408);
  v5 = ready;
  if ( ready < 0 )
  {
    v8 = 185LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)ready);
    goto LABEL_25;
  }
  ready = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 51) + 32LL))(
            *((_QWORD *)this + 51),
            ((unsigned __int64)this + 40) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
            (char *)this + 416);
  v5 = ready;
  if ( ready < 0 )
  {
    v8 = 186LL;
    goto LABEL_23;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 56);
  ready = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            (char *)this + 448);
  v5 = ready;
  if ( ready < 0 )
  {
    v8 = 188LL;
    goto LABEL_23;
  }
  ready = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 56) + 24LL))(
            *((_QWORD *)this + 56),
            ((unsigned __int64)this + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
            (char *)this + 432);
  v5 = ready;
  if ( ready < 0 )
  {
    v8 = 189LL;
    goto LABEL_23;
  }
  v9 = (_QWORD *)((char *)this + 440);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 55);
  ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IImmersiveWindowMessageService,
            &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
            (char *)this + 440);
  v5 = ready;
  if ( ready < 0 )
  {
    v8 = 193LL;
    goto LABEL_23;
  }
  ready = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v9 + 24LL))(
            *v9,
            0LL,
            ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
            (char *)this + 424);
  v5 = ready;
  if ( ready < 0 )
  {
    v8 = 195LL;
    goto LABEL_23;
  }
  ready = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v9 + 24LL))(
            *v9,
            26LL,
            ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
            (char *)this + 428);
  v5 = ready;
  if ( ready < 0 )
  {
    v8 = 196LL;
    goto LABEL_23;
  }
  ready = CControlCenterExperienceManager::SubscribeToShellReadyWnf(this);
  v5 = ready;
  if ( ready < 0 )
  {
    v8 = 198LL;
    goto LABEL_23;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  ready = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
            (ExperienceManagerUtils *)a2,
            (struct IServiceProvider *)this + 12,
            v10);
  v5 = ready;
  if ( ready < 0 )
  {
    v8 = 199LL;
    goto LABEL_23;
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1803FFFC8);
  ready = CSingleViewShellExperience::AddTestAumid(
            (CControlCenterExperienceManager *)((char *)this + 104),
            (HSTRING)v11[1].Reserved.Reserved1);
  v5 = ready;
  if ( ready < 0 )
  {
    v8 = 200LL;
    goto LABEL_23;
  }
  v6 = 0;
  v5 = 0;
LABEL_25:
  if ( v6 )
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
  return v5;
}
