/*
 * XREFs of ??1?$MoveOnCopy@VString@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180004BCC
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$3 @ 0x1800C8260 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics--GetTriggere.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$0 @ 0x1800C8EDB (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$1 @ 0x1800C8EED (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$2 @ 0x1800C8EFF (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$3 @ 0x1800C8F11 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$3.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$8 @ 0x1800C9D58 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$8.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$9 @ 0x1800C9D6A (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$9.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$4 @ 0x1800C9E0C (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$4.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$5 @ 0x1800C9E1E (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSubscription_--_.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$4 @ 0x1800CA006 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800CA006.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$2 @ 0x1800CBCF1 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800CBCF1.c)
 *     _MobilityExperienceManager::GetHasMobilityAccount_::_1_::dtor$7 @ 0x1800CFAD7 (_MobilityExperienceManager--GetHasMobilityAccount_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::MoveOnCopy<Windows::Internal::String>::~MoveOnCopy<Windows::Internal::String>(
        HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
