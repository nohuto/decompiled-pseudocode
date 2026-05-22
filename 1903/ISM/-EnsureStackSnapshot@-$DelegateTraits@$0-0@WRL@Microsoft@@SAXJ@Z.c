/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18008F984
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialGestureRecognizer____Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs___Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs_____::_)(Windows::UI::Input::Spatial::ISpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer___Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs_____lambda_e156a27bd331df06d8399b9d8943173e___1_Windows::UI::Input::Spatial::ISpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs___::Invoke @ 0x1800906A0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800906A0.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::Internal::UserProfileEventArgs___Windows::System::Internal::IUserProfileEventArgs_____::_)(IInspectable___Windows::System::Internal::IUserProfileEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable___Windows::System::Internal::IUserProfileEventArgs___::Invoke @ 0x180095BA0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_180095BA0.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController___Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___::Invoke @ 0x1800A9CC0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800A9CC0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 */

__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v3);
  if ( (int)RoGetMatchingRestrictedErrorInfo(a1, &v3) >= 0 )
    SetRestrictedErrorInfo(v3);
  return Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v3);
}
