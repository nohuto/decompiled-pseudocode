/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::Internal::UserProfileEventArgs___Windows::System::Internal::IUserProfileEventArgs_____::_)(IInspectable___Windows::System::Internal::IUserProfileEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable___Windows::System::Internal::IUserProfileEventArgs___::Invoke @ 0x180095980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18008F744 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::Internal::UserProfileEventArgs___Windows::System::Internal::IUserProfileEventArgs_____::___IInspectable___Windows::System::Internal::IUserProfileEventArgs____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable___Windows::System::Internal::IUserProfileEventArgs___::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
