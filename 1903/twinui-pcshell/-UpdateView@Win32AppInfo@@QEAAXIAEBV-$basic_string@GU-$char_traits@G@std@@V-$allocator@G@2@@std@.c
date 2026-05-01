/*
 * XREFs of ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800ADED8
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800AD89C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Buynode@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@1@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@1@@Z @ 0x1800AA6D0 (--$_Buynode@AEAIAEAV-$shared_ptr@VWin32ProcessInfo@@@std@@@-$_Tree_comp_alloc@V-$_Tmap_traits@IV.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@1@@Z @ 0x1800AB220 (--$_Insert_nohint@AEAU-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAU-$_Tree_node@.c)
 *     ??$make_shared@VWin32ProcessInfo@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VWin32ProcessInfo@@@0@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x1800ABA4C (--$make_shared@VWin32ProcessInfo@@AEAIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 *     ?UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800ADFAC (-UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windo.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800AE9D0 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_ex.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppInfo::UpdateView(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v10; // [rsp+40h] [rbp-28h]
  _BYTE v11[32]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF

  v13 = a2;
  v6 = (__int64 *)(a1 + 32);
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::find(
    a1 + 32,
    &v12,
    &v13);
  if ( v12 == *v6 )
  {
    std::make_shared<Win32ProcessInfo,unsigned int &,std::wstring const &>(&v9, &v13);
    Win32ProcessInfo::UpdateView(v9, a4, a5);
    v7 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::_Buynode<unsigned int &,std::shared_ptr<Win32ProcessInfo> &>(
           v6,
           &v13,
           &v9);
    std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::_Insert_nohint<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>> &,std::_Tree_node<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>,void *> *>(
      v6,
      (__int64)v11,
      v8,
      (_DWORD *)v7 + 8,
      (__int64)v7);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
  else
  {
    Win32ProcessInfo::UpdateView(*(_QWORD *)(v12 + 40), a4, a5);
  }
}
