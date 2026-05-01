/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VWin32ProcessInfo@@@std@@EEAAXXZ @ 0x1800AE340
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800AE678 (-erase@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VWin32ProcessInfo@@@std@@U-$less@I@2@V-$allocator@.c)
 */

void __fastcall std::_Ref_count_obj<Win32ProcessInfo>::_Destroy(__int64 a1)
{
  void **v1; // rbx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = (void **)(a1 + 16);
  std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 40));
  std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::erase(
    v1,
    &v2,
    *(_QWORD *)*v1);
  std::_Deallocate<16,0>(*v1, (const struct std::nothrow_t *)0x38);
}
