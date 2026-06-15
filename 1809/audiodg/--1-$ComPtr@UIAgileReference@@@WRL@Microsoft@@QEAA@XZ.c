/*
 * XREFs of ??1?$ComPtr@UIAgileReference@@@WRL@Microsoft@@QEAA@XZ @ 0x140047FE4
 * Callers:
 *     _Windows::Internal::GitPtrSupportsAgile_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult_____ptr64___::CopyLocal_::_1_::dtor$0 @ 0x14004992F (_Windows--Internal--GitPtrSupportsAgile_Windows--Foundation--IAsyncOperationCompletedHandler_Win.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance_::_1_::dtor$0 @ 0x140049E5B (_Windows--Media--Devices--AudioDeviceModulesManager--FindAllByIdAndInstance_--_1_--dtor$0.c)
 *     _Windows::Internal::Details::GitInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64__Windows::Internal::GitPtrSupportsAgile_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64____2_::Invoke_::_1_::dtor$1 @ 0x14004C36E (_Windows--Internal--Details--GitInvokeHelper_Windows--Foundation--ITypedEventHandle_ea_14004C36E.c)
 *     _Windows::Internal::Details::GitInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64__Windows::Internal::GitPtrSupportsAgile_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64____2_::Invoke_::_1_::dtor$1 @ 0x14004C44E (_Windows--Internal--Details--GitInvokeHelper_Windows--Foundation--ITypedEventHandle_ea_14004C44E.c)
 *     _Windows::Media::Devices::SendCommandAsyncOperation::OnStart_::_1_::dtor$1 @ 0x14004CB6A (_Windows--Media--Devices--SendCommandAsyncOperation--OnStart_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IAgileReference>::~ComPtr<IAgileReference>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease(a1);
}
