/*
 * XREFs of ?DecrementOutstandingEventInvocationCount@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAXXZ @ 0x18020EBD4
 * Callers:
 *     wistd::__function::__func__lambda_b38205724e3d5d179371f4a35f8c246e__void___cdecl(void)_::operator() @ 0x18020DAE0 (wistd--__function--__func__lambda_b38205724e3d5d179371f4a35f8c246e__void___cdecl(void)_--operato.c)
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
