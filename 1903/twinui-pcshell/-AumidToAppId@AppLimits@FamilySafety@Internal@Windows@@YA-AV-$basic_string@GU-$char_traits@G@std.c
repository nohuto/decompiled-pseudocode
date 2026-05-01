/*
 * XREFs of ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800A7C98
 * Callers:
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x1800A8EB0 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x1800AF9C8 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800184A0 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PackageFamilyNameToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800A8408 (-PackageFamilyNameToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18010EA44 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::AumidToAppId(__int64 a1, const unsigned __int16 *a2)
{
  LPVOID *v4; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+50h] [rbp+18h] BYREF

  pv = 0LL;
  v4 = (LPVOID *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator&(&pv);
  v5 = ParseAppUserModelId(a2, v4, 0LL);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      23LL,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\appidhelpers.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  Windows::Internal::FamilySafety::AppLimits::PackageFamilyNameToAppId(a1, pv);
  if ( pv )
    CoTaskMemFree(pv);
  return a1;
}
