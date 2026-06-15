/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x140045838
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____::GetAt_::_1_::dtor$0 @ 0x140047EDC (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_140047EDC.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____::GetMany_::_1_::dtor$0 @ 0x140048881 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_140048881.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____::IndexOf_::_1_::dtor$0 @ 0x1400494F2 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_1400494F2.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireRead>::~LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireRead>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rax
  RTL_SRWLOCK *v3; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 1;
    if ( LODWORD(v1->Ptr) == 1 )
      --LODWORD(v3->Ptr);
    else
      ReleaseSRWLockShared(v3);
    *a1 = 0LL;
  }
}
