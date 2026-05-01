/*
 * XREFs of ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18019A0A0
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180199ABC (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18019A6B0 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _anonymous_namespace_::IsAppInBlackList @ 0x18019A040 (_anonymous_namespace_--IsAppInBlackList.c)
 *     ?MatchesStickyNote@RecentAppsCache@Discover@PenWorkspace@@AEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18019B008 (-MatchesStickyNote@RecentAppsCache@Discover@PenWorkspace@@AEBA_NAEBV-$basic_string@GU-$char_trai.c)
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x1803A178C (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 */

char __fastcall PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(__int64 a1, const WCHAR **a2)
{
  const WCHAR *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rdx
  const wchar_t *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  std::_Ref_count_base *v10; // rcx
  RTL_SRWLOCK *v12; // rbx
  std::_Ref_count_base *v13; // rcx

  v4 = *a2;
  if ( *((_QWORD *)*a2 + 3) >= 8uLL )
    v4 = *(const WCHAR **)v4;
  if ( CallerIdentity::IsShellExperienceAppId(v4, (const unsigned __int16 *)a2) )
    goto LABEL_11;
  v5 = (__int64 *)*a2;
  if ( (unsigned __int8)PenWorkspace::Discover::RecentAppsCache::MatchesStickyNote(a1, *a2) )
    goto LABEL_11;
  v6 = (__int64)v5;
  if ( (unsigned __int64)v5[3] >= 8 )
    v6 = *v5;
  if ( v5[2] == 26 )
  {
    v7 = L"Microsoft.Windows.Explorer";
    v8 = 26LL;
    v9 = v6 - (_QWORD)L"Microsoft.Windows.Explorer";
    while ( *(const wchar_t *)((char *)v7 + v9) == *v7 )
    {
      ++v7;
      if ( !--v8 )
        goto LABEL_11;
    }
  }
  if ( anonymous_namespace_::IsAppInBlackList(v5) )
  {
LABEL_11:
    v10 = (std::_Ref_count_base *)a2[1];
    if ( !v10 )
      return 0;
LABEL_12:
    std::_Ref_count_base::_Decref(v10);
    return 0;
  }
  v12 = (RTL_SRWLOCK *)(v5 + 6);
  AcquireSRWLockShared(v12);
  if ( *((int *)*a2 + 8) < 15 )
  {
    if ( v12 )
      ReleaseSRWLockShared(v12);
    v10 = (std::_Ref_count_base *)a2[1];
    if ( !v10 )
      return 0;
    goto LABEL_12;
  }
  if ( v12 )
    ReleaseSRWLockShared(v12);
  v13 = (std::_Ref_count_base *)a2[1];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  return 1;
}
