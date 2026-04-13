/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x180012EC0
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____::GetAt_::_1_::dtor$0 @ 0x1800CC8EE (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedContent--Internal.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____::IndexOf_::_1_::dtor$0 @ 0x1800CC900 (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800CC900.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____::GetMany_::_1_::dtor$0 @ 0x1800CC95A (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800CC95A.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal___0_1_0___::GetAt_::_1_::dtor$0 @ 0x1800CF688 (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800CF688.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal___0_1_0___::IndexOf_::_1_::dtor$0 @ 0x1800CF69A (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800CF69A.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal___0_1_0___::GetMany_::_1_::dtor$0 @ 0x1800CF6D0 (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800CF6D0.c)
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
