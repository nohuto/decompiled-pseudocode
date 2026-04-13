/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x180012B40
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____ptr64___::GetAt_::_1_::dtor$0 @ 0x1800C8981 (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedContent--Internal.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____ptr64___::IndexOf_::_1_::dtor$0 @ 0x1800C8993 (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800C8993.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____ptr64___::GetMany_::_1_::dtor$0 @ 0x1800C89ED (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800C89ED.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64_0_1_0___::GetAt_::_1_::dtor$0 @ 0x1800CB64A (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800CB64A.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64_0_1_0___::IndexOf_::_1_::dtor$0 @ 0x1800CB65C (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800CB65C.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64_0_1_0___::GetMany_::_1_::dtor$0 @ 0x1800CB692 (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800CB692.c)
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
