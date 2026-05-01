/*
 * XREFs of ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180181A90
 * Callers:
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x180181D24 (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1803AE670 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1803AF554 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CScreenClippingExperienceManager::RegisterForViewExperience(struct IServiceProvider **this)
{
  CSingleViewShellExperience *v2; // rdi
  int v3; // ebx
  __int64 v4; // rdx
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-50h] BYREF
  HSTRING v7; // [rsp+50h] [rbp-38h]
  HSTRING_HEADER v8; // [rsp+58h] [rbp-30h] BYREF
  HSTRING v9; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v8,
    L"Windows.Internal.ShellExperience.ScreenClipping",
    0x30u,
    0x2Fu);
  v7 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v2 = (CSingleViewShellExperience *)(this + 11);
  v3 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CSingleViewShellExperience *)(this + 11),
         (struct IWeakReferenceSource *)((unsigned __int64)(this + 1) & -(__int64)(this != 0LL)),
         this[38],
         v7,
         v9);
  if ( v3 < 0 )
  {
    v4 = 1003LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v7 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ScreenClippingExperienceHostVS_ccv6fwk6gx0xp!App",
    0x31u,
    0x30u);
  v3 = CSingleViewShellExperience::AddTestAumid(v2, v7);
  if ( v3 < 0 )
  {
    v4 = 1005LL;
    goto LABEL_3;
  }
  return 0LL;
}
