/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::Internal::UserProfileEventArgs___Windows::System::Internal::IUserProfileEventArgs_____::_)(IInspectable___Windows::System::Internal::IUserProfileEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable___Windows::System::Internal::IUserProfileEventArgs___::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable___Windows::System::Internal::IUserProfileEventArgs___ @ 0x1800A7290
 * Callers:
 *     ?StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800A7BBC (-StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::Internal::UserProfileEventArgs___Windows::System::Internal::IUserProfileEventArgs_____::___IInspectable___Windows::System::Internal::IUserProfileEventArgs____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable___Windows::System::Internal::IUserProfileEventArgs___::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable___Windows::System::Internal::IUserProfileEventArgs___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // xmm1_8
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::Internal::UserProfileEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_1801751E8;
  result = a1;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
