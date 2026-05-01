/*
 * XREFs of ??1?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAA@XZ @ 0x1801DFE4C
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1801E0948 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetMRUApps_::_1_::dtor$0 @ 0x1801E0BB4 (_PenWorkspace--Discover--RecentAppsCache--GetMRUApps_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::HaveUsedPen_::_1_::dtor$0 @ 0x1801E0DC1 (_PenWorkspace--Discover--RecentAppsCache--HaveUsedPen_--_1_--dtor$0.c)
 *     ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1801E2AF4 (-SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows.c)
 *     _PenWorkspace::Discover::RecentAppsCache::SaveDataToJson_::_1_::dtor$0 @ 0x1801E3159 (_PenWorkspace--Discover--RecentAppsCache--SaveDataToJson_--_1_--dtor$0.c)
 *     _PeoplePaneViewManager::ClosePeoplePane_::_1_::dtor$1 @ 0x18021FFD6 (_PeoplePaneViewManager--ClosePeoplePane_--_1_--dtor$1.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$19 @ 0x18030D066 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$19.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18030D5B4 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>(
        __int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi
  std::_Ref_count_base *v4; // rcx

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        v4 = (std::_Ref_count_base *)v1[1];
        if ( v4 )
          std::_Ref_count_base::_Decref(v4);
        v1 += 2;
      }
      while ( v1 != v3 );
      v1 = *(_QWORD **)a1;
    }
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
