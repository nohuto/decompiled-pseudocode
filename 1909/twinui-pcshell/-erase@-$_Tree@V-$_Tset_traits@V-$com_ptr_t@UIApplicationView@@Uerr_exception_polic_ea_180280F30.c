/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V32@0@Z @ 0x180280F30
 * Callers:
 *     ??1?$set@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@@std@@QEAA@XZ @ 0x18027DE4C (--1-$set@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U-$less@X@std@@V-$allo.c)
 *     ??1ViewGroup@@EEAA@XZ @ 0x18027DF18 (--1ViewGroup@@EEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180280FD4 (-erase@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_polic_ea_180280FD4.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@2@@Z @ 0x18026D4A0 (-_Erase@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wi.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V32@@Z @ 0x18026D504 (-erase@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::erase(
        _QWORD **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // r10
  _QWORD *v8; // rsi
  __int64 v9; // r10
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v5 = a3;
  v8 = *a1;
  if ( a3 == (_QWORD *)**a1 && a4 == v8 )
  {
    std::_Tree<std::_Tset_traits<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>,0>>::_Erase(
      (__int64)a1,
      (__int64 *)v8[1]);
    (*a1)[1] = v8;
    **a1 = v8;
    (*a1)[2] = v8;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v12);
      std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::erase(
        (__int64)a1,
        &v11,
        v9);
      v5 = v12;
    }
    *a2 = v5;
  }
  return a2;
}
