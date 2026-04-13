/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800037DC
 * Callers:
 *     _CreativeFramework::Health::details::GenericOffersHealthTracker_11_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor$2 @ 0x1800CDB8B (_CreativeFramework--Health--details--GenericOffersHealthTracker_11_1_--GetOrCreateBaseEventForPl.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$11 @ 0x1800CE0D8 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800CE0D8.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::UnregisterSubscription_::_1_::dtor$0 @ 0x1800CE167 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--UnregisterS_ea_1800CE167.c)
 *     __lambda_e34527cb48b3e2822e62a7657f7a4fcf_::operator()_::_1_::dtor$0 @ 0x1800CE20F (__lambda_e34527cb48b3e2822e62a7657f7a4fcf_--operator()_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTrigger_::_1_::dtor$0 @ 0x1800CFB85 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800CFB85.c)
 *     _CreativeFramework::Triggers::GetWellKnownWnfStateByName_::_1_::dtor$2 @ 0x1800D1657 (_CreativeFramework--Triggers--GetWellKnownWnfStateByName_--_1_--dtor$2.c)
 *     _UniqueExtendedExecutionSession::CloseSession_::_1_::dtor$0 @ 0x1800D18C8 (_UniqueExtendedExecutionSession--CloseSession_--_1_--dtor$0.c)
 *     _UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession_::_1_::dtor$0 @ 0x1800D18FE (_UniqueExtendedExecutionSession--GetSharedExtendedExecutionSession_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
