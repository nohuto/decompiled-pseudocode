/*
 * XREFs of ??$_Insert_or_assign@AEBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUHICON__@@@?$map@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@@std@@@std@@@std@@@std@@_N@1@AEBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUHICON__@@@Z @ 0x1802500FC
 * Callers:
 *     ?GetIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180252498 (-GetIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Inte.c)
 * Callees:
 *     ??$_Buynode@AEBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUHICON__@@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@@std@@PEAX@1@AEBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUHICON__@@@Z @ 0x18024EC30 (--$_Buynode@AEBV-$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUHICO.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@@std@@PEAX@1@@Z @ 0x18024F2F4 (--$_Insert_hint@AEAU-$pair@$$CBV-$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@.c)
 */

__int64 __fastcall std::map<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,HICON__ *>::_Insert_or_assign<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const &,HICON__ * &>(
        __int64 **a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  v7 = (*a1)[1];
  if ( *(_BYTE *)(v7 + 25) )
    goto LABEL_10;
  v8 = *a3;
  do
  {
    if ( *(_QWORD *)(v7 + 32) >= v8 )
    {
      v4 = (__int64 *)v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  while ( !*(_BYTE *)(v7 + 25) );
  if ( v4 == *a1 || v8 < v4[4] )
  {
LABEL_10:
    v9 = std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,HICON__ *,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,HICON__ *>>,0>>::_Buynode<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const &,HICON__ * &>(
           a1,
           a3,
           a4);
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,HICON__ *,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,HICON__ *>>,0>>::_Insert_hint<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,HICON__ *> &,std::_Tree_node<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,HICON__ *>,void *> *>(
      (__int64 *)a1,
      &v11,
      v4,
      v9 + 4,
      (__int64)v9);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    v4[5] = *a4;
    *(_QWORD *)a2 = v4;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
