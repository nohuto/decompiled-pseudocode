/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x1400480F4
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____ptr64___::Clear_::_1_::dtor$0 @ 0x140049836 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioDeviceModule__.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____ptr64___::RemoveAtInternal_::_1_::dtor$1 @ 0x14004DDDA (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_14004DDDA.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____ptr64___::SetAt_::_1_::dtor$2 @ 0x14004E623 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_14004E623.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>::~LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rax
  RTL_SRWLOCK *v3; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 1;
    if ( LODWORD(v1->Ptr) == 1 )
      LODWORD(v3->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v3);
    *a1 = 0LL;
  }
}
