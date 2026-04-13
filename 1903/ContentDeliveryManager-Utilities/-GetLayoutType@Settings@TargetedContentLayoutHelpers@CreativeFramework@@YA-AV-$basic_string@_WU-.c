/*
 * XREFs of ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800A1654
 * Callers:
 *     ?NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A1CC4 (-NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedC.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180012FD4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067CBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x18009FD04 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z.c)
 *     ?GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z @ 0x1800A11A4 (-GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800A13B8 (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
CreativeFramework::Policy *__fastcall CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
        CreativeFramework::Policy *a1,
        HSTRING string,
        LPCWSTR lpValue)
{
  char ShouldUseInternal; // bl
  const WCHAR *StringRawBuffer; // rcx
  const wchar_t *v8; // rdx
  LPCWCH AdUnitIdFromSubscriptionId; // rax
  int v10; // eax
  const wchar_t *v11; // r8
  wil::details::in1diag3 *v12; // rcx
  void *v13; // rdi
  unsigned __int64 v14; // rbx
  int StringSetting; // eax
  void *v16; // r14
  char *v17; // rdx
  LPVOID pv; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  __int64 v21; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  const WCHAR *v23; // [rsp+78h] [rbp+38h]

  ShouldUseInternal = CreativeFramework::Policy::ShouldUseInternal(a1);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  LOBYTE(v8) = ShouldUseInternal;
  AdUnitIdFromSubscriptionId = CreativeFramework::TargetedContent::GetAdUnitIdFromSubscriptionId(StringRawBuffer, v8);
  pv = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&pv,
          L"%s\\%s",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
          AdUnitIdFromSubscriptionId,
          -2LL);
  v12 = retaddr;
  if ( v10 < 0 )
  {
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x36,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstoreshared.h",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x1800A17ABLL);
  }
  v13 = pv;
  v23 = (const WCHAR *)pv;
  pv = 0LL;
  v14 = -1LL;
  v20 = -1LL;
  v21 = -1LL;
  StringSetting = CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(v23, lpValue, v11, &pv);
  if ( StringSetting < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)StringSetting);
    goto LABEL_14;
  }
  v16 = pv;
  v17 = (char *)&Src;
  if ( pv )
    v17 = (char *)pv;
  *((_QWORD *)a1 + 3) = 7LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_WORD *)a1 = 0;
  if ( *(_WORD *)v17 )
  {
    do
      ++v14;
    while ( *(_WORD *)&v17[2 * v14] );
  }
  else
  {
    v14 = 0LL;
  }
  std::wstring::assign(a1, v17, v14);
  if ( v16 )
    CoTaskMemFree(v16);
  if ( v13 )
    CoTaskMemFree(v13);
  return a1;
}
