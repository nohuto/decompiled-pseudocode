/*
 * XREFs of ??1?$set@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@@std@@QEAA@XZ @ 0x180205FC8
 * Callers:
 *     _ViewGroup::ViewGroup_::_1_::dtor$7 @ 0x180205E3D (_ViewGroup--ViewGroup_--_1_--dtor$7.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V32@0@Z @ 0x1801FB204 (-erase@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil.c)
 */

void __fastcall std::set<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::~set<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>(
        void **a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tset_traits<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>,0>>::erase(
    (_QWORD **)a1,
    &v2,
    *(_QWORD **)*a1,
    *a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
