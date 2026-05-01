/*
 * XREFs of ??$capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@Z$$V@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@P6AHAEBUguid@0@PEAPEAX@Z@Z @ 0x1800A162C
 * Callers:
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800A408C (-await_suspend@-$await_adapter@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@A.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800A41C4 (-await_suspend@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA.c)
 * Callees:
 *     CoGetObjectContext_0 @ 0x18008E791 (CoGetObjectContext_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
LPVOID *__fastcall winrt::capture<winrt::impl::IContextCallback,int (*)(winrt::guid const &,void * *),>(LPVOID *ppv)
{
  HRESULT ObjectContext_0; // eax

  *ppv = 0LL;
  ObjectContext_0 = CoGetObjectContext_0(&winrt::impl::guid_storage<winrt::impl::IContextCallback>::value, ppv);
  if ( ObjectContext_0 < 0 )
    winrt::throw_hresult((unsigned int)ObjectContext_0);
  return ppv;
}
