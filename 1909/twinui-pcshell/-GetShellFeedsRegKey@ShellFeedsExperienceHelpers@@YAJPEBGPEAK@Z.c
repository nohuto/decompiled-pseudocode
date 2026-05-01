/*
 * XREFs of ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800C76A0
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800C5FB4 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617675@@@wil@@SA_NXZ @ 0x1800D2FAC (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErr.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180126A28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x180126D20 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801281F0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsExperienceHelpers::GetShellFeedsRegKey(
        ShellFeedsExperienceHelpers *this,
        BYTE *a2,
        unsigned int *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  HKEY *v6; // rax
  LSTATUS v7; // eax
  unsigned int v8; // ebx
  bool v9; // cc
  HKEY *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int phkResult; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD cbData; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+54h] [rbp+Ch]
  HKEY hKey; // [rsp+58h] [rbp+10h] BYREF

  v17 = HIDWORD(this);
  *(_DWORD *)a2 = 0;
  hKey = 0LL;
  cbData = 4;
  if ( !(unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617675>::__private_IsEnabled(
                           this,
                           a2,
                           a3) )
  {
    v10 = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::operator&(
                    &hKey,
                    v4,
                    v5);
    v11 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds", 0, 0x20019u, v10);
    if ( v11 )
    {
      v12 = 155LL;
    }
    else
    {
      v11 = RegQueryValueExW(hKey, L"CTACheck", 0LL, 0LL, a2, &cbData);
      if ( !v11 )
      {
LABEL_11:
        v8 = 0;
        goto LABEL_12;
      }
      v12 = 164LL;
    }
    v8 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v12,
           (unsigned int)"internal\\shellcommonshell\\inc\\shellfeeds\\shellfeedsexperiencehelpers.h",
           (const char *)v11,
           phkResult);
    goto LABEL_12;
  }
  v6 = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::operator&(
                 &hKey,
                 v4,
                 v5);
  v7 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds", 0, 0x20019u, v6);
  v8 = v7;
  v9 = v7 <= 0;
  if ( !v7 )
  {
    v7 = RegQueryValueExW(hKey, L"CTACheck", 0LL, 0LL, a2, &cbData);
    v8 = v7;
    v9 = v7 <= 0;
    if ( !v7 )
      goto LABEL_11;
  }
  if ( !v9 )
    v8 = (unsigned __int16)v7 | 0x80070000;
LABEL_12:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
  return v8;
}
