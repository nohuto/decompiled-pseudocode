/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x1400480C0
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____ptr64___::GetAt_::_1_::dtor$0 @ 0x14004A54B (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_14004A54B.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____ptr64___::GetMany_::_1_::dtor$0 @ 0x14004AEF1 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_14004AEF1.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____ptr64___::IndexOf_::_1_::dtor$0 @ 0x14004BBE1 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_14004BBE1.c)
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
