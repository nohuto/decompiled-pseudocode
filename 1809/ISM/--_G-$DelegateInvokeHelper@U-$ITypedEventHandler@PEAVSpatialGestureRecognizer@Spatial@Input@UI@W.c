/*
 * XREFs of ??_G?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialManipulationCompletedEventArgs@2345@@Foundation@Windows@@V_lambda_57e85dab0dd03ee3bbab2fe8e68defed_@@$0?0PEAUISpatialGestureRecognizer@Spatial@Input@UI@3@PEAUISpatialManipulationCompletedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialGestureRecognizer@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVSpatialManipulationCompletedEventArgs@Spatial@Input@UI@Windows@@PEAUISpatialManipulationCompletedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@3@PEAUISpatialManipulationCompletedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180051D90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialGestureRecognizer *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *,Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs *>>::*)(Windows::UI::Input::Spatial::ISpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>,_lambda_57e85dab0dd03ee3bbab2fe8e68defed_,-1,Windows::UI::Input::Spatial::ISpatialGestureRecognizer *,Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs *>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
