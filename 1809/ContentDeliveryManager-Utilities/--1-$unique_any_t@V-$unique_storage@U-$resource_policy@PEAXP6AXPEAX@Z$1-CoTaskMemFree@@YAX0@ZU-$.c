/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800047C8
 * Callers:
 *     _ContentManagement::ContentManagementService::PeekLockScreenRegistryKeys_::_1_::dtor$0 @ 0x1800C934E (_ContentManagement--ContentManagementService--PeekLockScreenRegistryKeys_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$6 @ 0x1800C9360 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUpdated_--_1_--.c)
 *     _ShellMRTHelper::MRTHelperBase::Resolve_::_1_::dtor$5 @ 0x1800C9372 (_ShellMRTHelper--MRTHelperBase--Resolve_--_1_--dtor$5.c)
 *     _CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed_::_1_::dtor$0 @ 0x1800C9C5C (_CreativeFramework--SubscribedContentStore--RefreshSubscriptionLastAccessed_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionState_::_1_::dtor$0 @ 0x1800C9C80 (_CreativeFramework--SubscribedContentStore--GetSubscriptionState_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$0 @ 0x1800C9CDA (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$6 @ 0x1800C9E30 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$6.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$10 @ 0x1800C9E66 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$10.c)
 *     _Windows::Services::TargetedContent::Internal::RegisterWnfTrigger_::_1_::dtor$1 @ 0x1800CC26C (_Windows--Services--TargetedContent--Internal--RegisterWnfTrigger_--_1_--dtor$1.c)
 *     _Windows::Services::TargetedContent::Internal::GuidBiPredicateCreator_::_1_::dtor$0 @ 0x1800CC2A2 (_Windows--Services--TargetedContent--Internal--GuidBiPredicateCreator_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::DecodeBase64ToBtyeArray_::_1_::dtor$2 @ 0x1800CC2D8 (_Windows--Services--TargetedContent--Internal--DecodeBase64ToBtyeArray_--_1_--dtor$2.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor$11 @ 0x1800CC328 (_Windows--Services--TargetedContent--Internal--SetTriggerStateTransitions_--_1_--dtor$11.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer_::_1_::dtor$9 @ 0x1800CCA89 (_Windows--Services--TargetedContent--Internal--GetTriggerSettingsContainer_--_1_--dtor$9.c)
 *     _CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService_::_1_::dtor$2 @ 0x1800CF22C (_CreativeFramework--Actions--SetLockScreenHotspotsService--SetLockScreenHotspotsSer_ea_1800CF22C.c)
 *     _EdgeTileUtils::GetTileIdforNavigationUrl_::_1_::dtor$3 @ 0x1800CF48C (_EdgeTileUtils--GetTileIdforNavigationUrl_--_1_--dtor$3.c)
 *     _EdgeTileUtils::GetTileIdforNavigationUrl_::_1_::dtor$4 @ 0x1800CF49E (_EdgeTileUtils--GetTileIdforNavigationUrl_--_1_--dtor$4.c)
 *     __lambda_2e8bb15b569abf147acfccd9115572b3_::operator()_::_1_::dtor$0 @ 0x1800CF5CE (__lambda_2e8bb15b569abf147acfccd9115572b3_--operator()_--_1_--dtor$0.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage_::_1_::dtor$1 @ 0x1800CF8DD (_CreativeFramework--NotificationManager--ToastHelpers--ResolveRatingImage_--_1_--dtor$1.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1800CFC1D (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppDisplayI_ea_1800CFC1D.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::SetLayoutType_::_1_::dtor$0 @ 0x1800CFDF7 (_CreativeFramework--TargetedContentLayoutHelpers--Settings--SetLayoutType_--_1_--dtor$0.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType_::_1_::dtor$0 @ 0x1800CFE7B (_CreativeFramework--TargetedContentLayoutHelpers--Settings--GetLayoutType_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
