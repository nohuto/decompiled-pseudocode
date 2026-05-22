/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController_____ptr64_Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64___::_)(Windows::Gaming::Input::IGameController_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_03b1f35a5530b3ed62fc5b4204ace512___1_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64_::Invoke @ 0x18006FDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180051DC0 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x18006DC48 (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController_____ptr64_Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64___::___Windows::Gaming::Input::IGameController_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_03b1f35a5530b3ed62fc5b4204ace512___1_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64_::Invoke(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = WGIController::ApplyUserSettingsForController(*(WGIController **)(a1 + 16), 0LL);
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v1);
  return v2;
}
