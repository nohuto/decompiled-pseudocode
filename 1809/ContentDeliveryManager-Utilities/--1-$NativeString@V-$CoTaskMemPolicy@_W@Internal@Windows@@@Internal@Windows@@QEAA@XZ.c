/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180012C70
 * Callers:
 *     _CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList_::_1_::dtor$0 @ 0x1800C8118 (_CreativeFramework--LockScreenCategoryConfig--IsCallerInAllowedAppList_--_1_--dtor$0.c)
 *     _CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList_::_1_::dtor$1 @ 0x1800C812A (_CreativeFramework--LockScreenCategoryConfig--IsCallerInAllowedAppList_--_1_--dtor$1.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$15 @ 0x1800C8DBA (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$15.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionState_::_1_::dtor$5 @ 0x1800C9318 (_CreativeFramework--SubscribedContentStore--GetSubscriptionState_--_1_--dtor$5.c)
 *     _ContentManagement::CreativeEventReportedCache::IsReportedEventExpired_::_1_::dtor$2 @ 0x1800C933C (_ContentManagement--CreativeEventReportedCache--IsReportedEventExpired_--_1_--dtor$2.c)
 *     _CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed_::_1_::dtor$2 @ 0x1800C9C6E (_CreativeFramework--SubscribedContentStore--RefreshSubscriptionLastAccessed_--_1_--dtor$2.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$1 @ 0x1800C9CEC (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$1.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$12 @ 0x1800C9E54 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$12.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$8 @ 0x1800CA1CD (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUp_ea_1800CA1CD.c)
 *     _Windows::Services::TargetedContent::Internal::ResolveCDMTaskName_::_1_::dtor$0 @ 0x1800CC18E (_Windows--Services--TargetedContent--Internal--ResolveCDMTaskName_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger_::_1_::dtor$4 @ 0x1800CC236 (_Windows--Services--TargetedContent--Internal--GetTaskNameForTrigger_--_1_--dtor$4.c)
 *     _Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger_::_1_::dtor$5 @ 0x1800CC248 (_Windows--Services--TargetedContent--Internal--GetTaskNameForTrigger_--_1_--dtor$5.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::SetLayoutType_::_1_::dtor$2 @ 0x1800CC27E (_CreativeFramework--TargetedContentLayoutHelpers--Settings--SetLayoutType_--_1_--dtor$2.c)
 *     _Windows::Services::TargetedContent::Internal::CreateTriggerKey_::_1_::dtor$4 @ 0x1800CC781 (_Windows--Services--TargetedContent--Internal--CreateTriggerKey_--_1_--dtor$4.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage_::_1_::dtor$0 @ 0x1800CF8EF (_CreativeFramework--NotificationManager--ToastHelpers--ResolveRatingImage_--_1_--dtor$0.c)
 *     _ShellMRTHelper::MRTHelperBase::Resolve_::_1_::dtor$0 @ 0x1800CFBBB (_ShellMRTHelper--MRTHelperBase--Resolve_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  a1[2] = 0LL;
}
