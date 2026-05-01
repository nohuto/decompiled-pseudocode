/*
 * XREFs of wistd::__function::__func__lambda_b38205724e3d5d179371f4a35f8c246e__void___cdecl(void)_::operator() @ 0x18020DAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_b38205724e3d5d179371f4a35f8c246e__void___cdecl_void__::operator()(
        __int64 a1)
{
  return wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::DecrementOutstandingEventInvocationCount(*(_QWORD *)(a1 + 8));
}
