/*
 * XREFs of ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180199ABC
 * Callers:
 *     ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x180195A30 (-GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x180197E94 (--$_Emplace_reallocate@AEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UI.c)
 *     ?CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAPEAUIDiscoverRecentItem@@@Z @ 0x18019929C (-CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV-$shared_ptr@UAppUsageData@Discov.c)
 *     ?EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801995EC (-EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x180199DC8 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18019A0A0 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetMRUApps(
        PenWorkspace::Discover::RecentAppsCache *this,
        int a2,
        char **a3)
{
  char **v3; // rsi
  int v4; // r12d
  PenWorkspace::Discover::RecentAppsCache *v5; // r15
  int SortedAppList; // eax
  unsigned int v7; // r14d
  void *v8; // rdi
  char *i; // rbx
  std::_Ref_count_base *v10; // rcx
  int v12; // eax
  char *j; // rbx
  std::_Ref_count_base *v14; // rcx
  char *v15; // rdi
  _QWORD *v16; // rbx
  _QWORD *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rcx
  char *v20; // rdx
  const char *v21; // r9
  char *k; // rbx
  std::_Ref_count_base *v23; // rcx
  _QWORD *v24; // [rsp+28h] [rbp-90h]
  __int128 v25; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-68h] BYREF
  char *v27; // [rsp+60h] [rbp-58h] BYREF
  __int128 v28; // [rsp+68h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v33; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  v27 = 0LL;
  v28 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, &v27);
  v7 = SortedAppList;
  if ( SortedAppList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
    v8 = v27;
    if ( !v27 )
      return v7;
    for ( i = v27; i != (char *)v28; i += 16 )
    {
      v10 = (std::_Ref_count_base *)*((_QWORD *)i + 1);
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
    }
LABEL_7:
    std::_Deallocate<16,0>(
      v8,
      (const struct std::nothrow_t *)((*((_QWORD *)&v28 + 1) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL));
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
    v8 = v27;
    if ( !v27 )
      return v7;
    for ( j = v27; j != (char *)v28; j += 16 )
    {
      v14 = (std::_Ref_count_base *)*((_QWORD *)j + 1);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
    goto LABEL_7;
  }
  v15 = v27;
  v16 = v27;
  v17 = (_QWORD *)v28;
  v24 = (_QWORD *)v28;
  while ( v16 != v17 )
  {
    v18 = v16[1];
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
      v18 = v16[1];
      v15 = v27;
    }
    v26[0] = *v16;
    v26[1] = v18;
    if ( (unsigned __int8)PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(v5, v26) )
    {
      v33 = 0LL;
      v25 = 0LL;
      v19 = v16[1];
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        v19 = v16[1];
        v15 = v27;
      }
      *(_QWORD *)&v25 = *v16;
      *((_QWORD *)&v25 + 1) = v19;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
      if ( (int)PenWorkspace::Discover::RecentAppsCache::CreateRecentItem((__int64)v5, (__int64)&v25, &v33) >= 0 )
      {
        v20 = v3[1];
        if ( v3[2] == v20 )
        {
          std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IDiscoverRecentItem> &>(
            v3,
            v20,
            &v33);
        }
        else
        {
          *(_QWORD *)v20 = v33;
          if ( v33 )
          {
            try
            {
              (*(void (**)(void))(*(_QWORD *)v33 + 8LL))();
            }
            catch ( ... )
            {
              wil::details::in1diag3::Log_CaughtException(
                retaddr,
                (void *)0xC4,
                (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                v21);
              v5 = this;
              v3 = a3;
              v4 = a2;
              v15 = v27;
              v17 = v24;
              goto LABEL_30;
            }
          }
          v3[1] += 8;
        }
        if ( (int)((v3[1] - *v3) >> 3) >= v4 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
          break;
        }
      }
LABEL_30:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    }
    v16 += 2;
  }
  if ( v15 )
  {
    for ( k = v15; k != (char *)v28; k += 16 )
    {
      v23 = (std::_Ref_count_base *)*((_QWORD *)k + 1);
      if ( v23 )
        std::_Ref_count_base::_Decref(v23);
    }
    std::_Deallocate<16,0>(
      v15,
      (const struct std::nothrow_t *)((*((_QWORD *)&v28 + 1) - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  return 0LL;
}
