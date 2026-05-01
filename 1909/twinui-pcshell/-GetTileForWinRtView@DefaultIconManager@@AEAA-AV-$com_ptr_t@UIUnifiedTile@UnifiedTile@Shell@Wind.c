/*
 * XREFs of ?GetTileForWinRtView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIWinRTApplicationView@@@Z @ 0x180271E30
 * Callers:
 *     ?GetIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802719E8 (-GetIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Inte.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180043688 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180054690 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIWinRTApplicationView@@@Z @ 0x18008F05C (--$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA-AV-$com_ptr_t@UIApplicati.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall DefaultIconManager::GetTileForWinRtView(__int64 a1, _QWORD *a2, const WCHAR *a3)
{
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, LPVOID *); // rdi
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, __int64 *); // r15
  HSTRING_HEADER *v10; // rdi
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-58h] BYREF
  int v18; // [rsp+30h] [rbp-50h]
  const WCHAR *v19; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20[3]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER v21; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v20[1] = -2LL;
  v20[2] = (__int64)a2;
  v19 = a3;
  v18 = 0;
  pv = 0LL;
  wil::com_query<IApplicationView,IWinRTApplicationView * &>((__int64)v20, &v19);
  v5 = v20[0];
  v6 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v20[0] + 136LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v7 = v6(v5, &pv);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      481LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v16 = 0LL;
  v8 = *(_QWORD *)(a1 + 104);
  v9 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v8 + 48LL);
  v19 = (const WCHAR *)pv;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, &v19);
  v16 = 0LL;
  v11 = v9(v8, v10[1].Reserved.Reserved1, &v16);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      484LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v11);
  *a2 = 0LL;
  v18 = 1;
  v12 = *(__int64 **)(a1 + 96);
  v13 = *v12;
  *a2 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD *))(v13 + 72))(v12, v16, a2);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      487LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v14);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v20);
  if ( pv )
    CoTaskMemFree(pv);
  return a2;
}
