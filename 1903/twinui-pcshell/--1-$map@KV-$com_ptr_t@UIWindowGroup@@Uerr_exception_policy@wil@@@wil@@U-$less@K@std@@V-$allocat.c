/*
 * XREFs of ??1?$map@KV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAA@XZ @ 0x18025CC9C
 * Callers:
 *     _WindowGroupManager::WindowGroupManager_::_1_::dtor$1 @ 0x18025CBCA (_WindowGroupManager--WindowGroupManager_--_1_--dtor$1.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x18025DD08 (-erase@-$_Tree@V-$_Tmap_traits@KV-$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@U-$.c)
 */

void __fastcall std::map<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>::~map<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>(
        void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
