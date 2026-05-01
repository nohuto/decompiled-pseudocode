/*
 * XREFs of __Platform_AcquireSRWLockShared @ 0x180088016
 * Callers:
 *     ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x180029FF0 (-OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource___Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____lambda_7753f78d151ec0359928d273266c88c8___ @ 0x1802BEACC (Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows--Internal--Co.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_482b3f9570c0e9685e107121a6a2c9e9___ @ 0x1802BECDC (Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows-_ea_1802BECDC.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____lambda_47ed099530a2135fa4bc1c4a176c63c9___ @ 0x1802BEEEC (Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChangedEventHandler_.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_ead1898829ddc19966a0778afc06ed08___ @ 0x1802BF0FC (Platform--EventSource--DoInvokeVoid_Windows--UI--Xaml--Interop--BindableVectorChangedEventHandle.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____lambda_ce333d0cb15dad9de596e78393bdefab___ @ 0x1802DE420 (Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChanged_ea_1802DE420.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180413C68 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall _Platform_AcquireSRWLockShared(PSRWLOCK SRWLock)
{
  AcquireSRWLockShared(SRWLock);
}
