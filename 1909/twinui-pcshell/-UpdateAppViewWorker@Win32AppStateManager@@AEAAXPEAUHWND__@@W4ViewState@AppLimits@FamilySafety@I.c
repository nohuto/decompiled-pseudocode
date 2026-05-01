/*
 * XREFs of ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800BC19C
 * Callers:
 *     _lambda_db2cedfb0854aef668be6bda3030eb84_::operator() @ 0x1800BA918 (_lambda_db2cedfb0854aef668be6bda3030eb84_--operator().c)
 *     ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x1800BC010 (-UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafe.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18005CFC4 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180084F74 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008E838 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$Start@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@UpdateAppView@AppUsageTelemetry@@SA?AV01@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800B56A8 (--$Start@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@UpdateAppView@AppUsageTelemetr.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@1@@Z @ 0x1800B5DDC (--$_Insert_nohint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V.c)
 *     ??1UpdateAppView@AppUsageTelemetry@@QEAA@XZ @ 0x1800B6400 (--1UpdateAppView@AppUsageTelemetry@@QEAA@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     ?Stop@UpdateAppView@AppUsageTelemetry@@QEAAXPEBG_N1@Z @ 0x1800B70A8 (-Stop@UpdateAppView@AppUsageTelemetry@@QEAAXPEBG_N1@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@std@@@std@@@2@@Z @ 0x1800B83B8 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??$?0AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Ref_count_obj@VWin32AppInfo@@@std@@QEAA@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800B85F4 (--$-0AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Ref_count_obj@VWin32Ap.c)
 *     ??$DebugInfo@AEAY0DL@$$CBG@AppUsageTelemetry@@SAXAEAY0DL@$$CBG@Z @ 0x1800B8978 (--$DebugInfo@AEAY0DL@$$CBG@AppUsageTelemetry@@SAXAEAY0DL@$$CBG@Z.c)
 *     ??$_Assign@UExeData@@@?$_Optional_construct_base@UExeData@@@std@@QEAAX$$QEAUExeData@@@Z @ 0x1800B8F14 (--$_Assign@UExeData@@@-$_Optional_construct_base@UExeData@@@std@@QEAAX$$QEAUExeData@@@Z.c)
 *     ??$_Buynode@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV?$shared_ptr@VWin32AppInfo@@@1@@Z @ 0x1800B9154 (--$_Buynode@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@VWin3.c)
 *     ??0ExeData@@QEAA@AEBU0@@Z @ 0x1800BA448 (--0ExeData@@QEAA@AEBU0@@Z.c)
 *     ??1ExeData@@QEAA@XZ @ 0x1800BA798 (--1ExeData@@QEAA@XZ.c)
 *     ?DeleteCachedExeData@ExeDataCache@@QEAAXPEAUHWND__@@@Z @ 0x1800BABAC (-DeleteCachedExeData@ExeDataCache@@QEAAXPEAUHWND__@@@Z.c)
 *     ?FindExeDataForPid@Win32AppInfo@@QEAA?AV?$optional@UExeData@@@std@@I@Z @ 0x1800BAD5C (-FindExeDataForPid@Win32AppInfo@@QEAA-AV-$optional@UExeData@@@std@@I@Z.c)
 *     ?GetAppIdFromExePath@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x1800BAF5C (-GetAppIdFromExePath@ExePathToAppIdMapping@@QEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x1800BB348 (-IsProcessActive@Win32ProcessInfo@@QEAA_NXZ.c)
 *     ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x1800BB648 (-RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV-$basic_string@GU-$char_traits@G@.c)
 *     ?SaveAppIdForExePath@ExePathToAppIdMapping@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800BB8F0 (-SaveAppIdForExePath@ExePathToAppIdMapping@@QEAAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x1800BB974 (-SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800BC7D8 (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@2@AEBQEAUHWND__@@@Z @ 0x1800BD318 (-find@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND__@@@std@@V-$allocator@U-$pa.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800BD354 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$s.c)
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BDA5C (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x1800BDB18 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x1800BE2C8 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011F158 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18011F158.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180216A2C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall Win32AppStateManager::UpdateAppViewWorker(__int64 a1, RTL_SRWLOCK *a2, DWORD a3, __int64 a4)
{
  char v7; // r15
  RTL_SRWLOCK *v8; // rbx
  _QWORD *v9; // r10
  _QWORD *v10; // rcx
  __int64 v11; // r8
  char v12; // bl
  unsigned int v13; // edi
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  _BYTE *ExeDataForPid; // rax
  __int64 ProcessExePathAndAppId; // rbx
  _QWORD *v18; // rdx
  __int64 AppIdForSpecialCategoryApp; // rax
  __int64 AppIdFromExePath; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // rsi
  RTL_SRWLOCK *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r8
  unsigned __int16 **v27; // rdx
  const unsigned __int16 *v28; // rdx
  char v29; // [rsp+30h] [rbp-D0h]
  DWORD dwProcessId[2]; // [rsp+38h] [rbp-C8h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v33[32]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v34[32]; // [rsp+78h] [rbp-88h] BYREF
  char v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  _BYTE v38[80]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 *v39[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v40; // [rsp+110h] [rbp+10h]
  unsigned __int64 v41; // [rsp+118h] [rbp+18h]
  _QWORD v42[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v43; // [rsp+130h] [rbp+30h]
  unsigned __int64 v44; // [rsp+138h] [rbp+38h]
  RTL_SRWLOCK *v45; // [rsp+140h] [rbp+40h] BYREF
  std::_Ref_count_base *v46; // [rsp+148h] [rbp+48h]
  __int64 v47[4]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v48[320]; // [rsp+180h] [rbp+80h] BYREF

  v37 = -2LL;
  v36 = a4;
  dwProcessId[0] = a3;
  AppUsageTelemetry::UpdateAppView::Start<enum Windows::Internal::FamilySafety::AppLimits::ViewState &>(
    (AppUsageTelemetry::UpdateAppView *)v48,
    dwProcessId);
  v7 = 0;
  v29 = 0;
  v40 = 0LL;
  v41 = 7LL;
  LOWORD(v39[0]) = 0;
  SRWLock = a2;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)(a1 + 96), (RTL_SRWLOCK **)dwProcessId);
  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::find(
    a1 + 104,
    &v45,
    &SRWLock);
  if ( v45 == *(RTL_SRWLOCK **)(a1 + 104) )
  {
    memset_0(&v32, 0, 0x50uLL);
    LOBYTE(v32) = 0;
    v35 = 0;
  }
  else
  {
    ExeData::ExeData((ExeData *)&v32, (const struct ExeData *)&v45[5]);
    v35 = 1;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(dwProcessId);
  if ( a3 == 1 )
  {
    if ( !v35 )
      goto LABEL_56;
    std::wstring::operator=(v39, v34);
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 56), &SRWLock);
    std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::find(
      a1 + 64,
      &v45,
      v39);
    v8 = v45;
    if ( v45 != *(RTL_SRWLOCK **)(a1 + 64) )
    {
      Win32AppInfo::UpdateView(v45[8].Ptr, v32, (unsigned int)v33, (_DWORD)a2, 1);
      v9 = (_QWORD *)*((_QWORD *)v8[8].Ptr + 4);
      v10 = (_QWORD *)*v9;
      *(_QWORD *)dwProcessId = *v9;
      while ( v10 != v9 )
      {
        if ( Win32ProcessInfo::IsProcessActive((__int64 **)v10[5]) )
          goto LABEL_12;
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(dwProcessId);
        v10 = *(_QWORD **)dwProcessId;
      }
      v7 = 1;
      std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<UwpAppPackageInfo>,std::less<void>,std::allocator<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>,0>>::erase(
        a1 + 64,
        &v45,
        (__int64)v8);
    }
LABEL_12:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    ExeDataCache::DeleteCachedExeData((RTL_SRWLOCK *)(a1 + 96), (HWND)a2);
    if ( !v7 )
      goto LABEL_56;
    Win32AppStateManager::RemoveAppFromTerminationTarget(a1, (const WCHAR *)v39, 1);
    v12 = 0;
    goto LABEL_52;
  }
  v43 = 0LL;
  v44 = 7LL;
  LOWORD(v42[0]) = 0;
  if ( v35 )
  {
    v13 = v32;
LABEL_32:
    std::wstring::operator=(v42, v33);
    std::wstring::operator=(v39, v34);
    goto LABEL_45;
  }
  dwProcessId[0] = 0;
  GetWindowThreadProcessId((HWND)a2, dwProcessId);
  v13 = dwProcessId[0];
  if ( !dwProcessId[0] || v13 == GetCurrentProcessId() )
    goto LABEL_59;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)(a1 + 56), &v45);
  v14 = *(_QWORD **)(a1 + 64);
  v15 = (_QWORD *)*v14;
  *(_QWORD *)dwProcessId = *v14;
  while ( v15 != v14 )
  {
    ExeDataForPid = Win32AppInfo::FindExeDataForPid(v15[8], v38, v13);
    if ( ExeDataForPid[72] )
    {
      std::_Optional_construct_base<ExeData>::_Assign<ExeData>((__int64)&v32, (__int64)ExeDataForPid);
    }
    else if ( v35 )
    {
      ExeData::~ExeData((ExeData *)&v32);
      v35 = 0;
    }
    if ( v38[72] )
      ExeData::~ExeData((ExeData *)v38);
    if ( v35 )
    {
      ExeDataCache::SaveExeData(a1 + 96, (__int64)a2, v32);
      break;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(dwProcessId);
    v15 = *(_QWORD **)dwProcessId;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v45);
  if ( v35 )
    goto LABEL_32;
  ProcessExePathAndAppId = TryGetProcessExePathAndAppId(&v45, v13);
  std::wstring::operator=(v42, ProcessExePathAndAppId);
  std::wstring::operator=(v39, ProcessExePathAndAppId + 32);
  std::wstring::_Tidy_deallocate(v47);
  std::wstring::_Tidy_deallocate(&v45);
  if ( !v43 )
  {
LABEL_59:
    std::wstring::_Tidy_deallocate(v42);
    goto LABEL_60;
  }
  if ( v40 )
  {
    AppUsageTelemetry::DebugInfo<unsigned short const (&)[59]>(0LL);
  }
  else
  {
    v18 = v42;
    if ( v44 >= 8 )
      v18 = (_QWORD *)v42[0];
    AppIdForSpecialCategoryApp = GetAppIdForSpecialCategoryApp(&v45, v18, v13);
    std::wstring::operator=(v39, AppIdForSpecialCategoryApp);
    std::wstring::_Tidy_deallocate(&v45);
  }
  if ( !v40 )
  {
    AppIdFromExePath = ExePathToAppIdMapping::GetAppIdFromExePath(
                         (RTL_SRWLOCK *)(a1 + 120),
                         (__int64)&v45,
                         (__int64)v42);
    std::wstring::operator=(v39, AppIdFromExePath);
    std::wstring::_Tidy_deallocate(&v45);
    if ( !v40 )
    {
      v21 = v42;
      if ( v44 >= 8 )
        v21 = (_QWORD *)v42[0];
      v22 = ComputeAppIdFromExePath(&v45, v21);
      std::wstring::operator=(v39, v22);
      std::wstring::_Tidy_deallocate(&v45);
      ExePathToAppIdMapping::SaveAppIdForExePath(a1 + 120);
    }
  }
  ExeDataCache::SaveExeData(a1 + 96, (__int64)a2, v13);
LABEL_45:
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 56), &SRWLock);
  v23 = (__int64 *)(a1 + 64);
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::find(
    v23,
    &v45,
    v39);
  if ( v45 == (RTL_SRWLOCK *)*v23 )
  {
    v45 = (RTL_SRWLOCK *)operator new(0x40uLL);
    v24 = (RTL_SRWLOCK *)std::_Ref_count_obj<Win32AppInfo>::_Ref_count_obj<Win32AppInfo>((__int64)v45);
    v45 = v24 + 2;
    v46 = (std::_Ref_count_base *)v24;
    Win32AppInfo::UpdateView((_DWORD)v24 + 16, v13, (unsigned int)v42, (_DWORD)a2, a3);
    v25 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::_Buynode<std::wstring &,std::shared_ptr<Win32AppInfo>>(
            v23,
            (__int64)v39,
            &v45);
    std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<UwpAppPackageInfo>,std::less<void>,std::allocator<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>,0>>::_Insert_nohint<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>> &,std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>,void *> *>(
      v23,
      (__int64)dwProcessId,
      v26,
      (__int64)(v25 + 4),
      (__int64)v25);
    v12 = 1;
    v29 = 1;
    if ( v46 )
      std::_Ref_count_base::_Decref(v46);
  }
  else
  {
    Win32AppInfo::UpdateView(v45[8].Ptr, v13, (unsigned int)v42, (_DWORD)a2, a3);
    v12 = 0;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  std::wstring::_Tidy_deallocate(v42);
  if ( v12 )
    goto LABEL_53;
LABEL_52:
  if ( v7 )
  {
LABEL_53:
    v27 = v39;
    if ( v41 >= 8 )
      v27 = (unsigned __int16 **)v39[0];
    LOBYTE(v11) = v12;
    (*(void (__fastcall **)(__int64, unsigned __int16 **, __int64))(*(_QWORD *)v36 + 24LL))(v36, v27, v11);
  }
LABEL_56:
  v28 = (const unsigned __int16 *)v39;
  if ( v41 >= 8 )
    v28 = v39[0];
  AppUsageTelemetry::UpdateAppView::Stop((AppUsageTelemetry::UpdateAppView *)v48, v28, v29, v7);
LABEL_60:
  if ( v35 )
    ExeData::~ExeData((ExeData *)&v32);
  std::wstring::_Tidy_deallocate(v39);
  AppUsageTelemetry::UpdateAppView::~UpdateAppView((AppUsageTelemetry::UpdateAppView *)v48);
}
