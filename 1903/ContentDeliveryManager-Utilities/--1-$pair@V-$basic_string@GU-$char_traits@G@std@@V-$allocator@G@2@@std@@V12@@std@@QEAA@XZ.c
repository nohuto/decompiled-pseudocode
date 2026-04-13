/*
 * XREFs of ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18003E444
 * Callers:
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$12 @ 0x1800CDE2A (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$12.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$8 @ 0x1800CE0A2 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800CE0A2.c)
 *     _std::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::operator[]_::_1_::dtor$1 @ 0x1800CF385 (_std--map_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--al_ea_1800CF385.c)
 *     _CreativeFramework::Actions::ResolveTargetPackageFamilyNameForLaunch_::_1_::dtor$0 @ 0x1800D2BB6 (_CreativeFramework--Actions--ResolveTargetPackageFamilyNameForLaunch_--_1_--dtor$0.c)
 *     _CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor$0 @ 0x1800D2BE2 (_CreativeFramework--Actions--MakeLaunchUriService_--_1_--dtor$0.c)
 *     _std::map_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::less_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t_________::operator[]_::_1_::dtor$1 @ 0x1800D3ACF (_std--map_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t____std--bas.c)
 * Callees:
 *     <none>
 */

void __fastcall std::pair<std::wstring,std::wstring>::~pair<std::wstring,std::wstring>(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 56) >= 8uLL )
    operator delete(*(void **)(a1 + 32));
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_WORD *)(a1 + 32) = 0;
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    operator delete(*(void **)a1);
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
}
