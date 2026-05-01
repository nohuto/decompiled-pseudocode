/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_b459ff12bad0437e5f2edde67f38b2be___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x18029B570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800ED98C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__IInspectable_____ptr64_::___Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_b459ff12bad0437e5f2edde67f38b2be___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke(
        __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, 4LL);
  }
  else
  {
    v1 = -2147023728;
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(0x80070490);
  }
  return v1;
}
