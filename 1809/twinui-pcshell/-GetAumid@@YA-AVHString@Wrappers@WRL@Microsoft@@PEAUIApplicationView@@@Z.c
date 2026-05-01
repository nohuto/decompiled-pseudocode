/*
 * XREFs of ?GetAumid@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801DBF84
 * Callers:
 *     ?GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z @ 0x1801DCED0 (-GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z.c)
 *     _lambda_f27e537ed1ad8c8456023c324c3ce255_::operator() @ 0x1801FE400 (_lambda_f27e537ed1ad8c8456023c324c3ce255_--operator().c)
 *     ?GetCachedIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801FEEFC (-GetCachedIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShel.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Set@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappers@WRL@Microsoft@@QEAAJAEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1801BBFE0 (--$Set@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappe.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall GetAumid(HSTRING *a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+48h] [rbp+10h] BYREF
  const wchar_t *v9; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v4 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 136LL))(a2, &pv);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      32LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\tabviewmanagerhelpers.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v9 = (const wchar_t *)pv;
  v5 = Microsoft::WRL::Wrappers::HString::Set<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(
         a1,
         &v9);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      33LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\tabviewmanagerhelpers.h",
      (const char *)(unsigned int)v5);
  if ( pv )
    CoTaskMemFree(pv);
  return a1;
}
