/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Foundation::Rect_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Foundation::Rect)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Foundation::Rect___lambda_740be508007a71c2bee4a7e4505d7bc5___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Foundation::Rect_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Foundation::Rect___lambda_740be508007a71c2bee4a7e4505d7bc5___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Foundation::Rect_ @ 0x1800A89F4
 * Callers:
 *     ??$Callback@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@VXamlLauncherState@@PEAUICortanaExperienceManager@Experience@Shell@Internal@3@URect@23@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@@01@PEAVXamlLauncherState@@P83@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@8@@Z@Z @ 0x1800A8998 (--$Callback@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Foundation::Rect_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Foundation::Rect__::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Foundation::Rect___lambda_740be508007a71c2bee4a7e4505d7bc5___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Foundation::Rect_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Foundation::Rect___lambda_740be508007a71c2bee4a7e4505d7bc5___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Foundation::Rect_(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // xmm1_8
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_18044E3C8;
  result = a1;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
