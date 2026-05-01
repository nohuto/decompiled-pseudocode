/*
 * XREFs of _lambda_dd8f4aabae2ca26411facba6a281aa4a_::operator() @ 0x18022CDC4
 * Callers:
 *     wil::details::ScopeExitFn__lambda_dd8f4aabae2ca26411facba6a281aa4a___::_ScopeExitFn__lambda_dd8f4aabae2ca26411facba6a281aa4a___ @ 0x18022C530 (wil--details--ScopeExitFn__lambda_dd8f4aabae2ca26411facba6a281aa4a___--_ScopeExitFn__lambda_dd8f.c)
 *     ?AddChild@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAUITreeNode@234@PEAI@Z @ 0x18022D630 (-AddChild@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAUITreeNode@234@PEAI@Z.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800BD2D0 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_ex.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180236484 (-erase@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_e.c)
 */

void __fastcall lambda_dd8f4aabae2ca26411facba6a281aa4a_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int **v3; // rax
  _DWORD *Ptr; // r10
  __int64 v5; // r11
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1 + 2;
  AcquireSRWLockExclusive(v2);
  v3 = (unsigned int **)a1[1];
  if ( **v3 )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::find(
      (__int64 **)&(*a1)[5],
      &v6,
      *v3);
    if ( v6 != *(__int64 **)(v5 + 40) )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::erase(
        v5 + 40,
        &v6);
      Ptr = a1[1]->Ptr;
    }
    *Ptr = 0;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
