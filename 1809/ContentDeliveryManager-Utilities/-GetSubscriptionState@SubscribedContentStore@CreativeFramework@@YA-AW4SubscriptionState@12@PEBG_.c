/*
 * XREFs of ?GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA?AW4SubscriptionState@12@PEBG_N@Z @ 0x18003D32C
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18003DD68 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180012CA4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x180026110 (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180041D24 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA.c)
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
  struct _FILETIME SystemTimeAsFileTime; // [rsp+20h] [rbp-50h] BYREF
  int v10; // [rsp+28h] [rbp-48h] BYREF
  __int16 dwHighDateTime; // [rsp+2Ch] [rbp-44h]
  int v12; // [rsp+30h] [rbp-40h]
  LPVOID v13; // [rsp+38h] [rbp-38h]
  LPVOID pv[6]; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  pv[3] = (LPVOID)-2LL;
  v12 = 0;
  v13 = 0LL;
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
      (void *)0x30,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstoreshared.h",
      (const char *)(unsigned int)v1);
    JUMPOUT(0x18003D495LL);
  }
  v3 = (WCHAR *)pv[0];
  v13 = pv[0];
  pv[4] = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCachedFeatureEnabledState(retaddr);
  SystemTimeAsFileTime.dwLowDateTime = 0;
  LOBYTE(SystemTimeAsFileTime.dwHighDateTime) = 3;
  v10 = 0;
  dwHighDateTime = SystemTimeAsFileTime.dwHighDateTime;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data,
    0x7EA375u,
    (const struct FEATURE_LOGGED_TRAITS *)&v10,
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
      (void *)0x90,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)FileTimeSetting);
    goto LABEL_9;
  }
  v6 = SystemTimeAsFileTime.dwLowDateTime
     + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32)
     + 2592000000000LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v7 = v6 > SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  if ( v3 )
    CoTaskMemFree(v3);
  return v7;
}
