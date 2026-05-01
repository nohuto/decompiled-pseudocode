/*
 * XREFs of ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800B7680
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180084F74 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??$find@PEBGU?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@std@@@std@@@1@AEBQEBG@Z @ 0x1800B6124 (--$find@PEBGU-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$a.c)
 *     ??0?$shared_ptr@VUwpAppPackageInfo@@@std@@QEAA@AEBV01@@Z @ 0x1800B62B8 (--0-$shared_ptr@VUwpAppPackageInfo@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetActiveViews@UwpAppPackageInfo@@QEAA?AV?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800B683C (-GetActiveViews@UwpAppPackageInfo@@QEAA-AV-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exc.c)
 *     ?_Move_from@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX$$QEAV12@U?$integral_constant@_N$00@2@@Z @ 0x1800B82C4 (-_Move_from@-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$al.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800B82F0 (-_Tidy@-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocat.c)
 *     ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x1800BD58C (-CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011F158 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18011F158.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall UwpAppStateManager::TerminateApp(__int64 a1, __int64 a2)
{
  __int64 *ActiveViews; // rbx
  __int64 v4; // r9
  struct IWinRTApplicationView **v5; // rdi
  struct IWinRTApplicationView **i; // rbx
  __int64 v8; // [rsp+28h] [rbp-48h] BYREF
  std::_Ref_count_base *v9; // [rsp+30h] [rbp-40h]
  __int128 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  __int64 v12[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+90h] [rbp+20h] BYREF
  __int64 v14; // [rsp+98h] [rbp+28h] BYREF
  RTL_SRWLOCK *v15; // [rsp+A8h] [rbp+38h] BYREF

  v14 = a2;
  v10 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)(a1 + 48), &v15);
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<UwpAppPackageInfo>,std::less<void>,std::allocator<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>,0>>::find<unsigned short const *,std::less<void>,int>(
    (__int64 *)(a1 + 56),
    &v13,
    &v14);
  if ( v13 != *(_QWORD *)(a1 + 56) )
  {
    std::shared_ptr<UwpAppPackageInfo>::shared_ptr<UwpAppPackageInfo>(&v8, (_QWORD *)(v13 + 64));
    ActiveViews = UwpAppPackageInfo::GetActiveViews(v8, v12);
    if ( &v10 != (__int128 *)ActiveViews )
    {
      std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(&v10);
      std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Move_from(
        &v10,
        ActiveViews,
        0LL,
        v4,
        -2LL,
        v8);
    }
    std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(v12);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
  v5 = (struct IWinRTApplicationView **)*((_QWORD *)&v10 + 1);
  for ( i = (struct IWinRTApplicationView **)v10; i != v5; ++i )
    CloseWinRTApplicationView(*i);
  return std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(&v10);
}
