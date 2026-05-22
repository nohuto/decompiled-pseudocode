/*
 * XREFs of ??1?$set@IU?$less@I@std@@V?$allocator@I@2@@std@@QEAA@XZ @ 0x180145AA8
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$2 @ 0x18014599C (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$2.c)
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$11 @ 0x180145A2E (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$11.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@0@Z @ 0x180147748 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA-AV-$_Tree_c.c)
 */

void __fastcall std::set<unsigned int>::~set<unsigned int>(void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1,
    *a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
