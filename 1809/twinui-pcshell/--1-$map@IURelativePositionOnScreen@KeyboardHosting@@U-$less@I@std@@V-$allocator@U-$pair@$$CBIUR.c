/*
 * XREFs of ??1?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAA@XZ @ 0x1801D5440
 * Callers:
 *     _TabViewManager::RecoverTabGroupsFromWindowGroups_::_1_::dtor$1 @ 0x1801E39E6 (_TabViewManager--RecoverTabGroupsFromWindowGroups_--_1_--dtor$1.c)
 *     _std::map_unsigned_int_unsigned_short_const_____ptr64_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__unsigned_short_const_____ptr64_____::map_unsigned_int_unsigned_short_const_____ptr64_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__unsigned_short_const_____ptr64______::_1_::dtor$0 @ 0x1802C0535 (_std--map_unsigned_int_unsigned_short_const_____ptr64_std--less_unsigned_int__std--allocator_std.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$1 @ 0x1802C0993 (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$2 @ 0x1802C09A3 (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$2.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$6 @ 0x1802C0A0C (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$6.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x1801F115C (-erase@-$_Tree@V-$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U-$less@.c)
 */

void __fastcall std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::~map<unsigned int,KeyboardHosting::RelativePositionOnScreen>(
        void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
