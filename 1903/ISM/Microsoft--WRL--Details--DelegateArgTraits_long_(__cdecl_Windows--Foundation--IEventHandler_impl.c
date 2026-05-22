/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Mirage::Internal::IHomeGestureDetectedEventArgs___::_)(IInspectable___Windows::Mirage::Internal::IHomeGestureDetectedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::Mirage::Internal::IHomeGestureDetectedEventArgs_____lambda_7d29053e457191db0e68032ee42a7943___1_IInspectable___Windows::Mirage::Internal::IHomeGestureDetectedEventArgs___::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::Mirage::Internal::IHomeGestureDetectedEventArgs_____lambda_7d29053e457191db0e68032ee42a7943___1_IInspectable___Windows::Mirage::Internal::IHomeGestureDetectedEventArgs___ @ 0x1800951C0
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800952EC (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Mirage::Internal::IHomeGestureDetectedEventArgs___::___IInspectable___Windows::Mirage::Internal::IHomeGestureDetectedEventArgs____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::Mirage::Internal::IHomeGestureDetectedEventArgs_____lambda_7d29053e457191db0e68032ee42a7943___1_IInspectable___Windows::Mirage::Internal::IHomeGestureDetectedEventArgs___::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::Mirage::Internal::IHomeGestureDetectedEventArgs_____lambda_7d29053e457191db0e68032ee42a7943___1_IInspectable___Windows::Mirage::Internal::IHomeGestureDetectedEventArgs___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // xmm1_8
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::Mirage::Internal::IHomeGestureDetectedEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_180174EB8;
  result = a1;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
