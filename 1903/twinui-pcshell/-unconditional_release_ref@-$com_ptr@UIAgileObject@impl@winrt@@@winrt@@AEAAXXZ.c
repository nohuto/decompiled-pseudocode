/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x180097300
 * Callers:
 *     ??$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@?$factory_cache_entry@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@Z @ 0x1800941AC (--$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@-$factory_cache_entry@UAppInstallManager.c)
 *     _lambda_9783efd0cf9a4011a5fefd366cc6ea27_::__lambda_9783efd0cf9a4011a5fefd366cc6ea27_ @ 0x180094660 (_lambda_9783efd0cf9a4011a5fefd366cc6ea27_--__lambda_9783efd0cf9a4011a5fefd366cc6ea27_.c)
 *     ??1?$com_ptr@UIContextCallback@impl@winrt@@@winrt@@QEAA@XZ @ 0x180094724 (--1-$com_ptr@UIContextCallback@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_9783efd0cf9a4011a5fefd366cc6ea27___::Release @ 0x180096B40 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncOperationComplete_ea_180096B40.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180096F0C (-await_suspend@-$await_adapter@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@A.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180097044 (-await_suspend@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
