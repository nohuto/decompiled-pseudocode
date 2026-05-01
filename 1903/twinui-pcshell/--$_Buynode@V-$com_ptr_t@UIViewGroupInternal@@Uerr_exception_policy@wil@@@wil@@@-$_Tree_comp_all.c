/*
 * XREFs of ??$_Buynode@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@?$_Tree_comp_alloc@V?$_Tset_traits@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@1@$$QEAV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18024C8E4
 * Callers:
 *     ?CreateViewGroup@ViewGroupManager@@UEAAJUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAU?$IEventHandler@PEAUIInspectable@@@Foundation@6@PEAPEAUIViewGroup@@@Z @ 0x18024CFE0 (-CreateViewGroup@ViewGroupManager@@UEAAJUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@2@XZ @ 0x18024DEBC (-_Buynode0@-$_Tree_comp_alloc@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_pol.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tset_traits<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>,0>>::_Buynode<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = std::_Tree_comp_alloc<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Buynode0(a1);
  *(_WORD *)(result + 24) = 0;
  v4 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(result + 32) = v4;
  return result;
}
