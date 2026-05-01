/*
 * XREFs of ?RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801C22F0
 * Callers:
 *     ??$MakeAndInitialize@VCQuickConnectExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801BECC8 (--$MakeAndInitialize@VCQuickConnectExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18005066C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ExperienceManager_StartedLifeTime@QuickConnectTelemetry@@SAXXZ @ 0x1801C0A18 (-ExperienceManager_StartedLifeTime@QuickConnectTelemetry@@SAXXZ.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18042FF64 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180430EE8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQuickConnectExperienceManager::RuntimeClassInitialize(
        CQuickConnectExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-60h] BYREF
  HSTRING v10; // [rsp+50h] [rbp-48h]
  HSTRING_HEADER v11; // [rsp+58h] [rbp-40h] BYREF
  HSTRING v12; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v11,
    L"Windows.Internal.ShellExperience.QuickConnect",
    0x2Eu,
    0x2Du);
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CQuickConnectExperienceManager *)((char *)this + 72),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v10,
         v12);
  if ( v4 < 0 )
  {
    v5 = 536LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  *((_DWORD *)this + 33) = 13;
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 7, (__int64)this);
  QuickConnectTelemetry::ExperienceManager_StartedLifeTime(v6);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 49);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IRealmActivationHistory,
         &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
         (char *)this + 392);
  if ( v4 < 0 )
  {
    v5 = 543LL;
    goto LABEL_7;
  }
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ShellExperienceHostVS_ccv6fwk6gx0xp!App",
    0x28u,
    0x27u);
  v4 = CSingleViewShellExperience::AddTestAumid((CQuickConnectExperienceManager *)((char *)this + 72), v10);
  if ( v4 < 0 )
  {
    v5 = 547LL;
    goto LABEL_7;
  }
  return (unsigned int)v4;
}
