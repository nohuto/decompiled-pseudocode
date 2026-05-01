/*
 * XREFs of ??$?0AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Ref_count_obj@VUwpAppPackageInfo@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800A6BC8
 * Callers:
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x1800A8EB0 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005DAD0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@2@XZ @ 0x1800A9364 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@s.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Ref_count_obj<UwpAppPackageInfo>::_Ref_count_obj<UwpAppPackageInfo>(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v5; // [rsp+28h] [rbp-40h] BYREF
  _QWORD *v6; // [rsp+80h] [rbp+18h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<UwpAppPackageInfo>::`vftable';
  v2 = a1 + 16;
  v6 = (_QWORD *)std::wstring::wstring((__int64)&v5);
  std::wstring::wstring(v2);
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 32) = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Buyheadnode(v3);
  std::wstring::_Tidy_deallocate(v6);
  return a1;
}
