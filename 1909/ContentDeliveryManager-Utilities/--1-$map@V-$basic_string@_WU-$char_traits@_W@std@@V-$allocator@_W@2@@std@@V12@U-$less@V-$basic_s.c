/*
 * XREFs of ??1?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAA@XZ @ 0x18003EEE8
 * Callers:
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$4 @ 0x1800CDF4E (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$4.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$0 @ 0x1800CDFF0 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$0 @ 0x1800CE1D8 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800CE1D8.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1800CF359 (_Windows--Services--TargetedContent--Internal--TargetedContentActionInternalImpl--R_ea_1800CF359.c)
 *     _CreativeFramework::Actions::GetActionService_::_1_::dtor$0 @ 0x1800D1B96 (_CreativeFramework--Actions--GetActionService_--_1_--dtor$0.c)
 *     _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$4 @ 0x1800D30E0 (_CreativeFramework--Actions--NotificationManagerService--NotificationManagerService_ea_1800D30E0.c)
 *     _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$22 @ 0x1800D3162 (_CreativeFramework--Actions--NotificationManagerService--NotificationManagerService_ea_1800D3162.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@Z @ 0x180042EC0 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
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
