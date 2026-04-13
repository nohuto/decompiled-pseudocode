/*
 * XREFs of ??1?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAA@XZ @ 0x18003DD18
 * Callers:
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$4 @ 0x1800C9D22 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$4.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$0 @ 0x1800C9DC4 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$0 @ 0x1800C9FBE (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800C9FBE.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1800CB179 (_Windows--Services--TargetedContent--Internal--TargetedContentActionInternalImpl--R_ea_1800CB179.c)
 *     _CreativeFramework::Actions::GetActionService_::_1_::dtor$0 @ 0x1800CD860 (_CreativeFramework--Actions--GetActionService_--_1_--dtor$0.c)
 *     _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$4 @ 0x1800CEDC0 (_CreativeFramework--Actions--NotificationManagerService--NotificationManagerService_ea_1800CEDC0.c)
 *     _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$22 @ 0x1800CEE42 (_CreativeFramework--Actions--NotificationManagerService--NotificationManagerService_ea_1800CEE42.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@Z @ 0x180041C80 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
 */

void __fastcall std::map<std::wstring,std::wstring>::~map<std::wstring,std::wstring>(void **a1)
{
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Erase(
    a1,
    *((_QWORD *)*a1 + 1));
  *((_QWORD *)*a1 + 1) = *a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 2) = *a1;
  a1[1] = 0LL;
  operator delete(*a1);
}
