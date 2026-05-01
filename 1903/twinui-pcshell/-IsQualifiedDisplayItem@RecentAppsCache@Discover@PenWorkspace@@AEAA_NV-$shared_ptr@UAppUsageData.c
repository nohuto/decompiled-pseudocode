/*
 * XREFs of ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x1801E0F58
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1801E0948 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1801E1558 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _anonymous_namespace_::IsAppInBlackList @ 0x1801E0ECC (_anonymous_namespace_--IsAppInBlackList.c)
 *     ?MatchesStickyNote@RecentAppsCache@Discover@PenWorkspace@@AEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801E1EF4 (-MatchesStickyNote@RecentAppsCache@Discover@PenWorkspace@@AEBA_NAEBV-$basic_string@GU-$char_trai.c)
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x1804074C4 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 */

char __fastcall PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(__int64 a1, const WCHAR **a2)
{
  const WCHAR *v4; // rcx
  WCHAR *v5; // rbx
  WCHAR *v6; // rcx
  __int64 v7; // rdx
  const wchar_t *v8; // rax
  signed __int64 v9; // rcx
  wchar_t v10; // r8
  int v11; // eax
  RTL_SRWLOCK *v12; // rbx
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v15; // rcx

  v4 = *a2;
  if ( *((_QWORD *)*a2 + 3) >= 8uLL )
    v4 = *(const WCHAR **)v4;
  if ( CallerIdentity::IsShellExperienceAppId(v4, (const unsigned __int16 *)a2) )
    goto LABEL_18;
  v5 = (WCHAR *)*a2;
  if ( (unsigned __int8)PenWorkspace::Discover::RecentAppsCache::MatchesStickyNote(a1, *a2) )
    goto LABEL_18;
  v6 = v5;
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v6 = *(WCHAR **)v5;
  v7 = 26LL;
  if ( *((_QWORD *)v5 + 2) == 26LL )
  {
    v8 = L"Microsoft.Windows.Explorer";
    v9 = (char *)v6 - (char *)L"Microsoft.Windows.Explorer";
    while ( 1 )
    {
      v10 = *(const wchar_t *)((char *)v8 + v9);
      if ( v10 != *v8 )
        break;
      ++v8;
      if ( !--v7 )
      {
        v11 = 0;
        goto LABEL_13;
      }
    }
    v11 = v10 < *v8 ? -1 : 1;
LABEL_13:
    if ( !v11 )
      goto LABEL_18;
  }
  if ( anonymous_namespace_::IsAppInBlackList((char *)v5) )
    goto LABEL_18;
  v12 = (RTL_SRWLOCK *)(v5 + 24);
  AcquireSRWLockShared(v12);
  if ( *((int *)*a2 + 8) < 15 )
  {
    if ( v12 )
      ReleaseSRWLockShared(v12);
LABEL_18:
    v13 = (std::_Ref_count_base *)a2[1];
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    return 0;
  }
  if ( v12 )
    ReleaseSRWLockShared(v12);
  v15 = (std::_Ref_count_base *)a2[1];
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  return 1;
}
