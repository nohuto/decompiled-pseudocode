/*
 * XREFs of ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1801FFB98
 * Callers:
 *     ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x1801FBB40 (-GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x1801FE048 (--$_Emplace_reallocate@AEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UI.c)
 *     ??1?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAA@XZ @ 0x1801FF048 (--1-$vector@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAPEAUIDiscoverRecentItem@@@Z @ 0x1801FF34C (-CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV-$shared_ptr@UAppUsageData@Discov.c)
 *     ?EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801FF6A0 (-EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1801FFE58 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x1802001A8 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetMRUApps(
        PenWorkspace::Discover::RecentAppsCache *this,
        int a2,
        char **a3)
{
  char **v3; // rdi
  int v4; // r15d
  PenWorkspace::Discover::RecentAppsCache *v5; // r14
  int SortedAppList; // eax
  unsigned int v7; // esi
  void *v8; // rdi
  char *i; // rbx
  std::_Ref_count_base *v10; // rcx
  int v12; // eax
  char *j; // rbx
  std::_Ref_count_base *v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rcx
  char *v19; // rdx
  const char *v20; // r9
  _QWORD *v21; // [rsp+28h] [rbp-80h]
  __int128 v22; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-58h] BYREF
  char *v24; // [rsp+60h] [rbp-48h] BYREF
  __int128 v25; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v30; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  v24 = 0LL;
  v25 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, &v24);
  v7 = SortedAppList;
  if ( SortedAppList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
    v8 = v24;
    if ( !v24 )
      return v7;
    for ( i = v24; i != (char *)v25; i += 16 )
    {
      v10 = (std::_Ref_count_base *)*((_QWORD *)i + 1);
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
    }
LABEL_7:
    std::_Deallocate<16,0>(
      v8,
      (const struct std::nothrow_t *)((*((_QWORD *)&v25 + 1) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL));
    return v7;
  }
  v12 = PenWorkspace::Discover::RecentAppsCache::EnsureUnifiedTileManager(v5);
  v7 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v12);
    v8 = v24;
    if ( !v24 )
      return v7;
    for ( j = v24; j != (char *)v25; j += 16 )
    {
      v14 = (std::_Ref_count_base *)*((_QWORD *)j + 1);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
    goto LABEL_7;
  }
  v15 = v24;
  v16 = (_QWORD *)v25;
  v21 = (_QWORD *)v25;
  while ( v15 != v16 )
  {
    v17 = v15[1];
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      v17 = v15[1];
    }
    v23[0] = *v15;
    v23[1] = v17;
    if ( (unsigned __int8)PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(v5, v23) )
    {
      v30 = 0LL;
      v22 = 0LL;
      v18 = v15[1];
      if ( v18 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        v18 = v15[1];
      }
      *(_QWORD *)&v22 = *v15;
      *((_QWORD *)&v22 + 1) = v18;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      if ( (int)PenWorkspace::Discover::RecentAppsCache::CreateRecentItem((__int64)v5, (__int64)&v22, &v30) >= 0 )
      {
        v19 = v3[1];
        if ( v3[2] == v19 )
        {
          std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IDiscoverRecentItem> &>(
            v3,
            v19,
            &v30);
        }
        else
        {
          *(_QWORD *)v19 = v30;
          if ( v30 )
          {
            try
            {
              (*(void (**)(void))(*(_QWORD *)v30 + 8LL))();
            }
            catch ( ... )
            {
              wil::details::in1diag3::Log_CaughtException(
                retaddr,
                (void *)0xC4,
                (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                v20);
              v5 = this;
              v3 = a3;
              v4 = a2;
              v16 = v21;
              goto LABEL_30;
            }
          }
          v3[1] += 8;
        }
        if ( (int)((v3[1] - *v3) >> 3) >= v4 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
          break;
        }
      }
LABEL_30:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    }
    v15 += 2;
  }
  std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>((__int64)&v24);
  return 0LL;
}
