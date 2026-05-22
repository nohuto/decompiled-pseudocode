/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::ISpatialGestureRecognizer_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs_____ptr64_Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs_____ptr64___::_)(Windows::UI::Input::Spatial::ISpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs_____ptr64___lambda_e156a27bd331df06d8399b9d8943173e___1_Windows::UI::Input::Spatial::ISpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs_____ptr64_::Invoke @ 0x1800519E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180051DC0 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::ISpatialGestureRecognizer_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs_____ptr64_Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs_____ptr64___::___Windows::UI::Input::Spatial::ISpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs_____ptr64___lambda_e156a27bd331df06d8399b9d8943173e___1_Windows::UI::Input::Spatial::ISpatialGestureRecognizer_____ptr64_Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs_____ptr64_::Invoke(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v1);
  return v2;
}
