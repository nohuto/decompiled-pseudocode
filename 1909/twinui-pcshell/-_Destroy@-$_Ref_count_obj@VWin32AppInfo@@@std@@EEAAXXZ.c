/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VWin32AppInfo@@@std@@EEAAXXZ @ 0x1800BCBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800BCF78 (-erase@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VWin32ProcessInfo@@@std@@U-$less@I@2@V-$allocator@.c)
 */

__int64 __fastcall std::_Ref_count_obj<Win32AppInfo>::_Destroy(__int64 a1)
{
  _QWORD *v1; // rdi
  void **v2; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 16);
  v2 = (void **)(a1 + 48);
  std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::erase(
    a1 + 48,
    &v4,
    **(_QWORD **)(a1 + 48));
  std::_Deallocate<16,0>(*v2, (const struct std::nothrow_t *)0x38);
  return std::wstring::_Tidy_deallocate(v1);
}
