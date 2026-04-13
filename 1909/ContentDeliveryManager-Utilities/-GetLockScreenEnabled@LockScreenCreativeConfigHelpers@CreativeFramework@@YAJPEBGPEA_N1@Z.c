/*
 * XREFs of ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x1800283A4
 * Callers:
 *     ?IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z @ 0x18002CC90 (-IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x18000A6F0 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800131A4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33207241@@@wil@@SA_NXZ @ 0x18001369C (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33207241@@@.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x180026898 (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x1800280FC (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x1800281DC (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180033ABC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@CA.c)
 */

__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::GetLockScreenEnabled(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 *a2,
        bool *a3,
        bool *a4)
{
  int SettingValue; // eax
  DWORD v7; // esi
  unsigned __int16 **v8; // rdx
  CreativeFramework::Policy *v9; // rcx
  DWORD v10; // eax
  bool v11; // al
  int CurrentUserSidString; // eax
  void *v13; // rbx
  signed int v14; // edi
  int v15; // eax
  LSTATUS v16; // eax
  signed int v17; // ecx
  int v18; // eax
  HKEY v19; // r13
  DWORD LastError; // edi
  void *v21; // r13
  LSTATUS v22; // eax
  __int64 v23; // rdx
  LSTATUS ValueW; // eax
  LSTATUS v25; // eax
  unsigned int *pvData; // [rsp+28h] [rbp-58h]
  HKEY hKey; // [rsp+40h] [rbp-40h] BYREF
  LPVOID v29; // [rsp+48h] [rbp-38h] BYREF
  LPCWSTR lpSubKey[3]; // [rsp+50h] [rbp-30h] BYREF
  LPVOID pv[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  CreativeFramework::LockScreenCreativeConfigHelpers *pdwValue; // [rsp+C0h] [rbp+40h] BYREF
  DWORD v34; // [rsp+C8h] [rbp+48h] BYREF
  __int16 v35; // [rsp+CCh] [rbp+4Ch]
  DWORD pcbData; // [rsp+D0h] [rbp+50h] BYREF
  DWORD v37; // [rsp+D8h] [rbp+58h] BYREF

  pdwValue = this;
  if ( a2 )
    *(_BYTE *)a2 = 0;
  if ( a3 )
    *a3 = 0;
  SettingValue = CreativeFramework::ContentDeliveryManagerSettings::GetSettingValue(
                   (CreativeFramework::ContentDeliveryManagerSettings *)0xFFFFFFFF80000002LL,
                   (const WCHAR *)&CreativeFramework::ContentDeliveryManagerDebugSettings::c_regKeyDebugSettings,
                   L"ContentDeliveryAllowedOverride",
                   (const unsigned __int16 *)a4,
                   &pdwValue,
                   pvData);
  if ( SettingValue >= 0 )
  {
    if ( (_DWORD)pdwValue )
    {
      v11 = (_DWORD)pdwValue == 1;
      if ( a2 )
        *(_BYTE *)a2 = v11;
      if ( a3 )
        *a3 = v11;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B1,
      (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
      (const char *)(unsigned int)SettingValue);
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetCachedFeatureEnabledState();
  LODWORD(pdwValue) = 4;
  v34 = 4;
  v7 = 1;
  BYTE4(pdwValue) = 3;
  v35 = WORD2(pdwValue);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetFeaturePropertyCache'::`2'::data,
    0xA836A7u,
    (const struct FEATURE_LOGGED_TRAITS *)&v34,
    1,
    3);
  if ( wil::Feature<__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33207241>::__private_IsEnabled() )
  {
    LODWORD(pdwValue) = 0;
    SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", (DWORD *)&pdwValue);
    v10 = (unsigned int)pdwValue;
  }
  else
  {
    if ( !IsActiveSessionCountLimited() )
      goto LABEL_20;
    v34 = 0;
    SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", &v34);
    v10 = v34;
  }
  if ( !v10 && !CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(v9) )
    return 0LL;
LABEL_20:
  v29 = 0LL;
  CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                           (CreativeFramework::LockScreenCreativeConfigHelpers *)&v29,
                           v8);
  v13 = v29;
  v14 = CurrentUserSidString;
  if ( CurrentUserSidString >= 0 )
  {
    memset(lpSubKey, 0, sizeof(lpSubKey));
    v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)lpSubKey,
            L"%s\\%s",
            v29,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager");
    v14 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12D,
        (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
        (const char *)(unsigned int)v15);
LABEL_53:
      if ( lpSubKey[0] )
        CoTaskMemFree((LPVOID)lpSubKey[0]);
      goto LABEL_55;
    }
    hKey = 0LL;
    v16 = RegOpenKeyExW(HKEY_USERS, lpSubKey[0], 0, 9u, &hKey);
    v17 = (unsigned __int16)v16 | 0x80070000;
    if ( v16 <= 0 )
      v17 = v16;
    if ( v17 < 0 )
    {
      memset(pv, 0, sizeof(pv));
      v7 = 0;
      v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
              (__int64)pv,
              L"%s\\%s",
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
              v13);
      v14 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13C,
          (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
          (const char *)(unsigned int)v18);
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        goto LABEL_51;
      }
      v19 = hKey;
      if ( hKey )
      {
        LastError = GetLastError();
        RegCloseKey(v19);
        SetLastError(LastError);
      }
      v21 = pv[0];
      hKey = 0LL;
      v22 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, (LPCWSTR)pv[0], 0, 9u, &hKey);
      v14 = (unsigned __int16)v22 | 0x80070000;
      if ( v22 <= 0 )
        v14 = v22;
      if ( v21 )
        CoTaskMemFree(v21);
      if ( v14 < 0 )
      {
        v23 = 319LL;
LABEL_50:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
          (const char *)(unsigned int)v14);
LABEL_51:
        if ( hKey )
          RegCloseKey(hKey);
        goto LABEL_53;
      }
    }
    pcbData = 4;
    ValueW = RegGetValueW(hKey, 0LL, L"RotatingLockScreenEnabled", 0x10u, 0LL, &v34, &pcbData);
    v14 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v14 = ValueW;
    if ( v14 == -2147024894 )
    {
      v34 = v7;
    }
    else if ( v14 < 0 )
    {
      v23 = 331LL;
      goto LABEL_50;
    }
    v37 = 4;
    v25 = RegGetValueW(hKey, 0LL, L"RotatingLockScreenOverlayEnabled", 0x10u, 0LL, &pdwValue, &v37);
    v14 = (unsigned __int16)v25 | 0x80070000;
    if ( v25 <= 0 )
      v14 = v25;
    if ( v14 == -2147024894 )
    {
      LODWORD(pdwValue) = v7;
    }
    else
    {
      if ( v14 < 0 )
      {
        v23 = 344LL;
        goto LABEL_50;
      }
      v7 = (unsigned int)pdwValue;
    }
    if ( a2 )
      *(_BYTE *)a2 = v34 != 0;
    if ( a3 )
      *a3 = v7 != 0;
    if ( hKey )
      RegCloseKey(hKey);
    if ( lpSubKey[0] )
      CoTaskMemFree((LPVOID)lpSubKey[0]);
    if ( v13 )
      CoTaskMemFree(v13);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x129,
    (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
    (const char *)(unsigned int)CurrentUserSidString);
LABEL_55:
  if ( v13 )
    CoTaskMemFree(v13);
  return (unsigned int)v14;
}
