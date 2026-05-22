/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180051DC0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::ISpatialGestureRecognizer_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs_____ptr64_Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs_____ptr64___::_)(Windows::UI::Input::Spatial::ISpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs_____ptr64___lambda_e156a27bd331df06d8399b9d8943173e___1_Windows::UI::Input::Spatial::ISpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs_____ptr64_::Invoke @ 0x1800519E0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::Internal::UserProfileEventArgs_____ptr64_Windows::System::Internal::IUserProfileEventArgs_____ptr64___::_)(IInspectable_____ptr64_Windows::System::Internal::IUserProfileEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____ptr64___lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable_____ptr64_Windows::System::Internal::IUserProfileEventArgs_____ptr64_::Invoke @ 0x180059790 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEventHandler_impl.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController_____ptr64_Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64___::_)(Windows::Gaming::Input::IGameController_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_03b1f35a5530b3ed62fc5b4204ace512___1_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64_::Invoke @ 0x18006FDF0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18006FDF0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  result = RoGetMatchingRestrictedErrorInfo(a1, &v3);
  if ( (int)result >= 0 )
    result = SetRestrictedErrorInfo(v3);
  v2 = v3;
  if ( v3 )
  {
    v3 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
