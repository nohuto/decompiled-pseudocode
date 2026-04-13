/*
 * XREFs of ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x180027ABC
 * Callers:
 *     ?IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z @ 0x18002BFD0 (-IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180012CA4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x180026040 (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x180027810 (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x1800278F0 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180032BD8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@CA.c)
 */

__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::GetLockScreenEnabled(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 *a2,
        bool *a3,
        bool *a4)
{
  int SettingValue; // eax
  unsigned __int16 **v7; // rdx
  CreativeFramework::Policy *v8; // rcx
  int CurrentUserSidString; // eax
  void *v10; // rbx
  signed int v11; // edi
  bool v12; // al
  int v13; // eax
  int v14; // r14d
  LSTATUS v15; // eax
  signed int v16; // ecx
  int v17; // eax
  HKEY v18; // r13
  DWORD LastError; // edi
  void *v20; // r13
  LSTATUS v21; // eax
  __int64 v22; // rdx
  LSTATUS ValueW; // eax
  LSTATUS v24; // eax
  unsigned int *pvData; // [rsp+28h] [rbp-58h]
  HKEY hKey; // [rsp+40h] [rbp-40h] BYREF
  LPVOID v28; // [rsp+48h] [rbp-38h] BYREF
  LPCWSTR lpSubKey[3]; // [rsp+50h] [rbp-30h] BYREF
  LPVOID pv[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  CreativeFramework::LockScreenCreativeConfigHelpers *pdwValue; // [rsp+C0h] [rbp+40h] BYREF
  int v33; // [rsp+C8h] [rbp+48h] BYREF
  __int16 v34; // [rsp+CCh] [rbp+4Ch]
  DWORD pcbData; // [rsp+D0h] [rbp+50h] BYREF
  DWORD v36; // [rsp+D8h] [rbp+58h] BYREF

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
      v12 = (_DWORD)pdwValue == 1;
      if ( a2 )
        *(_BYTE *)a2 = v12;
      if ( a3 )
        *a3 = v12;
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
  v33 = 4;
  BYTE4(pdwValue) = 3;
  v34 = WORD2(pdwValue);
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetFeaturePropertyCache'::`2'::data,
    0xA836A7u,
    (const struct FEATURE_LOGGED_TRAITS *)&v33,
    3);
  LODWORD(pdwValue) = 0;
  SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", (DWORD *)&pdwValue);
  if ( !(_DWORD)pdwValue && !CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(v8) )
    return 0LL;
  v28 = 0LL;
  CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                           (CreativeFramework::LockScreenCreativeConfigHelpers *)&v28,
                           v7);
  v10 = v28;
  v11 = CurrentUserSidString;
  if ( CurrentUserSidString >= 0 )
  {
    memset(lpSubKey, 0, sizeof(lpSubKey));
    v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)lpSubKey,
            L"%s\\%s",
            v28,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager");
    v11 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12D,
        (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
        (const char *)(unsigned int)v13);
LABEL_49:
      if ( lpSubKey[0] )
        CoTaskMemFree((LPVOID)lpSubKey[0]);
      goto LABEL_51;
    }
    v14 = 1;
    hKey = 0LL;
    v15 = RegOpenKeyExW(HKEY_USERS, lpSubKey[0], 0, 9u, &hKey);
    v16 = (unsigned __int16)v15 | 0x80070000;
    if ( v15 <= 0 )
      v16 = v15;
    if ( v16 < 0 )
    {
      memset(pv, 0, sizeof(pv));
      v14 = 0;
      v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
              (__int64)pv,
              L"%s\\%s",
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
              v10);
      v11 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13C,
          (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
          (const char *)(unsigned int)v17);
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        goto LABEL_47;
      }
      v18 = hKey;
      if ( hKey )
      {
        LastError = GetLastError();
        RegCloseKey(v18);
        SetLastError(LastError);
      }
      v20 = pv[0];
      hKey = 0LL;
      v21 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, (LPCWSTR)pv[0], 0, 9u, &hKey);
      v11 = (unsigned __int16)v21 | 0x80070000;
      if ( v21 <= 0 )
        v11 = v21;
      if ( v20 )
        CoTaskMemFree(v20);
      if ( v11 < 0 )
      {
        v22 = 319LL;
LABEL_46:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
          (const char *)(unsigned int)v11);
LABEL_47:
        if ( hKey )
          RegCloseKey(hKey);
        goto LABEL_49;
      }
    }
    pcbData = 4;
    ValueW = RegGetValueW(hKey, 0LL, L"RotatingLockScreenEnabled", 0x10u, 0LL, &v33, &pcbData);
    v11 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v11 = ValueW;
    if ( v11 == -2147024894 )
    {
      v33 = v14;
    }
    else if ( v11 < 0 )
    {
      v22 = 331LL;
      goto LABEL_46;
    }
    v36 = 4;
    v24 = RegGetValueW(hKey, 0LL, L"RotatingLockScreenOverlayEnabled", 0x10u, 0LL, &pdwValue, &v36);
    v11 = (unsigned __int16)v24 | 0x80070000;
    if ( v24 <= 0 )
      v11 = v24;
    if ( v11 == -2147024894 )
    {
      LODWORD(pdwValue) = v14;
    }
    else
    {
      if ( v11 < 0 )
      {
        v22 = 344LL;
        goto LABEL_46;
      }
      v14 = (int)pdwValue;
    }
    if ( a2 )
      *(_BYTE *)a2 = v33 != 0;
    if ( a3 )
      *a3 = v14 != 0;
    if ( hKey )
      RegCloseKey(hKey);
    if ( lpSubKey[0] )
      CoTaskMemFree((LPVOID)lpSubKey[0]);
    if ( v10 )
      CoTaskMemFree(v10);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x129,
    (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
    (const char *)(unsigned int)CurrentUserSidString);
LABEL_51:
  if ( v10 )
    CoTaskMemFree(v10);
  return (unsigned int)v11;
}
