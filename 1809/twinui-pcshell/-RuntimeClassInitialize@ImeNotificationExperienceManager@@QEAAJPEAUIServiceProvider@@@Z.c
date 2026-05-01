/*
 * XREFs of ?RuntimeClassInitialize@ImeNotificationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801569EC
 * Callers:
 *     ??$MakeAndInitialize@VImeNotificationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180156000 (--$MakeAndInitialize@VImeNotificationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18000E50C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1803AF554 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ImeNotificationExperienceManager::RuntimeClassInitialize(
        ImeNotificationExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HSTRING_HEADER v7; // [rsp+38h] [rbp-50h] BYREF
  HSTRING v8; // [rsp+50h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-30h] BYREF
  HSTRING v10; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v7,
    L"Windows.Internal.ShellExperience.ImeStatusNotification",
    0x37u,
    0x36u);
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (ImeNotificationExperienceManager *)((char *)this + 48),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v10,
         v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_DWORD *)this + 27) = 4;
    Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 30, (__int64)this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
