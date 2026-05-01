/*
 * XREFs of ??1?$LockHolder@VSRWLock@XWinRT@@UAcquireWrite@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x18003722C
 * Callers:
 *     _Windows::Foundation::Collections::Internal::NaiveSplitView_HSTRING_____IInspectable___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____Windows::Foundation::Collections::Internal::HashMapOptions_HSTRING_____IInspectable___Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______0_1_0___::Force_::_1_::dtor$0 @ 0x180045396 (_Windows--Foundation--Collections--Internal--NaiveSplitView_HSTRING_____IInspectabl_ea_180045396.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::SRWLock,XWinRT::detail::AcquireWrite>::~LockHolder<XWinRT::SRWLock,XWinRT::detail::AcquireWrite>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *a1 = 0LL;
  }
}
