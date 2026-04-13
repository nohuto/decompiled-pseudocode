/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800047E8
 * Callers:
 *     _ContentManagement::ContentManagementService::PeekLockScreenRegistryKeys_::_1_::dtor$0 @ 0x1800CD375 (_ContentManagement--ContentManagementService--PeekLockScreenRegistryKeys_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionState_::_1_::dtor$0 @ 0x1800CD387 (_CreativeFramework--SubscribedContentStore--GetSubscriptionState_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$6 @ 0x1800CD399 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUpdated_--_1_--.c)
 *     _CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed_::_1_::dtor$0 @ 0x1800CDD0A (_CreativeFramework--SubscribedContentStore--RefreshSubscriptionLastAccessed_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$0 @ 0x1800CDD64 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$6 @ 0x1800CDEBA (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$6.c)
 *     _Windows::Services::TargetedContent::Internal::RegisterWnfTrigger_::_1_::dtor$1 @ 0x1800D0266 (_Windows--Services--TargetedContent--Internal--RegisterWnfTrigger_--_1_--dtor$1.c)
 *     _Windows::Services::TargetedContent::Internal::GuidBiPredicateCreator_::_1_::dtor$0 @ 0x1800D029C (_Windows--Services--TargetedContent--Internal--GuidBiPredicateCreator_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::DecodeBase64ToBtyeArray_::_1_::dtor$2 @ 0x1800D02D2 (_Windows--Services--TargetedContent--Internal--DecodeBase64ToBtyeArray_--_1_--dtor$2.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor$11 @ 0x1800D0322 (_Windows--Services--TargetedContent--Internal--SetTriggerStateTransitions_--_1_--dtor$11.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer_::_1_::dtor$9 @ 0x1800D0AD8 (_Windows--Services--TargetedContent--Internal--GetTriggerSettingsContainer_--_1_--dtor$9.c)
 *     _CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService_::_1_::dtor$2 @ 0x1800D33DC (_CreativeFramework--Actions--SetLockScreenHotspotsService--SetLockScreenHotspotsSer_ea_1800D33DC.c)
 *     _EdgeTileUtils::GetTileIdforNavigationUrl_::_1_::dtor$3 @ 0x1800D360D (_EdgeTileUtils--GetTileIdforNavigationUrl_--_1_--dtor$3.c)
 *     _EdgeTileUtils::GetTileIdforNavigationUrl_::_1_::dtor$4 @ 0x1800D361F (_EdgeTileUtils--GetTileIdforNavigationUrl_--_1_--dtor$4.c)
 *     _GetEdgeFaviconCache_::_1_::dtor$1 @ 0x1800D3655 (_GetEdgeFaviconCache_--_1_--dtor$1.c)
 *     _wil::AdaptFixedSizeToAllocatedResult_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_wchar_t___void_(__cdecl_)(void__)_&CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__wchar_t___wchar_t___0_std::nullptr_t______260__::_1_::dtor$1 @ 0x1800D3911 (_wil--AdaptFixedSizeToAllocatedResult_wil--unique_any_t_wil--details--unique_storag_ea_1800D3911.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage_::_1_::dtor$1 @ 0x1800D3A3F (_CreativeFramework--NotificationManager--ToastHelpers--ResolveRatingImage_--_1_--dtor$1.c)
 *     _ShellMRTHelper::MRTHelperBase::Resolve_::_1_::dtor$6 @ 0x1800D3D53 (_ShellMRTHelper--MRTHelperBase--Resolve_--_1_--dtor$6.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1800D3DA3 (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppDisplayI_ea_1800D3DA3.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::SetLayoutType_::_1_::dtor$0 @ 0x1800D3F47 (_CreativeFramework--TargetedContentLayoutHelpers--Settings--SetLayoutType_--_1_--dtor$0.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType_::_1_::dtor$0 @ 0x1800D3FCB (_CreativeFramework--TargetedContentLayoutHelpers--Settings--GetLayoutType_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
