/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800AE678
 * Callers:
 *     ??1?$map@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x1800ABE0C (--1-$map@PEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@std@@U-$less@PEAUHWND__@@@3@V-$allocator@.c)
 *     ?_Destroy@?$_Ref_count_obj@VWin32AppInfo@@@std@@EEAAXXZ @ 0x1800AE2F0 (-_Destroy@-$_Ref_count_obj@VWin32AppInfo@@@std@@EEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_obj@VWin32ProcessInfo@@@std@@EEAAXXZ @ 0x1800AE340 (-_Destroy@-$_Ref_count_obj@VWin32ProcessInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A7B74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800A9710 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@2@@Z @ 0x1800AE444 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@std@@U-$less@PEAUH.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r10
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // r10
  _QWORD *v11; // rdi
  std::_Ref_count_base *v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v5 = a3;
  v8 = *a1;
  if ( a3 == *(_QWORD *)*a1 && a4 == v8 )
  {
    std::_Tree<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Erase(
      (__int64)a1,
      *(_QWORD **)(v8 + 8));
    *(_QWORD *)(*a1 + 8LL) = v8;
    *(_QWORD *)*a1 = v8;
    *(_QWORD *)(*a1 + 16LL) = v8;
    a1[1] = 0LL;
    *a2 = *(_QWORD *)*a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v15);
      v14 = v9;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v14);
      v11 = (_QWORD *)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>>::_Extract(
                        a1,
                        v10);
      v12 = (std::_Ref_count_base *)v11[6];
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
      std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)0x38);
      v5 = v15;
    }
    *a2 = v5;
  }
  return a2;
}
