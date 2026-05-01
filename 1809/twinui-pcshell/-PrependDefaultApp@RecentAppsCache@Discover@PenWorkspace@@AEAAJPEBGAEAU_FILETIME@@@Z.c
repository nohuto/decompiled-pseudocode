/*
 * XREFs of ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x18019B480
 * Callers:
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019A50C (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x18019AC90 (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800535D0 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18006C29C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x18006D274 (--$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA-AV-$shared_ptr@UAppUsageData@Dis.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180198B94 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180199084 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct _FILETIME *a3)
{
  unsigned __int64 v6; // r8
  void *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  const char *v10; // r9
  __int64 result; // rax
  RTL_SRWLOCK *v12[2]; // [rsp+30h] [rbp-38h] BYREF
  void *v13; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v14; // [rsp+48h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v12[1] = (RTL_SRWLOCK *)-2LL;
  try
  {
    std::make_shared<PenWorkspace::Discover::AppUsageData,>((__int64 *)&v13);
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    std::wstring::assign((char *)v13, a2, v6);
    *((_DWORD *)v13 + 8) = 15;
    *((_BYTE *)v13 + 44) = 1;
    v17 = *(_QWORD *)a3 + 10000000LL;
    *a3 = (struct _FILETIME)v17;
    *(struct _FILETIME *)((char *)v13 + 36) = *a3;
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v12, this + 21);
    v7 = v13;
    std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::lower_bound(
      &this[2].Ptr,
      &v17,
      (char *)v13);
    v9 = v17;
    if ( (PVOID)v17 == this[3].Ptr )
    {
      v17 = (__int64)v7;
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<std::wstring const &>,std::tuple<>>(
        (__int64)&this[2],
        (__int64)&v15,
        v8,
        (__int64)&v17);
      v9 = v15;
    }
    std::shared_ptr<PeoplePaneViewInfo>::operator=((_QWORD *)(v9 + 48), &v13);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v12);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v17) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x2EA,
                     (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                     v10);
    return (unsigned int)v17;
  }
  return result;
}
