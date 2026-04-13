/*
 * XREFs of ??1?$MakeAllocator@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180016F18
 * Callers:
 *     _ContentManagement::ContentManagementBrokerServer::get_ContextualSuggestionsManager_::_1_::dtor$1 @ 0x1800CC7F9 (_ContentManagement--ContentManagementBrokerServer--get_ContextualSuggestionsManager_ea_1800CC7F9.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_ThumbnailCacheHelper_::_1_::dtor$1 @ 0x1800CC82F (_ContentManagement--ContentManagementBrokerServer--get_ThumbnailCacheHelper_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_FeatureManager_::_1_::dtor$1 @ 0x1800CC889 (_ContentManagement--ContentManagementBrokerServer--get_FeatureManager_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_IdentityManager_::_1_::dtor$0 @ 0x1800CC8AD (_ContentManagement--ContentManagementBrokerServer--get_IdentityManager_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::QueueActionAfterUnlock_::_1_::dtor$1 @ 0x1800CD55F (_ContentManagement--ContentManagementService--QueueActionAfterUnlock_--_1_--dtor$1.c)
 *     _std::_Ref_count_obj_ContentDeliveryManager::Background::CorrelationVectorWrapper_::_Ref_count_obj_ContentDeliveryManager::Background::CorrelationVectorWrapper__::_1_::dtor$1 @ 0x1800CDAFC (_std--_Ref_count_obj_ContentDeliveryManager--Background--CorrelationVectorWrapper_-_ea_1800CDAFC.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl_ContentManagement::TargetedContent::Internal::ISubscriptionManager__::_1_::dtor$0 @ 0x1800CE5F6 (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--Internal--Subscr.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction_::_1_::dtor$2 @ 0x1800CF29A (_Windows--Services--TargetedContent--Internal--TargetedContentActionStatics--Create_ea_1800CF29A.c)
 *     _UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession_::_1_::dtor$4 @ 0x1800D1AFE (_UniqueExtendedExecutionSession--GetSharedExtendedExecutionSession_--_1_--dtor$4.c)
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
