/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x18025EC20
 * Callers:
 *     __lambda_d1cc878f49256a12ed651bb70f914db7_::operator()_::_1_::dtor$2 @ 0x18025F006 (__lambda_d1cc878f49256a12ed651bb70f914db7_--operator()_--_1_--dtor$2.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor$1 @ 0x18025F800 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_1_--dtor$1.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::[Windows::UI::Xaml::IApplicationOverrides]::OnLaunched_::_1_::dtor$12 @ 0x1802604ED (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--[Windows--UI--Xaml_ea_1802604ED.c)
 *     _Concurrency::details::_Task_impl_unsigned_char_::_CancelAndRunContinuations_::_1_::dtor$0 @ 0x180295391 (_Concurrency--details--_Task_impl_unsigned_char_--_CancelAndRunContinuations_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_bool_::_CancelAndRunContinuations_::_1_::dtor$0 @ 0x1802955A1 (_Concurrency--details--_Task_impl_bool_--_CancelAndRunContinuations_--_1_--dtor$0.c)
 *     _Concurrency::details::_CancellationTokenState::_DeregisterCallback_::_1_::dtor$0 @ 0x1802960D3 (_Concurrency--details--_CancellationTokenState--_DeregisterCallback_--_1_--dtor$0.c)
 *     _Concurrency::details::_CancellationTokenState::_RegisterCallback_::_1_::dtor$0 @ 0x18029681F (_Concurrency--details--_CancellationTokenState--_RegisterCallback_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_bool_::_SetUnwrappedAsyncOp_::_1_::dtor$1 @ 0x18029712A (_Concurrency--details--_Task_impl_bool_--_SetUnwrappedAsyncOp_--_1_--dtor$1.c)
 *     ?invoke@?$_PPLTaskHandle@EU?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@U_ContinuationTaskHandleBase@details@3@@details@Concurrency@@UEBAXXZ @ 0x180297890 (-invoke@-$_PPLTaskHandle@EU-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency.c)
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
