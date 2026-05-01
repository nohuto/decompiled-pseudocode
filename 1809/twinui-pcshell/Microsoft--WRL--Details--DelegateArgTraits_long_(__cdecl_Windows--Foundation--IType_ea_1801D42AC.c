/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_5fcb779aef48f5d8da69e0e86825322b___1_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_5fcb779aef48f5d8da69e0e86825322b___1_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64_ @ 0x1801D42AC
 * Callers:
 *     ?RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ @ 0x1801E3A38 (-RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800364B4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64__IInspectable_____ptr64_::___Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_5fcb779aef48f5d8da69e0e86825322b___1_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_5fcb779aef48f5d8da69e0e86825322b___1_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v5; // xmm1_8
  __int64 result; // rax

  v3 = (_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::TabTransferEventBroker *,IInspectable *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::TabTransferEventBroker *,IInspectable *>'};
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::TabTransferEventBroker *,IInspectable *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)a2;
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_1803DDBB8;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::TabTransferEventBroker *,IInspectable *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = a1;
  *(_QWORD *)(a1 + 80) = v5;
  return result;
}
