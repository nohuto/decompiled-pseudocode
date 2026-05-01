/*
 * XREFs of ?GetTileForWinRtView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIWinRTApplicationView@@@Z @ 0x1801FF6AC
 * Callers:
 *     ?GetIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801FF230 (-GetIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Inte.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18005EDB8 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIWinRTApplicationView@@@Z @ 0x18008FB60 (--$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA-AV-$com_ptr_t@UIApplicati.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall DefaultIconManager::GetTileForWinRtView(__int64 a1, _QWORD *a2, const WCHAR *a3)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rbx
  HSTRING_HEADER *v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-58h] BYREF
  int v15; // [rsp+30h] [rbp-50h]
  const WCHAR *v16; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17[3]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER v18; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v17[1] = -2LL;
  v17[2] = (__int64)a2;
  v16 = a3;
  v15 = 0;
  pv = 0LL;
  wil::com_query<IApplicationView,IWinRTApplicationView * &>((__int64)v17, &v16);
  v5 = v17[0];
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v5 + 136LL))(v5, &pv);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      481LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v13 = 0LL;
  v16 = (const WCHAR *)pv;
  v7 = *(_QWORD *)(a1 + 104);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, &v16);
  v13 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, v8[1].Reserved.Reserved1, &v13);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      484LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v9);
  *a2 = 0LL;
  v15 = 1;
  v10 = *(_QWORD *)(a1 + 96);
  *a2 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v10 + 72LL))(v10, v13, a2);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      487LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v11);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v17);
  if ( pv )
    CoTaskMemFree(pv);
  return a2;
}
