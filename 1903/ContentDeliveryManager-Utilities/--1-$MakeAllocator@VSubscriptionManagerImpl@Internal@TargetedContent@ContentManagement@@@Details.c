/*
 * XREFs of ??1?$MakeAllocator@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180016B48
 * Callers:
 *     _ContentManagement::ContentManagementBrokerServer::get_ContextualSuggestionsManager_::_1_::dtor$1 @ 0x1800CC669 (_ContentManagement--ContentManagementBrokerServer--get_ContextualSuggestionsManager_ea_1800CC669.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_ThumbnailCacheHelper_::_1_::dtor$1 @ 0x1800CC69F (_ContentManagement--ContentManagementBrokerServer--get_ThumbnailCacheHelper_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_FeatureManager_::_1_::dtor$1 @ 0x1800CC6F9 (_ContentManagement--ContentManagementBrokerServer--get_FeatureManager_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_IdentityManager_::_1_::dtor$0 @ 0x1800CC71D (_ContentManagement--ContentManagementBrokerServer--get_IdentityManager_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::QueueActionAfterUnlock_::_1_::dtor$1 @ 0x1800CD3BD (_ContentManagement--ContentManagementService--QueueActionAfterUnlock_--_1_--dtor$1.c)
 *     _std::_Ref_count_obj_ContentDeliveryManager::Background::CorrelationVectorWrapper_::_Ref_count_obj_ContentDeliveryManager::Background::CorrelationVectorWrapper__::_1_::dtor$1 @ 0x1800CD95A (_std--_Ref_count_obj_ContentDeliveryManager--Background--CorrelationVectorWrapper_-_ea_1800CD95A.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl_ContentManagement::TargetedContent::Internal::ISubscriptionManager__::_1_::dtor$0 @ 0x1800CE454 (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--Internal--Subscr.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction_::_1_::dtor$2 @ 0x1800CF0F8 (_Windows--Services--TargetedContent--Internal--TargetedContentActionStatics--Create_ea_1800CF0F8.c)
 *     _UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession_::_1_::dtor$4 @ 0x1800D1934 (_UniqueExtendedExecutionSession--GetSharedExtendedExecutionSession_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>::~MakeAllocator<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
