/*
 * XREFs of ?GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA?AW4SubscriptionState@12@PEBG_N@Z @ 0x18003E4F8
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18003EF38 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800131A4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x180026968 (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180042F64 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA.c)
 */

// Hidden C++ exception states: #wind=5
_BOOL8 __fastcall CreativeFramework::SubscribedContentStore::GetSubscriptionState(__int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *v2; // rcx
  WCHAR *v3; // rdi
  const unsigned __int16 *v4; // r8
  int FileTimeSetting; // eax
  unsigned __int64 v6; // rbx
  BOOL v7; // ebx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp-50h] BYREF
  int v10; // [rsp+38h] [rbp-48h] BYREF
  __int16 dwHighDateTime; // [rsp+3Ch] [rbp-44h]
  LPVOID v12; // [rsp+40h] [rbp-40h]
  int v13; // [rsp+48h] [rbp-38h]
  LPVOID pv[6]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  pv[3] = (LPVOID)-2LL;
  v13 = 0;
  v12 = 0LL;
  memset(pv, 0, 24);
  v1 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)pv,
         L"%s\\%s",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
         a1);
  v2 = retaddr;
  if ( v1 < 0 )
  {
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v2,
      (void *)0x36,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstoreshared.h",
      (const char *)(unsigned int)v1);
    JUMPOUT(0x18003E66ALL);
  }
  v3 = (WCHAR *)pv[0];
  v12 = pv[0];
  pv[4] = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCachedFeatureEnabledState(retaddr);
  SystemTimeAsFileTime.dwLowDateTime = 0;
  LOBYTE(SystemTimeAsFileTime.dwHighDateTime) = 3;
  v10 = 0;
  dwHighDateTime = SystemTimeAsFileTime.dwHighDateTime;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data,
    0x7EA375u,
    (const struct FEATURE_LOGGED_TRAITS *)&v10,
    1,
    3);
  LOBYTE(v4) = 1;
  FileTimeSetting = CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(
                      v3,
                      L"LastAccessed",
                      v4,
                      &SystemTimeAsFileTime);
  if ( FileTimeSetting < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)FileTimeSetting);
    goto LABEL_9;
  }
  v6 = SystemTimeAsFileTime.dwLowDateTime
     + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32)
     + 2592000000000LL;
  v12 = (LPVOID)v6;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v7 = (unsigned int)v6 + ((unsigned __int64)HIDWORD(v12) << 32) > SystemTimeAsFileTime.dwLowDateTime
                                                                 + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  if ( v3 )
    CoTaskMemFree(v3);
  return v7;
}
