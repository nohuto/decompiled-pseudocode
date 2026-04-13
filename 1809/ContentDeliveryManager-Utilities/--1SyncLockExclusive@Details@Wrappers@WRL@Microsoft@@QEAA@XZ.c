/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18001EB20
 * Callers:
 *     _ContentManagement::ContentManagementService::EnsureOpenConnection_::_1_::dtor$0 @ 0x1800C92E2 (_ContentManagement--ContentManagementService--EnsureOpenConnection_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::CloseConnection_::_1_::dtor$0 @ 0x1800C9306 (_ContentManagement--ContentManagementService--CloseConnection_--_1_--dtor$0.c)
 *     _Windows::Foundation::Collections::Internal::NaiveSplitView_enum_ContentManagement::WindowPosition_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_enum_ContentManagement::WindowPosition__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_enum_ContentManagement::WindowPosition__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::HashMapOptions_enum_ContentManagement::WindowPosition_unsigned_int_Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_enum_ContentManagement::WindowPosition__0_1_0___::Force_::_1_::dtor$0 @ 0x1800CEB67 (_Windows--Foundation--Collections--Internal--NaiveSplitView_enum_ContentManagement-_ea_1800CEB67.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *this = 0LL;
  }
}
