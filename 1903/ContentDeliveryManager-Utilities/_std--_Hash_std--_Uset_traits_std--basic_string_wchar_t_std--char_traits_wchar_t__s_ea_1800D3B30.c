/*
 * XREFs of _std::_Hash_std::_Uset_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::_Uhash_compare_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______0___::_Insert_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const_&_std::_Nil__::_1_::catch$0 @ 0x1800D3B30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Make_iter@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEBA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@std@@@std@@@2@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180042998 (-_Make_iter@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@V32@@Z @ 0x180089458 (-erase@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@.c)
 *     _CxxThrowException_0 @ 0x1800CB04C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Hash_std::_Uset_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::_Uhash_compare_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______0___::_Insert_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const___std::_Nil__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *iter; // rax

  iter = std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::_Make_iter(
           a1,
           (_QWORD *)(a2 + 112),
           *(_QWORD *)(a2 + 112));
  std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
    *(_QWORD **)(a2 + 96),
    (_QWORD *)(a2 + 40),
    (_QWORD *)*iter);
  throw;
}
