/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x1801E3CD0
 * Callers:
 *     _Concurrency::details::_Task_impl_long_::_CancelAndRunContinuations_::_1_::dtor$0 @ 0x1801EBB21 (_Concurrency--details--_Task_impl_long_--_CancelAndRunContinuations_--_1_--dtor$0.c)
 *     _Concurrency::details::_CancellationTokenState::_DeregisterCallback_::_1_::dtor$0 @ 0x1801EC01A (_Concurrency--details--_CancellationTokenState--_DeregisterCallback_--_1_--dtor$0.c)
 *     _Concurrency::details::_CancellationTokenState::_RegisterCallback_::_1_::dtor$0 @ 0x1801EC663 (_Concurrency--details--_CancellationTokenState--_RegisterCallback_--_1_--dtor$0.c)
 *     Concurrency::details::_PPLTaskHandle_long_Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_TaskProcHandle_::invoke @ 0x1801ECC70 (Concurrency--details--_PPLTaskHandle_long_Concurrency--task_long_--_InitialTaskHand_ea_1801ECC70.c)
 *     __lambda_d1cc878f49256a12ed651bb70f914db7_::operator()_::_1_::dtor$2 @ 0x1802D727E (__lambda_d1cc878f49256a12ed651bb70f914db7_--operator()_--_1_--dtor$2.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor$1 @ 0x1802D77B0 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_1_--dtor$1.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::[Windows::UI::Xaml::IApplicationOverrides]::OnLaunched_::_1_::dtor$12 @ 0x1802D84B1 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--[Windows--UI--Xaml_ea_1802D84B1.c)
 *     _Concurrency::details::_Task_impl_unsigned_char_::_CancelAndRunContinuations_::_1_::dtor$0 @ 0x18030D1BC (_Concurrency--details--_Task_impl_unsigned_char_--_CancelAndRunContinuations_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_bool_::_CancelAndRunContinuations_::_1_::dtor$0 @ 0x18030D3CC (_Concurrency--details--_Task_impl_bool_--_CancelAndRunContinuations_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_bool_::_SetUnwrappedAsyncOp_::_1_::dtor$1 @ 0x18030E3BA (_Concurrency--details--_Task_impl_bool_--_SetUnwrappedAsyncOp_--_1_--dtor$1.c)
 *     ?invoke@?$_PPLTaskHandle@EU?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@U_ContinuationTaskHandleBase@details@3@@details@Concurrency@@UEBAXXZ @ 0x18030EB30 (-invoke@-$_PPLTaskHandle@EU-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency.c)
 * Callees:
 *     <none>
 */

void __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  int v1; // eax

  v1 = _Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
