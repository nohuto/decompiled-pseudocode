/*
 * XREFs of ?DecrementOutstandingEventInvocationCount@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAXXZ @ 0x1801BD8A0
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_b38205724e3d5d179371f4a35f8c246e__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1801C0780 (wistd--_Func_impl_wistd--_Callable_obj__lambda_b38205724e3d5d179371f4a35f8c246e__0__ea_1801C0780.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::DecrementOutstandingEventInvocationCount(
        __int64 a1)
{
  void *v1; // rcx

  v1 = (void *)(a1 + 56);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) == 1 )
    WakeByAddressSingle(v1);
}
