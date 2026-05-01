/*
 * XREFs of ??$_Buynode@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@1@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@1@@Z @ 0x1800B8FB0
 * Callers:
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800BC7D8 (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@2@XZ @ 0x1800B7D08 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@std@.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::_Buynode<unsigned int &,std::shared_ptr<Win32ProcessInfo> &>(
        _QWORD *a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _QWORD *v5; // r9
  __int64 v6; // rax

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Buynode0(a1);
  *((_WORD *)v5 + 12) = 0;
  *((_DWORD *)v5 + 8) = *a2;
  v5[5] = 0LL;
  v5[6] = 0LL;
  v6 = a3[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  v5[5] = *a3;
  v5[6] = a3[1];
  return v5;
}
