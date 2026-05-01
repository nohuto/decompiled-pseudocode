/*
 * XREFs of __Platform_AcquireSRWLockShared @ 0x180085324
 * Callers:
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64___lambda_bd641f78481868be629ded61accc2e50___ @ 0x180265BCC (Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows--Internal--Co.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_1b5508b209f22f7e86a2f99e7c3de27f___ @ 0x180265DE0 (Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows-_ea_180265DE0.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64___lambda_3b34480ad7d2973204f2b7367543a8f5___ @ 0x180265FF4 (Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChangedEventHandler_.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_d66e6f301efedd367be46813d365bb79___ @ 0x180266208 (Platform--EventSource--DoInvokeVoid_Windows--UI--Xaml--Interop--BindableVectorChangedEventHandle.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64___lambda_691217d92eb9936284588ea727e6ccf8___ @ 0x180284CC0 (Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChanged_ea_180284CC0.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1803B188C (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall _Platform_AcquireSRWLockShared(PSRWLOCK SRWLock)
{
  AcquireSRWLockShared(SRWLock);
}
