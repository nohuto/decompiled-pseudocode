/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18008EC7C
 * Callers:
 *     _PnpApiWrapper::Details::OnDeviceNotification_::_1_::dtor$0 @ 0x18003D96A (_PnpApiWrapper--Details--OnDeviceNotification_--_1_--dtor$0.c)
 *     _wil::GetActivationFactory_Windows::Perception::Internal::IPerceptionTimestampHelperStaticsInternal__::_1_::dtor$1 @ 0x18008EC67 (_wil--GetActivationFactory_Windows--Perception--Internal--IPerceptionTimestampHelpe_ea_18008EC67.c)
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$5 @ 0x18009574D (_SpectrumListener--SpectrumListener_--_1_--dtor$5.c)
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$8 @ 0x180095765 (_SpectrumListener--SpectrumListener_--_1_--dtor$8.c)
 *     _wil::GetActivationFactory_Windows::Graphics::Holographic::Internal::IHolographicDisplayStaticsInternal__::_1_::dtor$1 @ 0x1800965BF (_wil--GetActivationFactory_Windows--Graphics--Holographic--Internal--IHolographicDi_ea_1800965BF.c)
 *     _GetPropertyValue_unsigned_long__::_1_::dtor$4 @ 0x1800A85AC (_GetPropertyValue_unsigned_long__--_1_--dtor$4.c)
 *     _GetPropertyValue_unsigned___int64__::_1_::dtor$4 @ 0x1800A876B (_GetPropertyValue_unsigned___int64__--_1_--dtor$4.c)
 *     _wil::GetActivationFactory_Windows::System::IDispatcherQueueControllerStatics__::_1_::dtor$1 @ 0x18010EFDF (_wil--GetActivationFactory_Windows--System--IDispatcherQueueControllerStatics__--_1_--dtor$1.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVector_HSTRING_________Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x180120F24 (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Win_ea_180120F24.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::IPropertyValue____Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x180120FF4 (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Win_ea_180120FF4.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&SetAllConstantsForInputTypeToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x1801210C4 (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Micros_ea_1801210C4.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&SetConstantAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x180121194 (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Micros_ea_180121194.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&SetConstantToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x180121264 (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Micros_ea_180121264.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
