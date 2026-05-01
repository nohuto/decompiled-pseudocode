/*
 * XREFs of ??$_Buynode@AEAPEAUIApplicationView@@@?$_Tree_comp_alloc@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@AEAPEAUIApplicationView@@@Z @ 0x180205A6C
 * Callers:
 *     ?AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x180206300 (-AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@2@XZ @ 0x1801FB10C (-_Buynode0@-$_Tree_comp_alloc@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_pol.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Buynode<IApplicationView * &>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // [rsp+40h] [rbp+8h]

  v4 = std::_Tree_comp_alloc<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Buynode0(a1);
  *((_WORD *)v4 + 12) = 0;
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    v4 + 4,
    *a2);
  return v4;
}
