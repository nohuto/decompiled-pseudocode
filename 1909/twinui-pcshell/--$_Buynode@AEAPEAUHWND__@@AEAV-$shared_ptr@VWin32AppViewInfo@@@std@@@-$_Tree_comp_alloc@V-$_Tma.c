/*
 * XREFs of ??$_Buynode@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@1@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@1@@Z @ 0x1800B903C
 * Callers:
 *     ?UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800BC8AC (-UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windo.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@2@XZ @ 0x1800B7D08 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@std@.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Buynode<HWND__ * &,std::shared_ptr<Win32AppViewInfo> &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v5; // r9
  __int64 v6; // rax

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Buynode0(a1);
  *((_WORD *)v5 + 12) = 0;
  v5[4] = *a2;
  v5[5] = 0LL;
  v5[6] = 0LL;
  v6 = a3[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  v5[5] = *a3;
  v5[6] = a3[1];
  return v5;
}
