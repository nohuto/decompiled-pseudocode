/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_539a3a17291c0d70694cfaee741340a5___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke @ 0x1802F3590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180110CDC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::___Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_539a3a17291c0d70694cfaee741340a5___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke(
        __int64 a1)
{
  int v1; // eax
  signed int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 128LL) + 104LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL));
  v2 = 0;
  if ( v1 < 0 )
    v2 = v1;
  if ( v2 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v2);
  return (unsigned int)v2;
}
