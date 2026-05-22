/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController___Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___::Invoke @ 0x1800A9CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18008F984 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x1800A8ECC (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController___Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::___Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = WGIController::ApplyUserSettingsForController(*(WGIController **)(a1 + 16), 0LL);
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
