/*
 * XREFs of ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG@Z @ 0x18009A000
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x180098344 (-Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18042FF64 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseTrayFlyoutExperienceManager::RuntimeClassInitialize(
        CBaseTrayFlyoutExperienceManager *this,
        struct IServiceProvider *a2,
        const unsigned __int16 *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v8; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = CBaseTrayFlyoutExperienceManager::Initialize(
         this,
         a2,
         L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
         a3);
  if ( v4 < 0 )
  {
    v5 = 54LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v8 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ShellExperienceHostVS_ccv6fwk6gx0xp!App",
    0x28u,
    0x27u);
  v4 = CSingleViewShellExperience::AddTestAumid((CBaseTrayFlyoutExperienceManager *)((char *)this + 72), v8);
  if ( v4 < 0 )
  {
    v5 = 55LL;
    goto LABEL_5;
  }
  return (unsigned int)v4;
}
