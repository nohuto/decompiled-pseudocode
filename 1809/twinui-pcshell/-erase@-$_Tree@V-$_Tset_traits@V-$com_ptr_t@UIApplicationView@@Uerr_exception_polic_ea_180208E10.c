/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180208E10
 * Callers:
 *     ?RemoveView@ViewGroup@@UEAAJPEAUIApplicationView@@W4SelectedViewRemovalBehavior@@@Z @ 0x180207CF0 (-RemoveView@ViewGroup@@UEAAJPEAUIApplicationView@@W4SelectedViewRemovalBehavior@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D5F9C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V32@0@Z @ 0x1801FB204 (-erase@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::erase(
        _QWORD **a1,
        unsigned __int64 *a2)
{
  _QWORD *v2; // r11
  __int64 v3; // rbx
  _QWORD *v5; // r10
  __int64 *v6; // rax
  __int64 *v7; // r8
  unsigned __int64 v8; // r9
  _QWORD *v9; // rax
  _QWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v5 = *a1;
  v6 = (__int64 *)(*a1)[1];
  v7 = v6;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( v7[4] >= v8 )
      {
        if ( *((_BYTE *)v5 + 25) && v8 < v7[4] )
          v5 = v7;
        v2 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = (__int64 *)*v5;
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( *a2 >= v6[4] )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  v9 = v2;
  v11 = v2;
  while ( v9 != v5 )
  {
    ++v3;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,Windows::Internal::ApplicationModel::WindowManagement::WindowId>>>,std::_Iterator_base0>::operator++(&v11);
    v9 = v11;
  }
  std::_Tree<std::_Tset_traits<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>,0>>::erase(
    a1,
    &v11,
    v2,
    v5);
  return v3;
}
