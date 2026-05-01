/*
 * XREFs of ?RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180157BFC
 * Callers:
 *     ??$MakeAndInitialize@VCTaskContinuityActivitiesExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180156E80 (--$MakeAndInitialize@VCTaskContinuityActivitiesExperienceManager@@UIInspectable@@AEAPEAUIService.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18000E50C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1803AE670 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1803AF554 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::RuntimeClassInitialize(
        CTaskContinuityActivitiesExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  HSTRING Reserved1; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v10[2]; // [rsp+38h] [rbp-19h] BYREF
  HSTRING_HEADER v11; // [rsp+48h] [rbp-9h] BYREF
  HSTRING v12; // [rsp+60h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+17h] BYREF
  HSTRING v14; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v10[1] = -2LL;
  v14 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.TaskContinuityActivities",
    0x3Au,
    0x39u);
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v11,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CTaskContinuityActivitiesExperienceManager *)((char *)this + 72),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v12,
         v14);
  if ( v4 >= 0 )
  {
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                           &v11,
                           (const WCHAR **)&off_180400018)[1].Reserved.Reserved1;
    v4 = CSingleViewShellExperience::AddTestAumid(
           (CTaskContinuityActivitiesExperienceManager *)((char *)this + 72),
           Reserved1);
    if ( v4 < 0 )
    {
      v5 = 82LL;
      goto LABEL_3;
    }
    Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 8, (__int64)this);
    v10[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IActiveZBandNotificationForMonitorService,
           &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
           v10);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v10[0] + 24LL))(
             v10[0],
             -(__int64)(this != 0LL) & ((unsigned __int64)this + 24),
             (char *)this + 264);
      v4 = v7;
      if ( v7 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 34, (__int64)a2);
        v4 = 0;
        goto LABEL_12;
      }
      v8 = 89LL;
    }
    else
    {
      v8 = 88LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    return (unsigned int)v4;
  }
  v5 = 80LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
