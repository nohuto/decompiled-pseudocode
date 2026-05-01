/*
 * XREFs of ??$_Buynode@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@U?$less@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@1@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@1@@Z @ 0x1800A6DA8
 * Callers:
 *     ?UpdateView@UwpAppPackageInfo@@QEAAXPEAUIWinRTApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800A91EC (-UpdateView@UwpAppPackageInfo@@QEAAXPEAUIWinRTApplicationView@@W4ViewState@AppLimits@FamilySafet.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@2@XZ @ 0x1800A9428 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@std@.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>,std::shared_ptr<UwpAppViewInfo>,std::less<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>>,0>>::_Buynode<IWinRTApplicationView * &,std::shared_ptr<UwpAppViewInfo> &>(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Buynode0(a1);
  *(_WORD *)(v5 + 24) = 0;
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    (_QWORD *)(v5 + 32),
    *a2);
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_QWORD *)(v5 + 48) = 0LL;
  v6 = a3[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_QWORD *)(v5 + 40) = *a3;
  *(_QWORD *)(v5 + 48) = a3[1];
  return v5;
}
