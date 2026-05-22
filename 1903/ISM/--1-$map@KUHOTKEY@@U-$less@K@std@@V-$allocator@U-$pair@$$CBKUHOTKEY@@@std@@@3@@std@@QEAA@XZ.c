/*
 * XREFs of ??1?$map@KUHOTKEY@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUHOTKEY@@@std@@@3@@std@@QEAA@XZ @ 0x180145A00
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$10 @ 0x1801459E2 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$10.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUHOTKEY@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUHOTKEY@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUHOTKEY@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUHOTKEY@@@std@@@std@@@std@@@2@0@Z @ 0x18014746C (-erase@-$_Tree@V-$_Tmap_traits@KUHOTKEY@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKUHOTKEY@@@std@.c)
 */

void __fastcall std::map<unsigned long,HOTKEY>::~map<unsigned long,HOTKEY>(void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned long,HOTKEY,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,HOTKEY>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x48);
}
