/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x180011774
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Gaming::Preview::GamesEnumeration::GameListEntry____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Gaming::Preview::GamesEnumeration::GameListEntry____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Gaming::Preview::GamesEnumeration::GameListEntry___0_1_0___::GetAt_::_1_::dtor$0 @ 0x1800448C5 (_Windows--Foundation--Collections--Internal--Vector_Windows--Gaming--Preview--GamesEnumeration--.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Gaming::Preview::GamesEnumeration::GameListEntry____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Gaming::Preview::GamesEnumeration::GameListEntry____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Gaming::Preview::GamesEnumeration::GameListEntry___0_1_0___::IndexOf_::_1_::dtor$0 @ 0x1800448D7 (_Windows--Foundation--Collections--Internal--Vector_Windows--Gaming--Preview--Games_ea_1800448D7.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Gaming::Preview::GamesEnumeration::GameListEntry____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Gaming::Preview::GamesEnumeration::GameListEntry____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Gaming::Preview::GamesEnumeration::GameListEntry___0_1_0___::GetMany_::_1_::dtor$0 @ 0x18004491F (_Windows--Foundation--Collections--Internal--Vector_Windows--Gaming--Preview--Games_ea_18004491F.c)
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
