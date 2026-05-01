/*
 * XREFs of ?GetAumid@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18022F4A0
 * Callers:
 *     ?GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z @ 0x180230490 (-GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z.c)
 *     ?TryFindMatchingAppInGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAU2@@Z @ 0x18023FB70 (-TryFindMatchingAppInGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAU2@@Z.c)
 *     _lambda_f27e537ed1ad8c8456023c324c3ce255_::operator() @ 0x180251670 (_lambda_f27e537ed1ad8c8456023c324c3ce255_--operator().c)
 *     ?GetCachedIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18025216C (-GetCachedIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShel.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18000F610 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x180226D00 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall GetAumid(HSTRING *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, LPVOID *); // rbx
  int v5; // eax
  HRESULT v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID pv; // [rsp+58h] [rbp+10h] BYREF
  const wchar_t *v10; // [rsp+60h] [rbp+18h] BYREF

  *a1 = 0LL;
  pv = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 136LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v5 = v4(a2, &pv);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      32LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\tabviewmanagerhelpers.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v10 = (const wchar_t *)pv;
  v6 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>(a1, &v10);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      33LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\tabviewmanagerhelpers.h",
      (const char *)(unsigned int)v6);
  if ( pv )
    CoTaskMemFree(pv);
  return a1;
}
