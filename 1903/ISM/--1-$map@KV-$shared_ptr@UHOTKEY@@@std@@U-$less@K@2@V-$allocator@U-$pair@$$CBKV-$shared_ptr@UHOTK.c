/*
 * XREFs of ??1?$map@KV?$shared_ptr@UHOTKEY@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180145A34
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$1 @ 0x18014594C (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$1.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@UHOTKEY@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x180147574 (-erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@UHOTKEY@@@std@@U-$less@K@2@V-$allocator@U-$pair@$$.c)
 */

void __fastcall std::map<unsigned long,std::shared_ptr<HOTKEY>>::~map<unsigned long,std::shared_ptr<HOTKEY>>(void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<HOTKEY>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<HOTKEY>>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x38);
}
